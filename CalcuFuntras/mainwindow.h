#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "math.h"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>

using namespace boost::multiprecision;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    cpp_dec_float_50 num1 =0,num2=0,result=0;
    boost::multiprecision::cpp_dec_float_50 resultOperacion=0;
    cpp_dec_float_50 getLineEditNum();
    void writeLabelResult(cpp_dec_float_50 tempResult);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_senh_Btn_clicked();

    void on_cosh_Btn_clicked();

    void on_tanh_Btn_clicked();

    void on_asen_Btn_clicked();

    void on_acos_Btn_clicked();

    void on_atan_Btn_clicked();

    void on_sec_Btn_clicked();

    void on_csc_Btn_clicked();

    void on_cot_Btn_clicked();

    void on_sen_Btn_clicked();

    void on_cos_Btn_clicked();

    void on_tan_Btn_clicked();

    void on_ln_Btn_clicked();

    void on_log10_Btn_clicked();

    void on_logy_Btn_clicked();

    void on_invx_Btn_clicked();

    void on_sqrtx_Btn_clicked();

    void on_yrtx_Btn_clicked();

    void on_exp_Btn_clicked();

    void on_xpowy_Btn_clicked();

    void on_xfact_Btn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
