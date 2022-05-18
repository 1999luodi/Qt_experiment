#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QTextStream>
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nMin=0;nMax=255;

    ui->widget_panel->color[0]=255; ui->widget_panel->color[1]=0; ui->widget_panel->color[2]=0;
    ui->widget_panel->bcolor[0]=255; ui->widget_panel->bcolor[1]=0; ui->widget_panel->bcolor[2]=0;
    //spinbox
    ui->spinBox->setSingleStep(10);
    ui->spinBox->setRange(10,100);
    ui->spinBox->setFocusPolicy(Qt::NoFocus);


    //radios
   groupButton1=new QButtonGroup(this);
   groupButton1->addButton(ui->radioButton,0);
   groupButton1->addButton(ui->radioButton_2,1);
   groupButton1->addButton(ui->radioButton_3,2);
   groupButton1->addButton(ui->radioButton_4,3);
   ui->radioButton->setChecked(true);
   ui->widget_panel->serialnum=0;
   connect(groupButton1,SIGNAL(buttonClicked(int)),this,SLOT(paintStyle( int)));

    //text
   connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(changetext()));

   //qslider
   ui->horizontalSlider->setMinimum(nMin);  // 最小值
   ui->horizontalSlider->setMaximum(nMax);  // 最大值
   ui->horizontalSlider_2->setMinimum(nMin);
   ui->horizontalSlider_2->setMaximum(nMax);
   ui->horizontalSlider_3->setMinimum(nMin);
   ui->horizontalSlider_3->setMaximum(nMax);
   connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(setrgb(int)));
   connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),this,SLOT(setrgb(int)));
   connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),this,SLOT(setrgb(int)));

   //dial

   ui->dial->setMinimum(0);
   ui->dial->setMaximum(255);
   ui->dial_2->setMinimum(0);
   ui->dial_2->setMaximum(255);
   ui->dial_3->setMinimum(0);
   ui->dial_3->setMaximum(255);
   connect(ui->dial,SIGNAL(valueChanged(int)),SLOT(setbrgb(int)));
   connect(ui->dial_2,SIGNAL(valueChanged(int)),SLOT(setbrgb(int)));
   connect(ui->dial_3,SIGNAL(valueChanged(int)),SLOT(setbrgb(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event){




}


void MainWindow::paintStyle(int num){
    ui->widget_panel->serialnum=num;
}

//改变画笔宽度
void MainWindow::on_spinBox_valueChanged(int )
{
    ui->widget_panel->linewidth=ui->spinBox->value();


}
//输出文字
void MainWindow::changetext(){
ui->widget_panel->str=ui->lineEdit->text();
ui->widget_panel->update();

}
//rgb
void MainWindow::setrgb(int num){
    ui->widget_panel->color[0]=ui->horizontalSlider->value();
    ui->widget_panel->color[1]=ui->horizontalSlider_2->value();
    ui->widget_panel->color[2]=ui->horizontalSlider_3->value();

}

void MainWindow::setbrgb(int num){
    ui->widget_panel->bcolor[2]=ui->dial->value();
    ui->widget_panel->bcolor[0]=ui->dial_2->value();
    ui->widget_panel->bcolor[1]=ui->dial_3->value();
    std::cout<<ui->widget_panel->bcolor[0]<<ui->widget_panel->bcolor[1]<<ui->widget_panel->bcolor[2]<<std::endl;

}
