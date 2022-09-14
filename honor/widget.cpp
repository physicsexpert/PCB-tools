#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <math.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked() //宽度计算按钮
{
     double num1 = ui->lineEdit->text().toDouble();//获取k的值
     double num2 = ui->lineEdit_2->text().toDouble();//获取T的值
     double num3 = ui->lineEdit_3->text().toDouble();//获取I的值
     double num4 = ui->lineEdit_4->text().toDouble();//获取H的值
 double d=pow(num2,0.44);
     double a = num3/num1;
         double e=a /d;
     double b = pow(e,1.32)/(num4*0.001*39.37)*0.0254;


      ui->label_8->setText(QString::number(b));


}

void Widget::on_pushButton_2_clicked()//宽度计算按钮
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->label_8->clear();
}

void Widget::on_pushButton_5_clicked()//单位转换
{
    double mm1 = ui->lineEdit_10->text().toDouble();//获取k的值
    double mil1 = ui->lineEdit_11->text().toDouble();//获取c的值
    double mil2 = mm1*39.37;
    double mm2 = mil1*0.0254;
    ui->label_15->setText(QString::number(mil2));
    ui->label_19->setText(QString::number(mm2));

}

void Widget::on_pushButton_6_clicked()//单位转换
{
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
    ui->label_15->clear();
    ui->label_19->clear();






}





void Widget::on_pushButton_3_clicked()//阻抗计算
{
    double chang = ui->lineEdit_5->text().toDouble();//获取长的值
    double kuan = ui->lineEdit_6->text().toDouble();//获取宽的值
    double gao = ui->lineEdit_7->text().toDouble();//获取高的值
    double ou =0.49*(chang/kuan)*(35/gao);
      ui->label_17->setText(QString::number(ou));
}

void Widget::on_pushButton_4_clicked()
{
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->label_17->clear();
}
