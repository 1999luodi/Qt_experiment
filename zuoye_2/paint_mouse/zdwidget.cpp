#include "zdwidget.h"
#include"QMessageBox"
#include "QString"
#include<iostream>
#include "ui_mainwindow.h"

Zdwidget::Zdwidget(QWidget *parent) :

mainwindow(static_cast<MainWindow*>(parent))
{



}
void Zdwidget::paintEvent(QPaintEvent *event){

    //this->setAttribute(Qt::WA_PaintOutsidePaintEvent);
    QPainter painter(this);

    QPen drawpen(Qt::black,this->linewidth,Qt::SolidLine,Qt::RoundCap,Qt::MiterJoin);
    QColor color,bcolor;
    color.setRgb(this->color[1],this->color[0],this->color[2]);
    bcolor.setRgb(this->bcolor[0],this->bcolor[1],this->bcolor[2]);
    drawpen.setColor(color);
    QBrush brush;

    brush.setColor(bcolor);
    painter.setBrush(brush);

    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(drawpen);
    switch(this->serialnum){
    case 0:
         painter.drawLine(p1,p2);break;
    case 1:
         painter.drawRect(p1.x(),p1.y(),qAbs(p2.x()-p1.x()) ,qAbs(p2.y()-p1.y()));break;
    case 2:

         painter.drawEllipse(p1.x(),p1.y(),qAbs(p2.x()-p1.x()) ,qAbs(p2.y()-p1.y())); break;
    case 3:
         //QRectF rect(20, 20, 300, 200);
         //painter.drawRect(rect);  //为了更直观地看到字体的位置，我们绘制出这个矩形
         painter.drawText(20,20, str);break;
    }



}

//鼠标按下事件
void Zdwidget::mousePressEvent(QMouseEvent *event){
    p1=event->pos();
}

//鼠标按下移动事件
void Zdwidget::mouseMoveEvent(QMouseEvent *event){
    p2=event->pos();
    update();
}

//鼠标释放事件
void Zdwidget::mouseReleaseEvent(QMouseEvent *event){
    event->pos();
}
void Zdwidget::timerEvent(QTimerEvent *event){

}
void Zdwidget::keyPressEvent(QKeyEvent *event){

}
void Zdwidget::setlinesize(const int &arg){
    QMessageBox::information(this,"test",QString::number(arg));

}



void Zdwidget::on_lineEdit_returnPressed()
{
    update();
}
