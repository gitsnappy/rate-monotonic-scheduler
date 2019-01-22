/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_7;
    QSpinBox *spinBox_7;
    QSpinBox *NumOfTasks;
    QLabel *label_8;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_5;
    QSpinBox *spinBox_5;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QSpinBox *spinBox_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QSpinBox *spinBox_3;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_6;
    QSpinBox *spinBox_6;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QSpinBox *spinBox_2;
    QPushButton *btn_generate;
    QLabel *label_13;
    QLabel *label_12;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QSpinBox *spinBox;
    QTextEdit *textEdit;
    QLabel *label_7;
    QSpinBox *Num_AperiodicTasks;
    QLabel *label;
    QLabel *label_11;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_8;
    QSpinBox *spinBox_8;
    QPushButton *btn_exit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QMenuBar *menuBar;
    QMenu *menuRM_Scheduler;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(822, 841);
        MainWindow->setStyleSheet(QLatin1String("\n"
"#MainWindow {\n"
" background: rgb(228, 245, 255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"		\n"
"	color: rgb(18, 145, 137);\n"
"\n"
"}\n"
"\n"
"QSpinBox\n"
"{\n"
"color:black;\n"
"background-color: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"}\n"
"QDoubleSpinBox\n"
"{\n"
"color:black;\n"
"background-color: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"QTextEdit{\n"
"color:black;\n"
"background-color: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
""
                        "padding-right: 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"color:  rgb(18, 145, 137);\n"
"background-color:QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 50px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"#mainFrame {\n"
"border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(138, 340, 161, 42));
        horizontalLayout_7 = new QHBoxLayout(groupBox_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_15 = new QLabel(groupBox_7);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_7->addWidget(label_15);

        doubleSpinBox_7 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(1);
        doubleSpinBox_7->setMaximum(20);
        doubleSpinBox_7->setSingleStep(0.5);
        doubleSpinBox_7->setValue(1);

        horizontalLayout_7->addWidget(doubleSpinBox_7);

        spinBox_7 = new QSpinBox(groupBox_7);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setMaximum(99);

        horizontalLayout_7->addWidget(spinBox_7);

        NumOfTasks = new QSpinBox(centralWidget);
        NumOfTasks->setObjectName(QStringLiteral("NumOfTasks"));
        NumOfTasks->setGeometry(QRect(20, 50, 42, 22));
        NumOfTasks->setMaximum(5);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(260, 30, 46, 13));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(136, 210, 161, 42));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        doubleSpinBox_5 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(1);
        doubleSpinBox_5->setMaximum(20);
        doubleSpinBox_5->setSingleStep(0.5);
        doubleSpinBox_5->setValue(1);

        horizontalLayout_5->addWidget(doubleSpinBox_5);

        spinBox_5 = new QSpinBox(groupBox_5);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(50);
        spinBox_5->setValue(10);

        horizontalLayout_5->addWidget(spinBox_5);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(136, 170, 161, 42));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        doubleSpinBox_4 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(1);
        doubleSpinBox_4->setMaximum(20);
        doubleSpinBox_4->setSingleStep(0.5);
        doubleSpinBox_4->setValue(1);

        horizontalLayout_4->addWidget(doubleSpinBox_4);

        spinBox_4 = new QSpinBox(groupBox_4);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMaximum(50);
        spinBox_4->setValue(9);

        horizontalLayout_4->addWidget(spinBox_4);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(136, 130, 161, 42));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMaximum(20);
        doubleSpinBox_3->setSingleStep(0.5);
        doubleSpinBox_3->setValue(1);

        horizontalLayout_3->addWidget(doubleSpinBox_3);

        spinBox_3 = new QSpinBox(groupBox_3);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(50);
        spinBox_3->setValue(8);

        horizontalLayout_3->addWidget(spinBox_3);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(138, 300, 161, 42));
        horizontalLayout_6 = new QHBoxLayout(groupBox_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_6->addWidget(label_14);

        doubleSpinBox_6 = new QDoubleSpinBox(groupBox_6);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(1);
        doubleSpinBox_6->setMaximum(20);
        doubleSpinBox_6->setSingleStep(0.5);
        doubleSpinBox_6->setValue(1);

        horizontalLayout_6->addWidget(doubleSpinBox_6);

        spinBox_6 = new QSpinBox(groupBox_6);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMaximum(99);

        horizontalLayout_6->addWidget(spinBox_6);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(136, 90, 161, 42));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMaximum(20);
        doubleSpinBox_2->setSingleStep(0.5);
        doubleSpinBox_2->setValue(1);

        horizontalLayout_2->addWidget(doubleSpinBox_2);

        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(50);
        spinBox_2->setValue(7);

        horizontalLayout_2->addWidget(spinBox_2);

        btn_generate = new QPushButton(centralWidget);
        btn_generate->setObjectName(QStringLiteral("btn_generate"));
        btn_generate->setGeometry(QRect(340, 720, 62, 21));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 270, 101, 21));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 270, 31, 16));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(136, 50, 161, 42));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMaximum(20);
        doubleSpinBox->setSingleStep(0.5);
        doubleSpinBox->setValue(1);

        horizontalLayout->addWidget(doubleSpinBox);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(50);
        spinBox->setValue(6);

        horizontalLayout->addWidget(spinBox);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(330, 30, 391, 131));
        QFont font;
        textEdit->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 30, 46, 13));
        Num_AperiodicTasks = new QSpinBox(centralWidget);
        Num_AperiodicTasks->setObjectName(QStringLiteral("Num_AperiodicTasks"));
        Num_AperiodicTasks->setGeometry(QRect(20, 300, 42, 22));
        Num_AperiodicTasks->setMaximum(3);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(240, 270, 56, 16));
        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(138, 380, 161, 42));
        horizontalLayout_8 = new QHBoxLayout(groupBox_8);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_16 = new QLabel(groupBox_8);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_8->addWidget(label_16);

        doubleSpinBox_8 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setDecimals(1);
        doubleSpinBox_8->setMaximum(20);
        doubleSpinBox_8->setSingleStep(0.5);
        doubleSpinBox_8->setValue(1);

        horizontalLayout_8->addWidget(doubleSpinBox_8);

        spinBox_8 = new QSpinBox(groupBox_8);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setMaximum(99);

        horizontalLayout_8->addWidget(spinBox_8);

        btn_exit = new QPushButton(centralWidget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(450, 720, 62, 21));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(330, 180, 391, 181));
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(330, 390, 391, 141));
        textEdit_4 = new QTextEdit(centralWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(20, 460, 281, 171));
        textEdit_5 = new QTextEdit(centralWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(330, 560, 391, 131));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 440, 101, 21));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(330, 10, 101, 21));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(330, 160, 101, 21));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(330, 370, 101, 21));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(330, 540, 101, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 822, 21));
        menuRM_Scheduler = new QMenu(menuBar);
        menuRM_Scheduler->setObjectName(QStringLiteral("menuRM_Scheduler"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuRM_Scheduler->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox_7->setTitle(QString());
        label_15->setText(QApplication::translate("MainWindow", "ATask2", 0));
        label_8->setText(QApplication::translate("MainWindow", "Period", 0));
        groupBox_5->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindow", "Task5", 0));
        groupBox_4->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "Task4", 0));
        groupBox_3->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "Task3", 0));
        groupBox_6->setTitle(QString());
        label_14->setText(QApplication::translate("MainWindow", "ATask1", 0));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "Task2", 0));
        btn_generate->setText(QApplication::translate("MainWindow", "Generate", 0));
        label_13->setText(QApplication::translate("MainWindow", "Aperiodic Tasks", 0));
        label_12->setText(QApplication::translate("MainWindow", "Cost", 0));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "Task1", 0));
        label_7->setText(QApplication::translate("MainWindow", "Cost", 0));
        label->setText(QApplication::translate("MainWindow", "Tasks", 0));
        label_11->setText(QApplication::translate("MainWindow", "Arrival Time", 0));
        groupBox_8->setTitle(QString());
        label_16->setText(QApplication::translate("MainWindow", "ATask3", 0));
        btn_exit->setText(QApplication::translate("MainWindow", "Exit", 0));
        label_17->setText(QApplication::translate("MainWindow", "Missed Deadlines", 0));
        label_18->setText(QApplication::translate("MainWindow", "Info", 0));
        label_19->setText(QApplication::translate("MainWindow", "Task Begin", 0));
        label_20->setText(QApplication::translate("MainWindow", "Task End", 0));
        label_21->setText(QApplication::translate("MainWindow", "Aperiodic Tasks", 0));
        menuRM_Scheduler->setTitle(QApplication::translate("MainWindow", "RM Scheduler", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
