/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat May 7 20:58:45 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDial>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <zdwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *horizontalGroupBox_all;
    QHBoxLayout *horizontalLayout_all;
    Zdwidget *widget_panel;
    QVBoxLayout *verticalLayout_all_right;
    QHBoxLayout *horizontalLayout_line;
    QLabel *label;
    QSpinBox *spinBox;
    QGridLayout *gridLayout_paint;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout_string;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_pen;
    QLabel *label_color;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_3;
    QVBoxLayout *verticalLayout_brush;
    QLabel *label_brush;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_dial;
    QDial *dial_2;
    QDial *dial_3;
    QDial *dial;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(918, 527);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalGroupBox_all = new QGroupBox(centralWidget);
        horizontalGroupBox_all->setObjectName(QString::fromUtf8("horizontalGroupBox_all"));
        horizontalGroupBox_all->setGeometry(QRect(120, 10, 711, 373));
        horizontalLayout_all = new QHBoxLayout(horizontalGroupBox_all);
        horizontalLayout_all->setSpacing(6);
        horizontalLayout_all->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_all->setObjectName(QString::fromUtf8("horizontalLayout_all"));
        widget_panel = new Zdwidget(horizontalGroupBox_all);
        widget_panel->setObjectName(QString::fromUtf8("widget_panel"));
        widget_panel->setEnabled(true);

        horizontalLayout_all->addWidget(widget_panel);

        verticalLayout_all_right = new QVBoxLayout();
        verticalLayout_all_right->setSpacing(6);
        verticalLayout_all_right->setObjectName(QString::fromUtf8("verticalLayout_all_right"));
        horizontalLayout_line = new QHBoxLayout();
        horizontalLayout_line->setSpacing(6);
        horizontalLayout_line->setObjectName(QString::fromUtf8("horizontalLayout_line"));
        label = new QLabel(horizontalGroupBox_all);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_line->addWidget(label);

        spinBox = new QSpinBox(horizontalGroupBox_all);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_line->addWidget(spinBox);


        verticalLayout_all_right->addLayout(horizontalLayout_line);

        gridLayout_paint = new QGridLayout();
        gridLayout_paint->setSpacing(6);
        gridLayout_paint->setObjectName(QString::fromUtf8("gridLayout_paint"));
        radioButton = new QRadioButton(horizontalGroupBox_all);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_paint->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(horizontalGroupBox_all);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_paint->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(horizontalGroupBox_all);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_paint->addWidget(radioButton_3, 1, 0, 1, 1);

        radioButton_4 = new QRadioButton(horizontalGroupBox_all);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_paint->addWidget(radioButton_4, 1, 1, 1, 1);


        verticalLayout_all_right->addLayout(gridLayout_paint);

        horizontalLayout_string = new QHBoxLayout();
        horizontalLayout_string->setSpacing(6);
        horizontalLayout_string->setObjectName(QString::fromUtf8("horizontalLayout_string"));
        label_2 = new QLabel(horizontalGroupBox_all);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_string->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalGroupBox_all);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_string->addWidget(lineEdit);


        verticalLayout_all_right->addLayout(horizontalLayout_string);

        verticalLayout_pen = new QVBoxLayout();
        verticalLayout_pen->setSpacing(6);
        verticalLayout_pen->setObjectName(QString::fromUtf8("verticalLayout_pen"));
        label_color = new QLabel(horizontalGroupBox_all);
        label_color->setObjectName(QString::fromUtf8("label_color"));

        verticalLayout_pen->addWidget(label_color);

        horizontalSlider_2 = new QSlider(horizontalGroupBox_all);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_pen->addWidget(horizontalSlider_2);

        horizontalSlider = new QSlider(horizontalGroupBox_all);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_pen->addWidget(horizontalSlider);

        horizontalSlider_3 = new QSlider(horizontalGroupBox_all);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_pen->addWidget(horizontalSlider_3);

        verticalLayout_brush = new QVBoxLayout();
        verticalLayout_brush->setSpacing(6);
        verticalLayout_brush->setObjectName(QString::fromUtf8("verticalLayout_brush"));
        label_brush = new QLabel(horizontalGroupBox_all);
        label_brush->setObjectName(QString::fromUtf8("label_brush"));

        verticalLayout_brush->addWidget(label_brush);

        checkBox = new QCheckBox(horizontalGroupBox_all);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_brush->addWidget(checkBox);

        horizontalLayout_dial = new QHBoxLayout();
        horizontalLayout_dial->setSpacing(6);
        horizontalLayout_dial->setObjectName(QString::fromUtf8("horizontalLayout_dial"));
        dial_2 = new QDial(horizontalGroupBox_all);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));

        horizontalLayout_dial->addWidget(dial_2);

        dial_3 = new QDial(horizontalGroupBox_all);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));

        horizontalLayout_dial->addWidget(dial_3);

        dial = new QDial(horizontalGroupBox_all);
        dial->setObjectName(QString::fromUtf8("dial"));

        horizontalLayout_dial->addWidget(dial);


        verticalLayout_brush->addLayout(horizontalLayout_dial);


        verticalLayout_pen->addLayout(verticalLayout_brush);


        verticalLayout_all_right->addLayout(verticalLayout_pen);


        horizontalLayout_all->addLayout(verticalLayout_all_right);

        horizontalLayout_all->setStretch(0, 2);
        horizontalLayout_all->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 918, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", " \347\272\277\345\256\275", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "\347\224\273\347\272\277", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "\347\224\273\347\237\251\345\275\242", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "\347\224\273\346\244\255\345\234\206", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MainWindow", "\347\224\273\345\255\227\347\254\246\344\270\262", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        label_color->setText(QApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262: rgb", 0, QApplication::UnicodeUTF8));
        label_brush->setText(QApplication::translate("MainWindow", "\347\224\273\345\210\267\351\242\234\350\211\262\357\274\232", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\351\200\217\346\230\216\347\224\273\345\210\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
