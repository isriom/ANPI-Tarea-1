#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "funtras.h"
#include "math.h"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>
#include <iomanip>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

cpp_dec_float_50 MainWindow::getLineEditNum(){
    std::setprecision(50);
    num1 = ui->x_Field->text().toDouble();
    num2 = ui->y_Field->text().toDouble();
}

void MainWindow::writeLabelResult(cpp_dec_float_50 tempResult){

    std::ostringstream oss;
    oss << std::fixed << std::setprecision(50) << resultOperacion;
    ui->lb_ResultOp->setText(QString::fromStdString(oss.str()));


}

void MainWindow::on_senh_Btn_clicked()
{

    getLineEditNum();

    resultOperacion = funtras::sinh_t(num1);

    writeLabelResult(resultOperacion);

}


void MainWindow::on_cosh_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::cosh_t(num1);

    writeLabelResult(resultOperacion);

}


void MainWindow::on_tanh_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::tanh_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_asen_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::asin_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_acos_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::acos_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_atan_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::atan_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_sec_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::sec_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_csc_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::csc_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_cot_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::cot_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_sen_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::sin_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_cos_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::cos_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_tan_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::tan_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_ln_Btn_clicked()
{
    getLineEditNum();
    if(num1<=0){
        ui->lb_ResultOp->setText("Error, x debe ser mayor a 0");
        return;
    }else{
        resultOperacion = funtras::ln_t(num1);

        writeLabelResult(resultOperacion);
    }
}


void MainWindow::on_log10_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::log_t(num1,10);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_logy_Btn_clicked()
{
    getLineEditNum();
    if(num1<=0 || num2<=0){
        ui->lb_ResultOp->setText("Error, x debe ser mayor a 0");
        return;
    }else{
        resultOperacion = funtras::log_t(num1,num2);

        writeLabelResult(resultOperacion);
    }
}


void MainWindow::on_invx_Btn_clicked()
{
    getLineEditNum();
    if(num1==0){
        ui->lb_ResultOp->setText("Error, x debe ser igual a 0");
        return;
    }else{
        if(num1<0){
            resultOperacion = -1*funtras::divi_t(-1*num1);
        }
        else
            resultOperacion = funtras::divi_t(num1);
        writeLabelResult(resultOperacion);
    }
}


void MainWindow::on_sqrtx_Btn_clicked()
{
    getLineEditNum();
    getLineEditNum();
    if(num1<0){
        ui->lb_ResultOp->setText("Error, el valor debe ser mayor o igual que 0");
        return;
    }else{
        resultOperacion = funtras::sqrt_t(num1);

        writeLabelResult(resultOperacion);
    }
}


void MainWindow::on_yrtx_Btn_clicked()
{
    getLineEditNum();
    if(num1<0){
        ui->lb_ResultOp->setText("Error, el valor debe ser mayor o igual que 0");
        return;
    }else{
        resultOperacion = funtras::root_t(num1,num2);

        writeLabelResult(resultOperacion);
    }

}


void MainWindow::on_exp_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::exp_t(num1);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_xpowy_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::power_t(num1,num2);

    writeLabelResult(resultOperacion);
}


void MainWindow::on_xfact_Btn_clicked()
{

    getLineEditNum();
    int factorial = ui->x_Field->text().toInt();

    if(factorial<0){
        ui->lb_ResultOp->setText("Error, el valor debe ser mayor o igual que 0");
        return;
    }else{
        resultOperacion = funtras::fact_t(factorial);

        writeLabelResult(resultOperacion);
    }


}


void MainWindow::on_pushButton_clicked()
{
    ui->x_Field->clear();
    ui->y_Field->clear();
}


void MainWindow::on_pushButton_2_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::root_t(funtras::cos_t(3*funtras::divi_t(7))+funtras::ln_t(2),3)*funtras::divi_t(funtras::sinh_t(funtras::sqrt_t(2)))+funtras::atan_t(funtras::exp_t(-1));

    writeLabelResult(resultOperacion);
}

