/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *srcSheet;
    QLineEdit *dstColumn1;
    QPushButton *srcBrowserBtn;
    QLineEdit *srcColumn1;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *srcExcelPath;
    QLabel *label_9;
    QLineEdit *srcModuleIndex;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QLineEdit *srcColumn2;
    QLineEdit *dstSheet;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_2;
    QLineEdit *dstExcelPath;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *dstBrowserBtn;
    QLineEdit *dstColumn2;
    QLabel *label_10;
    QLineEdit *dstModuleIndex;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(466, 277);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        srcSheet = new QLineEdit(tab);
        srcSheet->setObjectName(QString::fromUtf8("srcSheet"));

        gridLayout_3->addWidget(srcSheet, 1, 1, 1, 1);

        dstColumn1 = new QLineEdit(tab);
        dstColumn1->setObjectName(QString::fromUtf8("dstColumn1"));

        gridLayout_3->addWidget(dstColumn1, 4, 1, 1, 1);

        srcBrowserBtn = new QPushButton(tab);
        srcBrowserBtn->setObjectName(QString::fromUtf8("srcBrowserBtn"));

        gridLayout_3->addWidget(srcBrowserBtn, 0, 3, 1, 1);

        srcColumn1 = new QLineEdit(tab);
        srcColumn1->setObjectName(QString::fromUtf8("srcColumn1"));

        gridLayout_3->addWidget(srcColumn1, 3, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 2, 1, 2);

        srcExcelPath = new QLineEdit(tab);
        srcExcelPath->setObjectName(QString::fromUtf8("srcExcelPath"));

        gridLayout_3->addWidget(srcExcelPath, 0, 1, 1, 2);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        srcModuleIndex = new QLineEdit(tab);
        srcModuleIndex->setObjectName(QString::fromUtf8("srcModuleIndex"));

        gridLayout_3->addWidget(srcModuleIndex, 2, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        srcColumn2 = new QLineEdit(tab_2);
        srcColumn2->setObjectName(QString::fromUtf8("srcColumn2"));

        gridLayout_2->addWidget(srcColumn2, 3, 1, 1, 1);

        dstSheet = new QLineEdit(tab_2);
        dstSheet->setObjectName(QString::fromUtf8("dstSheet"));

        gridLayout_2->addWidget(dstSheet, 1, 1, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        dstExcelPath = new QLineEdit(tab_2);
        dstExcelPath->setObjectName(QString::fromUtf8("dstExcelPath"));

        gridLayout_2->addWidget(dstExcelPath, 0, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 2, 1, 2);

        dstBrowserBtn = new QPushButton(tab_2);
        dstBrowserBtn->setObjectName(QString::fromUtf8("dstBrowserBtn"));

        gridLayout_2->addWidget(dstBrowserBtn, 0, 3, 1, 1);

        dstColumn2 = new QLineEdit(tab_2);
        dstColumn2->setObjectName(QString::fromUtf8("dstColumn2"));

        gridLayout_2->addWidget(dstColumn2, 4, 1, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        dstModuleIndex = new QLineEdit(tab_2);
        dstModuleIndex->setObjectName(QString::fromUtf8("dstModuleIndex"));

        gridLayout_2->addWidget(dstModuleIndex, 2, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 466, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "srccolumn:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "srcexcel:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "dstcolumn:", nullptr));
        srcSheet->setText(QApplication::translate("MainWindow", "Sheet1", nullptr));
        dstColumn1->setText(QApplication::translate("MainWindow", "G", nullptr));
        srcBrowserBtn->setText(QApplication::translate("MainWindow", "Browser", nullptr));
        srcColumn1->setText(QApplication::translate("MainWindow", "B", nullptr));
        label->setText(QApplication::translate("MainWindow", "srcsheet:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "contextcolumn:", nullptr));
        srcModuleIndex->setText(QApplication::translate("MainWindow", "A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Source Settings", nullptr));
        srcColumn2->setText(QApplication::translate("MainWindow", "B", nullptr));
        dstSheet->setText(QApplication::translate("MainWindow", "Sheet1", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "dstcolumn:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "srccolumn:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "dstexcel:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "dstsheet:", nullptr));
        dstBrowserBtn->setText(QApplication::translate("MainWindow", "Browser", nullptr));
        dstColumn2->setText(QApplication::translate("MainWindow", "G", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "contextcolumn:", nullptr));
        dstModuleIndex->setText(QApplication::translate("MainWindow", "A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Dist Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
