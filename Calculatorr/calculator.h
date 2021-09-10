#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_btn0_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();

    void on_btn_add_clicked();
    void on_btn_sub_clicked();
    void on_btn_mul_clicked();
    void on_btn_div_clicked();

    void on_btn_equal_clicked();

    void on_pushButton_clicked();

    void on_AC_clicked();

private:
    Ui::Calculator *ui;

private:
    QString val = "";
    double a = 0, b = 0, c = 0;
    int sign = NULL;

    void calc(int s);

};

#endif // CALCULATOR_H
