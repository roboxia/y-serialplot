/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drawplot.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBox_port;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboBox_baud;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBox_open;
    QSpacerItem *horizontalSpacer_18;
    QCheckBox *checkBox_stop;
    QSpacerItem *horizontalSpacer_17;
    QCheckBox *checkBox_auto;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pushButton_reset;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButton_showall;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pushButton_hideall;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_clear;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_output;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_help;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_little;
    QPushButton *pushButton_size;
    QPushButton *pushButton_close;
    QSpacerItem *horizontalSpacer_13;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QScrollBar *scrollBar_pos;
    drawPlot *plotView;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_14;
    QWidget *widget_tools;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinBox_buff;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_wind;
    QPushButton *pushButton_resetKey;
    QPushButton *pushButton_resetCmd;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1536, 1034);
        Widget->setMinimumSize(QSize(1536, 1034));
        Widget->setCursor(QCursor(Qt::ArrowCursor));
        Widget->setStyleSheet(QString::fromUtf8("\n"
"/***********************\345\205\250\345\261\200*****************************/\n"
"QWidget\n"
"{\n"
"	background-color:rgb(222, 241, 255);\n"
"	\n"
"}\n"
"\n"
"/*\344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\350\276\271\346\241\206*/\n"
"QComboBox::drop-down \n"
"{\n"
"	border:none;\n"
"}\n"
"\n"
"QComboBox::down-arrow \n"
"{\n"
"    right:2px;/*\346\216\247\345\210\266\347\256\255\345\244\264\345\267\246\345\217\263\345\201\217\347\247\273*/\n"
"    width: 13px;  \n"
"    height: 13px;   \n"
"    image:url(:/img/V.svg);\n"
"}\n"
"\n"
"QWidget#chartview\n"
"{\n"
"	background-color:#ffffff;\n"
"}\n"
"\n"
"/******************title************************/\n"
"\n"
"QLabel#logo\n"
"{\n"
"	border-image:url(:/img/logo.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_close\n"
"{\n"
"	height:30px;\n"
"	width:50px;\n"
"	border:none;\n"
"	qproperty-icon:url(:/img/close.svg);\n"
"	qproperty-iconSize: 20px 20px;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_size\n"
"{\n"
"	height:30px;\n"
"	width:50px;\n"
""
                        "	border:none;\n"
"	qproperty-icon:url(:/img/size-2.svg);\n"
"qproperty-iconSize: 20px 20px;\n"
"}\n"
"\n"
"QPushButton#pushButton_little\n"
"{\n"
"	height:30px;\n"
"	width:50px;\n"
"	border:none;\n"
"	qproperty-icon:url(:/img/little.svg);\n"
"qproperty-iconSize: 20px 20px;\n"
"}\n"
"\n"
"QPushButton#pushButton_setup\n"
"{\n"
"	border-image:url(:/img/setup.svg);\n"
"	max-height:28px;\n"
"	max-width:28px;\n"
"}\n"
"\n"
"QPushButton#pushButton_clear\n"
"{\n"
"	border-image:url(:/img/clear.svg);\n"
"	max-height:28px;\n"
"	max-width:28px;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_showall\n"
"{\n"
"	border-image:url(:/img/showall.png);\n"
"	max-height:28px;\n"
"	max-width:28px;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_hideall\n"
"{\n"
"	border-image:url(:/img/hideall.png);\n"
"	max-height:28px;\n"
"	max-width:28px;\n"
"}\n"
"\n"
"QPushButton#pushButton_reset\n"
"{\n"
"	border-image:url(:/img/reset.png);\n"
"	max-height:28px;\n"
"	max-width:28px;\n"
"}\n"
"\n"
"QPushButton#pushButton_help\n"
"{\n"
"	border-image:u"
                        "rl(:/img/help.svg);\n"
"	max-height:28px;\n"
"	max-width:28px;\n"
"}\n"
"\n"
"QPushButton#pushButton_output\n"
"{\n"
"	border-image:url(:/img/output.svg);\n"
"	max-height:28px;\n"
"	max-width:28px;\n"
"}\n"
"\n"
"\n"
"QComboBox#comboBox_baud\n"
"{\n"
"	background-color:rgb(247, 251, 253);\n"
"	border-radius:5px;\n"
"\n"
"}\n"
"\n"
"QComboBox#comboBox_port\n"
"{\n"
"	background-color:rgb(247, 251, 253);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
"/*\345\215\225\351\200\211\346\241\206\346\234\252\351\200\211\344\270\255\346\240\267\345\274\217*/\n"
"QCheckBox#checkBox_open::indicator::unchecked {\n"
"	image:url(:/img/open-off.svg);\n"
"}\n"
"/*\345\215\225\351\200\211\346\241\206\351\200\211\344\270\255\346\240\267\345\274\217*/\n"
"QCheckBox#checkBox_open::indicator::checked { \n"
"	image:url(:/img/open-on.svg);\n"
"}\n"
"\n"
"QCheckBox#checkBox_open::indicator{ \n"
"	width: 50px;\n"
"	height: 28px;\n"
"}\n"
"QCheckBox#checkBox_open{ \n"
"	max-width: 50px;\n"
"	max-height: 28px;\n"
"}\n"
"\n"
"/*\345\215\225"
                        "\351\200\211\346\241\206\346\234\252\351\200\211\344\270\255\346\240\267\345\274\217*/\n"
"QCheckBox#checkBox_stop::indicator::unchecked {\n"
"	image:url(:/img/stop-off.svg);\n"
"}\n"
"/*\345\215\225\351\200\211\346\241\206\351\200\211\344\270\255\346\240\267\345\274\217*/\n"
"QCheckBox#checkBox_stop::indicator::checked { \n"
"	image:url(:/img/stop-on.svg);\n"
"}\n"
"\n"
"QCheckBox#checkBox_stop::indicator{ \n"
"	width: 28px;\n"
"	height: 28px;\n"
"}\n"
"QCheckBox#checkBox_stop{ \n"
"	max-width: 28px;\n"
"	max-height: 28px;\n"
"}\n"
"\n"
"/*\345\215\225\351\200\211\346\241\206\346\234\252\351\200\211\344\270\255\346\240\267\345\274\217*/\n"
"QCheckBox#checkBox_auto::indicator::unchecked {\n"
"	image:url(:/img/y-auto.png);\n"
"}\n"
"/*\345\215\225\351\200\211\346\241\206\351\200\211\344\270\255\346\240\267\345\274\217*/\n"
"QCheckBox#checkBox_auto::indicator::checked { \n"
"	image:url(:/img/y-manual.png);\n"
"}\n"
"\n"
"QCheckBox#checkBox_auto::indicator{ \n"
"	width: 28px;\n"
"	height: 28px;\n"
"}\n"
"QCheckBo"
                        "x#checkBox_auto{ \n"
"	max-width: 28px;\n"
"	max-height: 28px;\n"
"}\n"
"\n"
"\n"
"\n"
"/**************************tools**************************/\n"
"QWidget#widget_tools\n"
"{\n"
"	background-color:#F7FBFD;\n"
"	border-radius:10px;\n"
"}\n"
"QLabel#label_datatype\n"
"{\n"
"	background-color:#F7FBFD;\n"
"}\n"
"QLabel#label_channel\n"
"{\n"
"	background-color:#F7FBFD;\n"
"}\n"
"\n"
"QComboBox#comboBox_datatype\n"
"{\n"
"	background-color:rgb(222, 241, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QSpinBox {\n"
"	padding-right:20px;\n"
"	border-radius:5px;\n"
"	background:rgb(222, 241, 255);\n"
"}\n"
"\n"
"/* \345\220\221\344\270\212\346\214\211\351\222\256 */\n"
"QSpinBox::up-button {\n"
"top:6px;\n"
"right:10px;/*\346\216\247\345\210\266\347\256\255\345\244\264\345\267\246\345\217\263\345\201\217\347\247\273*/\n"
"	width:10px;\n"
"	height: 10px;   \n"
"	border-image:url(:/img/up.svg);\n"
"	border-width:1px;\n"
"}\n"
"\n"
"\n"
"/* \345\220\221\344\270\213\346\214\211\351\222\256 */\n"
"QSpinBox:"
                        ":down-button {\n"
"bottom:6px;\n"
"right:10px;/*\346\216\247\345\210\266\347\256\255\345\244\264\345\267\246\345\217\263\345\201\217\347\247\273*/\n"
"	width:10px;\n"
"	height: 10px;   \n"
"	border-image:url(:/img/down.svg);\n"
"	border-width:1px;\n"
"	border-top-width:0;\n"
"}\n"
"\n"
"QPushButton#pushButton_resetCmd\n"
"{\n"
"	border-radius:5px;\n"
"	background:rgb(222, 241, 255);;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_resetKey\n"
"{\n"
"	border-radius:5px;\n"
"	background:rgb(222, 241, 255);\n"
"}\n"
"\n"
"\n"
"/********************************************************/\n"
"QWidget#scrollAreaWidgetContents{\n"
"	border:none;\n"
"	border-radius:10px;\n"
"	background-color: #F7FBFD;\n"
"}\n"
"\n"
"/*frame\350\276\271\346\241\206\346\230\257\345\234\250qt designer\344\270\255\345\216\273\351\231\244\347\232\204*/\n"
"\n"
"\n"
"\n"
"QScrollBar:vertical {\n"
"border: none;\n"
"background: #f5f5f7;\n"
"width: 10px;\n"
"margin: 0px 0 0px 0;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"background: Gainsboro;\n"
""
                        "min-height: 20px;\n"
"border-radius: 5px;\n"
"border: none;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"border: 0px solid grey;\n"
"background: #818080;\n"
"height: 0px;\n"
"subcontrol-position: bottom;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"border: 0px solid grey;\n"
"background: #818080;\n"
"height: 0px;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"background: none;\n"
"width: 0px;\n"
"height: 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"QScrollBar:horizontal {\n"
"      border: 0px solid grey;\n"
"border-radius: 5px;\n"
"      background: #f5f5f7;\n"
"      height: 13px;\n"
"      margin: 0px 00px 0 0px;\n"
"  }\n"
"  QScrollBar::handle:horizontal {\n"
"      background: Gainsboro;\n"
"      min-width: 20px;\n"
"		border-radius: 5px;\n"
"  }\n"
"  QScrollBar::add-line:horizontal {\n"
"border: 0px solid grey;\n"
"background: #818080;\n"
"height: 0px;\n"
"subcontrol-position: bottom;\n"
"subco"
                        "ntrol-origin: margin;\n"
"  }\n"
"\n"
"  QScrollBar::sub-line:horizontal {\n"
"	border: 0px solid grey;\n"
"background: #818080;\n"
"height: 0px;\n"
"subcontrol-position: bottom;\n"
"subcontrol-origin: margin;\n"
"  }\n"
" QScrollBar:left-arrow:horizontal, QScrollBar::right-arrow:horizontal {\n"
"      border: 2px solid grey;\n"
"      width: 3px;\n"
"      height: 3px;\n"
"      background: white;\n"
"  }\n"
"\n"
"  QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"      background: none;\n"
"  }"));
        verticalLayout_5 = new QVBoxLayout(Widget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(Widget);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(0, 70));
        widget_title->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(widget_title);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(26, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        logo = new QLabel(widget_title);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy1);
        logo->setMinimumSize(QSize(154, 34));
        logo->setStyleSheet(QStringLiteral(""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/picture/logo.svg")));

        horizontalLayout_4->addWidget(logo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        comboBox_port = new QComboBox(widget_title);
        comboBox_port->setObjectName(QStringLiteral("comboBox_port"));
        sizePolicy1.setHeightForWidth(comboBox_port->sizePolicy().hasHeightForWidth());
        comboBox_port->setSizePolicy(sizePolicy1);
        comboBox_port->setMinimumSize(QSize(207, 28));
        comboBox_port->setMaximumSize(QSize(207, 28));
        comboBox_port->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_port->setMouseTracking(true);
        comboBox_port->setFocusPolicy(Qt::ClickFocus);
        comboBox_port->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(comboBox_port);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        comboBox_baud = new QComboBox(widget_title);
        comboBox_baud->setObjectName(QStringLiteral("comboBox_baud"));
        sizePolicy1.setHeightForWidth(comboBox_baud->sizePolicy().hasHeightForWidth());
        comboBox_baud->setSizePolicy(sizePolicy1);
        comboBox_baud->setMinimumSize(QSize(127, 28));
        comboBox_baud->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_baud->setMouseTracking(true);
        comboBox_baud->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_4->addWidget(comboBox_baud);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        checkBox_open = new QCheckBox(widget_title);
        checkBox_open->setObjectName(QStringLiteral("checkBox_open"));
        checkBox_open->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_open->setMouseTracking(true);

        horizontalLayout_4->addWidget(checkBox_open);

        horizontalSpacer_18 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        checkBox_stop = new QCheckBox(widget_title);
        checkBox_stop->setObjectName(QStringLiteral("checkBox_stop"));
        checkBox_stop->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(checkBox_stop);

        horizontalSpacer_17 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_17);

        checkBox_auto = new QCheckBox(widget_title);
        checkBox_auto->setObjectName(QStringLiteral("checkBox_auto"));
        checkBox_auto->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(checkBox_auto);

        horizontalSpacer_19 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_19);

        pushButton_reset = new QPushButton(widget_title);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(pushButton_reset);

        horizontalSpacer_20 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_20);

        pushButton_showall = new QPushButton(widget_title);
        pushButton_showall->setObjectName(QStringLiteral("pushButton_showall"));
        pushButton_showall->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_showall->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_4->addWidget(pushButton_showall);

        horizontalSpacer_21 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_21);

        pushButton_hideall = new QPushButton(widget_title);
        pushButton_hideall->setObjectName(QStringLiteral("pushButton_hideall"));
        pushButton_hideall->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_hideall->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_4->addWidget(pushButton_hideall);

        horizontalSpacer = new QSpacerItem(358, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_clear = new QPushButton(widget_title);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy2);
        pushButton_clear->setMinimumSize(QSize(0, 0));
        pushButton_clear->setMaximumSize(QSize(28, 28));
        pushButton_clear->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(pushButton_clear);

        horizontalSpacer_12 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        pushButton_output = new QPushButton(widget_title);
        pushButton_output->setObjectName(QStringLiteral("pushButton_output"));
        pushButton_output->setCursor(QCursor(Qt::ForbiddenCursor));

        horizontalLayout_4->addWidget(pushButton_output);

        horizontalSpacer_10 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        pushButton_help = new QPushButton(widget_title);
        pushButton_help->setObjectName(QStringLiteral("pushButton_help"));
        pushButton_help->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(pushButton_help);

        horizontalSpacer_9 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        pushButton_little = new QPushButton(widget_title);
        pushButton_little->setObjectName(QStringLiteral("pushButton_little"));
        pushButton_little->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_little->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButton_little);

        pushButton_size = new QPushButton(widget_title);
        pushButton_size->setObjectName(QStringLiteral("pushButton_size"));
        pushButton_size->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_size->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButton_size);

        pushButton_close = new QPushButton(widget_title);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_close->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButton_close);

        horizontalSpacer_13 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);


        verticalLayout_5->addWidget(widget_title);

        splitter = new QSplitter(Widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(15);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollBar_pos = new QScrollBar(layoutWidget);
        scrollBar_pos->setObjectName(QStringLiteral("scrollBar_pos"));
        scrollBar_pos->setSingleStep(3);
        scrollBar_pos->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(scrollBar_pos);

        plotView = new drawPlot(layoutWidget);
        plotView->setObjectName(QStringLiteral("plotView"));
        sizePolicy2.setHeightForWidth(plotView->sizePolicy().hasHeightForWidth());
        plotView->setSizePolicy(sizePolicy2);
        plotView->setMinimumSize(QSize(0, 700));

        verticalLayout_3->addWidget(plotView);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_14 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);

        widget_tools = new QWidget(layoutWidget1);
        widget_tools->setObjectName(QStringLiteral("widget_tools"));
        widget_tools->setMinimumSize(QSize(210, 210));
        widget_tools->setMaximumSize(QSize(210, 210));
        widget_tools->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(widget_tools);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget_tools);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 40));
        label_3->setMaximumSize(QSize(70, 40));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        spinBox_buff = new QSpinBox(widget_tools);
        spinBox_buff->setObjectName(QStringLiteral("spinBox_buff"));
        spinBox_buff->setMinimumSize(QSize(0, 40));
        spinBox_buff->setCursor(QCursor(Qt::PointingHandCursor));
        spinBox_buff->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_buff->setMaximum(86400000);
        spinBox_buff->setValue(1);
        spinBox_buff->setDisplayIntegerBase(10);

        horizontalLayout_2->addWidget(spinBox_buff);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget_tools);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(70, 40));
        label->setMaximumSize(QSize(70, 40));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        spinBox_wind = new QSpinBox(widget_tools);
        spinBox_wind->setObjectName(QStringLiteral("spinBox_wind"));
        spinBox_wind->setMinimumSize(QSize(0, 40));
        spinBox_wind->setCursor(QCursor(Qt::PointingHandCursor));
        spinBox_wind->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_wind->setMaximum(86400000);
        spinBox_wind->setValue(1);
        spinBox_wind->setDisplayIntegerBase(10);

        horizontalLayout->addWidget(spinBox_wind);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_resetKey = new QPushButton(widget_tools);
        pushButton_resetKey->setObjectName(QStringLiteral("pushButton_resetKey"));
        pushButton_resetKey->setMinimumSize(QSize(180, 40));
        pushButton_resetKey->setMaximumSize(QSize(180, 40));
        pushButton_resetKey->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushButton_resetKey);

        pushButton_resetCmd = new QPushButton(widget_tools);
        pushButton_resetCmd->setObjectName(QStringLiteral("pushButton_resetCmd"));
        pushButton_resetCmd->setMinimumSize(QSize(180, 40));
        pushButton_resetCmd->setMaximumSize(QSize(180, 40));
        pushButton_resetCmd->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushButton_resetCmd);


        horizontalLayout_3->addWidget(widget_tools);

        horizontalSpacer_15 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea = new QScrollArea(layoutWidget1);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy3);
        scrollArea->setMinimumSize(QSize(210, 210));
        scrollArea->setMaximumSize(QSize(16777215, 210));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1288, 210));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalSpacer_16 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_16);

        splitter->addWidget(layoutWidget1);

        verticalLayout_5->addWidget(splitter);


        retranslateUi(Widget);

        pushButton_output->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Y-SerialPlot", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        widget_title->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        logo->setText(QString());
