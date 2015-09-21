/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *decoderTab;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *enocde;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *outputPath;
    QPushButton *outputSelect;
    QTextEdit *inputFileCode;
    QWidget *encoderTab;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QStringLiteral("MainDialog"));
        MainDialog->resize(800, 540);
        tabWidget = new QTabWidget(MainDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 781, 531));
        tabWidget->setAutoFillBackground(false);
        decoderTab = new QWidget();
        decoderTab->setObjectName(QStringLiteral("decoderTab"));
        widget = new QWidget(decoderTab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 771, 491));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        enocde = new QPushButton(widget);
        enocde->setObjectName(QStringLiteral("enocde"));

        gridLayout_2->addWidget(enocde, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        outputPath = new QLineEdit(widget);
        outputPath->setObjectName(QStringLiteral("outputPath"));

        gridLayout->addWidget(outputPath, 0, 1, 1, 1);

        outputSelect = new QPushButton(widget);
        outputSelect->setObjectName(QStringLiteral("outputSelect"));

        gridLayout->addWidget(outputSelect, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        inputFileCode = new QTextEdit(widget);
        inputFileCode->setObjectName(QStringLiteral("inputFileCode"));

        gridLayout_2->addWidget(inputFileCode, 0, 0, 1, 1);

        tabWidget->addTab(decoderTab, QString());
        encoderTab = new QWidget();
        encoderTab->setObjectName(QStringLiteral("encoderTab"));
        tabWidget->addTab(encoderTab, QString());

        retranslateUi(MainDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "MainDialog", 0));
        enocde->setText(QApplication::translate("MainDialog", "encode", 0));
        label->setText(QApplication::translate("MainDialog", "Output path", 0));
        outputSelect->setText(QApplication::translate("MainDialog", "select", 0));
        tabWidget->setTabText(tabWidget->indexOf(decoderTab), QApplication::translate("MainDialog", "Decoder", 0));
        tabWidget->setTabText(tabWidget->indexOf(encoderTab), QApplication::translate("MainDialog", "Encoder", 0));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
