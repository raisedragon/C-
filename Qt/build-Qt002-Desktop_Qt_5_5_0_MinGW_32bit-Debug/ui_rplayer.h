/********************************************************************************
** Form generated from reading UI file 'rplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPLAYER_H
#define UI_RPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RPlayer
{
public:
    QFrame *frame;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;

    void setupUi(QDialog *RPlayer)
    {
        if (RPlayer->objectName().isEmpty())
            RPlayer->setObjectName(QStringLiteral("RPlayer"));
        RPlayer->resize(513, 348);
        frame = new QFrame(RPlayer);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 44, 509, 271));
        widget = new QWidget(RPlayer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 320, 401, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        widget1 = new QWidget(RPlayer);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(5, 11, 501, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_2->addWidget(pushButton_7);

        widget->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_4->raise();

        retranslateUi(RPlayer);

        QMetaObject::connectSlotsByName(RPlayer);
    } // setupUi

    void retranslateUi(QDialog *RPlayer)
    {
        RPlayer->setWindowTitle(QApplication::translate("RPlayer", "RPlayer", 0));
        pushButton_3->setText(QApplication::translate("RPlayer", "Prev", 0));
        pushButton->setText(QApplication::translate("RPlayer", "Start", 0));
        pushButton_5->setText(QApplication::translate("RPlayer", "Paush", 0));
        pushButton_2->setText(QApplication::translate("RPlayer", "Stop", 0));
        pushButton_4->setText(QApplication::translate("RPlayer", "Next", 0));
        pushButton_6->setText(QApplication::translate("RPlayer", "Setting", 0));
        pushButton_8->setText(QApplication::translate("RPlayer", "About", 0));
        pushButton_7->setText(QApplication::translate("RPlayer", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class RPlayer: public Ui_RPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPLAYER_H