#ifndef QT_NO_TOOLTIP
        comboBox_port->setToolTip(QApplication::translate("Widget", "  \344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        comboBox_baud->clear();
        comboBox_baud->insertItems(0, QStringList()
         << QApplication::translate("Widget", "2400", Q_NULLPTR)
         << QApplication::translate("Widget", "4800", Q_NULLPTR)
         << QApplication::translate("Widget", "9600", Q_NULLPTR)
         << QApplication::translate("Widget", "14400", Q_NULLPTR)
         << QApplication::translate("Widget", "19200", Q_NULLPTR)
         << QApplication::translate("Widget", "38400", Q_NULLPTR)
         << QApplication::translate("Widget", "115200", Q_NULLPTR)
         << QApplication::translate("Widget", "128000", Q_NULLPTR)
         << QApplication::translate("Widget", "230400", Q_NULLPTR)
         << QApplication::translate("Widget", "256000", Q_NULLPTR)
         << QApplication::translate("Widget", "460800", Q_NULLPTR)
         << QApplication::translate("Widget", "921600", Q_NULLPTR)
         << QApplication::translate("Widget", "1000000", Q_NULLPTR)
         << QApplication::translate("Widget", "2000000", Q_NULLPTR)
         << QApplication::translate("Widget", "3000000", Q_NULLPTR)
         << QApplication::translate("Widget", "5000000", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        comboBox_baud->setToolTip(QApplication::translate("Widget", "  \346\263\242\347\211\271\347\216\207\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBox_open->setToolTip(QApplication::translate("Widget", "  \346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBox_open->setText(QApplication::translate("Widget", "CheckBox", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBox_stop->setToolTip(QApplication::translate("Widget", "  \346\232\202\345\201\234X\350\275\264\350\277\220\345\212\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBox_stop->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        checkBox_stop->setText(QApplication::translate("Widget", "CheckBox", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBox_auto->setToolTip(QApplication::translate("Widget", "  \345\210\207\346\215\242Y\350\275\264\350\207\252\351\200\202\345\272\224", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBox_auto->setText(QApplication::translate("Widget", "CheckBox", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_reset->setToolTip(QApplication::translate("Widget", "  \345\244\215\344\275\215\350\247\206\347\252\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_reset->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_showall->setToolTip(QApplication::translate("Widget", "  \346\230\276\347\244\272\345\205\250\351\203\250\346\225\260\346\215\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_showall->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_hideall->setToolTip(QApplication::translate("Widget", "  \351\232\220\350\227\217\345\205\250\351\203\250\346\225\260\346\215\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_hideall->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_clear->setToolTip(QApplication::translate("Widget", "  \346\270\205\347\251\272\350\247\206\347\252\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_clear->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_output->setToolTip(QApplication::translate("Widget", "  \345\257\274\345\207\272\346\225\260\346\215\256\357\274\214\346\232\202\346\227\266\346\227\240\346\263\225\344\275\277\347\224\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_output->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_help->setToolTip(QApplication::translate("Widget", "  \345\270\256\345\212\251\351\241\265\351\235\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_help->setText(QString());
        pushButton_little->setText(QString());
        pushButton_size->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pushButton_close->setWhatsThis(QApplication::translate("Widget", "good", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_close->setText(QString());
        label_3->setText(QApplication::translate("Widget", "\347\274\223\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spinBox_buff->setToolTip(QApplication::translate("Widget", "  \346\225\260\346\215\256\347\274\223\345\255\230\357\274\214\345\215\225\344\275\215\347\247\222", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Widget", "\350\247\206\347\252\227", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spinBox_wind->setToolTip(QApplication::translate("Widget", "  \350\247\206\347\252\227\345\214\272\345\237\237\357\274\214\345\215\225\344\275\215\347\247\222", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_resetKey->setToolTip(QApplication::translate("Widget", "  \345\244\215\344\275\215\346\214\207\344\273\244\345\277\253\346\215\267\351\224\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_resetKey->setText(QApplication::translate("Widget", "\346\214\211\351\224\256\351\207\215\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_resetCmd->setToolTip(QApplication::translate("Widget", "  \345\244\215\344\275\215\346\214\207\344\273\244\346\241\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_resetCmd->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_resetCmd->setText(QApplication::translate("Widget", "\346\214\207\344\273\244\351\207\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
