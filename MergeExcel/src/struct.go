package main

const NUM_OFFSET = 65 // 'A'
type SrcExcelData struct {
	SrcExcelPath string
	SrcSheetName string
	StrContext   string
	SrcColumn1   string
	DstColumn1   string
}

type DstExcelData struct {
	DstExcelPath string
	DstSheetName string
	StrContext   string
	SrcColumn2   string
	DstColumn2   string
}
type JsonData struct {
	DstJson DstExcelData
	SrcJson SrcExcelData
}
