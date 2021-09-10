#include "calculator.h"
#include "ui_calculator.h"

#include <QDebug>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_btn0_clicked()
{
    val = val.append("0");
    ui->display->setText(val);
}

void Calculator::on_btn1_clicked()
{
    val = val.append("1");
    ui->display->setText(val);
}

void Calculator::on_btn2_clicked()
{
    val = val.append("2");
    ui->display->setText(val);
}

void Calculator::on_btn3_clicked()
{
    val = val.append("3");
    ui->display->setText(val);
}

void Calculator::on_btn4_clicked()
{
    val = val.append("4");
    ui->display->setText(val);
}

void Calculator::on_btn5_clicked()
{
    val = val.append("5");
    ui->display->setText(val);
}

void Calculator::on_btn6_clicked()
{
    val = val.append("6");
    ui->display->setText(val);
}

void Calculator::on_btn7_clicked()
{
    val = val.append("7");
    ui->display->setText(val);
}

void Calculator::on_btn8_clicked()
{
    val = val.append("8");
    ui->display->setText(val);
}

void Calculator::on_btn9_clicked()
{
    val = val.append("9");
    ui->display->setText(val);
}


void Calculator::on_btn_add_clicked()
{
    if((a > 0) && (b == 0))
    {
        b = val.toDouble();
        val = "";
    }
    else if(a > 0 && b > 0)
    {
        calc(sign);
    }
    else {
        ui->display->clear();
        a = val.toDouble();
        val = "";
    }
    sign = ADD;
//    if(a > 0 && b == 0)
//    {
//        b = val.toDouble();
//        val = "";
//    }
//    else if(a > 0 && b > 0)
//    {
//        calc(sign);
//    }
//    else {
//        ui->display->clear();
//        a = val.toDouble();
//        val = "";
//    }
//    ui->display->clear();
//    sign = ADD;
}

void Calculator::on_btn_sub_clicked()
{
    if((a > 0) && (b == 0))
    {
        b = val.toDouble();
        val = "";
    }
    else if(a > 0 && b > 0)
    {
        calc(sign);
    }
    else {
        ui->display->clear();
        a = val.toDouble();
        val = "";
    }
    sign = SUB;
    qDebug() << "SUB: b = " << b << endl;
}

void Calculator::on_btn_mul_clicked()
{
    if((a > 0) && (b == 0))
    {
        b = val.toDouble();
        val = "";
    }
    else if(a > 0 && b > 0)
    {
        calc(sign);
    }
    else {
        ui->display->clear();
        a = val.toDouble();
        val = "";
    }
    sign = MUL;
}

void Calculator::on_btn_div_clicked()
{
    if((a > 0) && (b == 0))
    {
        b = val.toDouble();
        val = "";
    }
    else if(a > 0 && b > 0)
    {
        calc(sign);
    }
    else {
        ui->display->clear();
        a = val.toDouble();
        val = "";
    }
    sign = DIV;
}

void Calculator::calc(int s)
{
    switch(s)
    {
        case ADD:
            c = a + b;
            a = c;
            b = 0;
            val = "";
            break;
        case SUB:
            c = a - b;
            a = c;
            b = 0;
            val = "";
            break;
        case MUL:
            c = a * b;
            a = c;
            b = 0;
            val = "";
            break;
        case DIV:
            c = a / b;
            a = c;
            b = 0;
            val = "";
            break;

    }
    ui->display->setText(QString::number(c));
}

void Calculator::on_btn_equal_clicked()
{
//    ui->display->setText(QString::number(c));
    if(b == 0)
    {
        b = val.toDouble();
        val = "";

//        ui->display->setText(QString::number(a));
    }
    if(a > 0 && b > 0)
    {
        calc(sign);
//        a = c;
    }
    else if(a == 0)
    {
//        ui->display->clear();
        a = val.toDouble();
        a = c;
        val = "";
    }
    a = c;
    qDebug() << "a = " << a << endl;
    qDebug() << "b = " << b << endl;
    qDebug() << "c = " << c << endl;
}

void Calculator::on_AC_clicked()
{
    a = 0;
    b = 0;
    c = 0;
    val = "";
    ui->display->setText("0");
}

void Calculator::on_pushButton_clicked()
{
    qDebug() << "DEBUG";
    qDebug() << "a = " << a << endl;
    qDebug() << "b = " << b << endl;
    qDebug() << "c = " << c << endl;
}
