#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QMouseEvent"
#include "QPainter"
#include "QPoint"
#include "QTimer"
#include "QKeyEvent"
#include "QButtonGroup"
#include "zdwidget.h"
#include "QString"
#include <iostream>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    int spinboxsize;
    QButtonGroup *groupButton1;
    int *linewidth;
    QString *mainstr;



protected:

    void paintEvent(QPaintEvent *event);

private:

    int nMin;
    int nMax;

private slots:

    void on_spinBox_valueChanged(int );

    void paintStyle(int);
    void changetext();
    void setrgb(int);
    void setbrgb(int);

};

#endif // MAINWINDOW_H
