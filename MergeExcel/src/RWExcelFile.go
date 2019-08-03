package main

import (
	"encoding/json"
	"errors"
	"fmt"
	"github.com/Luxurioust/excelize"
	"net"
	"os"
	"strconv"
)

func main() {
	udp_addr, err := net.ResolveUDPAddr("udp", ":6665")
	checkError(err)

	conn, err := net.ListenUDP("udp", udp_addr)
	defer conn.Close()
	checkError(err)

	recvUDPMsg(conn)
}

//func copy(src, dst string) (int64, error) {
//	sourceFileStat, err := os.Stat(src)
//	if err != nil {
//		return 0, err
//	}
//
//	if !sourceFileStat.Mode().IsRegular() {
//		return 0, fmt.Errorf("%s is not a regular file", src)
//	}
//
//	source, err := os.Open(src)
//	if err != nil {
//		return 0, err
//	}
//	defer source.Close()
//
//	destination, err := os.Create(dst)
//	if err != nil {
//		return 0, err
//	}
//	defer destination.Close()
//	nBytes, err := io.Copy(destination, source)
//	return nBytes, err
//}
func recvUDPMsg(conn *net.UDPConn) {
	buf := make([]byte, 500)

	n, _, err := conn.ReadFromUDP(buf[0:])
	if err != nil {
		fmt.Println("err is ", err)
		return
	}
	// 解析json数据
	var jsonData JsonData
	err = json.Unmarshal(buf[0:n], &jsonData) // 必须指定最后的长度，否则解析失败，存在0x00错误
	if err != nil {
		fmt.Println("err is sss", err)
		return
	}
	// 读取源excel文件指定列内容
	srcFileName := jsonData.SrcJson.SrcExcelPath
	//strSrcColumn := "C"
	srcXls, err := excelize.OpenFile(srcFileName)
	if err != nil {
		fmt.Printf("open failed: %s\n", err)
	}
	srcRowsData, _ := srcXls.GetRows(jsonData.SrcJson.SrcSheetName)
	fmt.Println(srcRowsData)

	// 合并到目的excel文件
	dstFileName := jsonData.DstJson.DstExcelPath
	dstxls, err := excelize.OpenFile(dstFileName)

	if err != nil {
		fmt.Printf("open failed: %s\n", err)
		return
	}
	dstRowsData, _ := dstxls.GetRows(jsonData.DstJson.DstSheetName) // 哪个Sheet
	// 先备份目的文件
	//copy(dstFileName, "dst_bak.xlsx")

	srcSrcColumn, err := getColumnIndex(jsonData.SrcJson.SrcColumn1)
	dstSrcColumn, err := getColumnIndex(jsonData.DstJson.SrcColumn2)
	srcDstColumn, err := getColumnIndex(jsonData.SrcJson.DstColumn1)
	dstDstColumn, err := getColumnIndex(jsonData.DstJson.DstColumn2)
	srcContextColumn, err := getColumnIndex(jsonData.SrcJson.StrContext)
	dstContextColumn, err := getColumnIndex(jsonData.DstJson.StrContext)
	fmt.Printf("srcs = %v, dsts = %v", jsonData.DstJson.StrContext, dstContextColumn)
	if err != nil {
		fmt.Println(err)
		return
	}
	// 合并：从哪一行开始到哪一行结束   模块相同与源词条一致时合并目的词条
	for i, dstData := range dstRowsData {
		for _, srcData := range srcRowsData {
			if srcData[srcSrcColumn] == dstData[dstSrcColumn] && srcData[dstContextColumn] == dstData[srcContextColumn] &&
				srcData[srcDstColumn] != dstData[dstDstColumn] {
				// 注意i从0开始计数
				dstxls.SetCellStr(jsonData.DstJson.DstSheetName, jsonData.DstJson.DstColumn2+strconv.Itoa(i+1),
					srcData[srcDstColumn])
				continue
			}
		}

	}
	err = dstxls.Save()
	if err != nil {
		fmt.Printf("save err=%s\n", err)
	}
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Error: %s", err.Error())
		os.Exit(1)
	}
}

/*将字母转换为数字*/
func getColumnIndex(strColumn string) (int, error) {
	bytes := []byte(strColumn)
	if len(bytes) > 0 {
		return int(bytes[0]) - NUM_OFFSET, nil
	}
	return 0, errors.New("Get Column Index failed!")
}
