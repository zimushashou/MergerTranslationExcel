#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QJsonArray>
#include <QJsonObject>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_sender = new QUdpSocket(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBox_accepted()
{
    QJsonObject srcObject;
    srcObject.insert("srcExcelPath", ui->srcExcelPath->text());
    srcObject.insert("srcSheetName", ui->srcSheet->text());
    srcObject.insert("srcColumn1", ui->srcColumn1->text());
    srcObject.insert("dstColumn1", ui->dstColumn1->text());
    srcObject.insert("strContext", ui->srcModuleIndex->text());

    QJsonObject dstObject;
    dstObject.insert("dstExcelPath", ui->dstExcelPath->text());
    dstObject.insert("dstSheetName", ui->dstSheet->text());
    dstObject.insert("srcColumn2", ui->srcColumn2->text());
    dstObject.insert("dstColumn2", ui->dstColumn2->text());
    dstObject.insert("strContext", ui->dstModuleIndex->text());

    QJsonObject jsonData;
    jsonData.insert("srcJson", QJsonValue(srcObject));
    jsonData.insert("dstJson", QJsonValue(dstObject));

    // 构建 Json 文档
    QJsonDocument document;
    document.setObject(jsonData);
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString strJson(byteArray);

    qDebug() << strJson;

    //UDP广播
    m_sender->writeDatagram(byteArray.data(),byteArray.size(),QHostAddress::Broadcast,6665);
//    //向特定IP发送
//    QHostAddress serverAddress = QHostAddress("10.21.11.66");
//    sender->writeDatagram(datagram.data(), datagram.size(),serverAddress, 6665);
}

void MainWindow::on_buttonBox_rejected()
{

}

void MainWindow::on_srcBrowserBtn_clicked()
{
    QString strPath = QFileDialog::getOpenFileName(this, tr("Source Excel file"), ".", tr("Excel Files(*.xlsx)"));
    ui->srcExcelPath->setText(strPath);
}

void MainWindow::on_dstBrowserBtn_clicked()
{
    QString strPath = QFileDialog::getOpenFileName(this, tr("Dist Excel file"), ".", tr("Excel Files(*.xlsx)"));
    ui->dstExcelPath->setText(strPath);
}
