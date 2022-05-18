#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPainter"
#include "QWidget"
#include <QDebug>
#include "QMessageBox"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    a=1;b=true;
    c=true;d=true;
    e=true;f=true;
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.save();//保存坐标
    QPen drawpen(Qt::black,2,Qt::SolidLine,Qt::RoundCap,Qt::MiterJoin);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(drawpen);

    //总体
    if(a==1){
       b=true;c=true;d=true;e=true;f=true;
        a=3;
   }
    else if(a==2){
        b=false;c=false;d=false;e=false;f=false;
        a=3;
    }
    if(b){
        //线段    //坐标
        painter.drawLine(QPointF(20,20), QPointF(20,320));
        painter.drawLine(QPointF(20,320), QPointF(320,320));
        painter.translate(50,20);
        painter.rotate(90);
        painter.drawText( 0,0,tr("y"));
        painter.restore();
        painter.drawText( 280,310,tr("x"));
   }

    if(c){
    //矩形
    painter.setPen(QPen(Qt::red,5));
    painter.drawRect(80,50,150,80);}

    if(d){
    //椭圆
    QBrush drawbrush(Qt::green,Qt::SolidPattern);
    painter.setBrush(drawbrush);
   painter.setPen(QPen(Qt::blue,5));
    painter.drawEllipse(80,140,80,150);
    painter.setPen(drawpen);}
    if(e){
    //标题
    painter.setPen(QPen(Qt::red,10));
    painter.drawText( 230,50,tr("QT welcome"));}
    if(f){
    //画
        painter.setPen(QPen(Qt::black,2));
    QPixmap pixmap("/home/unsp/qtbianc/image/cat.png");

    painter.drawPixmap(240,150,100,100,pixmap);}


}






void MainWindow::on_pushButton_1_clicked()
{
    if(a==3){//当置0或是1时-》a的状态要置游离，避免导致后续的控件死锁
        if(b||c||d||e||f){//只要有一个图形出现
            a=2;//关闭所有
        }
        else{
            a=1;
        }
    }else{
   if(a==1) a=2;
   if(a==2) a=1;
}
    update();

}

void MainWindow::on_pushButton_2_clicked()
{
    b=!b;
    update();
}

void MainWindow::on_pushButton_3_clicked()
{
    c=!c;
    update();
}

void MainWindow::on_pushButton_4_clicked()
{
    d=!d;
    update();
}

void MainWindow::on_pushButton_5_clicked()
{
    e=!e;
    update();
}

void MainWindow::on_pushButton_6_clicked()
{
    f=!f;
    update();
}
