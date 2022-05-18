#ifndef ZDWIDGET_H
#define ZDWIDGET_H

#include <QWidget>
#include <QPoint>
#include <QMainWindow>
#include "QMouseEvent"
#include "QPainter"
#include "QPoint"
#include "QTimer"
#include "QKeyEvent"
#include <iostream>
#include"QString"
#include"mainwindow.h"


class MainWindow;
class Zdwidget : public QWidget
{
    Q_OBJECT
public:
    explicit Zdwidget(QWidget *parent = 0);
    MainWindow* mainwindow;//主界面的指针给引用过来
    QPoint p1,p2;
    int linewidth;
    int serialnum;//画的类型
    QString str;
    int color[3];
    int bcolor[3];
protected:
    //    //绘图事件
        void paintEvent(QPaintEvent *event);
        //定时事件
        void timerEvent(QTimerEvent *event);
        //鼠标按下事件
        void mousePressEvent(QMouseEvent *event);
        //鼠标按下移动事件
        void mouseMoveEvent(QMouseEvent *event);
        //鼠标释放事件
        void mouseReleaseEvent(QMouseEvent *event);
        //键盘按下事件
        void keyPressEvent(QKeyEvent *event);


signals:

public slots:
       void setlinesize(const int & arg);


private slots:


private slots:
    void on_lineEdit_returnPressed();
};

#endif // ZDWIDGET_H
