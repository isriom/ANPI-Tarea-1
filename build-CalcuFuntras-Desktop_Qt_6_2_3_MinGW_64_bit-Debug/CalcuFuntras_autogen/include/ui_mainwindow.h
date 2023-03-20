/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Basic_Calculator;
    QLabel *lb_X;
    QLabel *lb_Y;
    QLineEdit *x_Field;
    QLineEdit *y_Field;
    QPushButton *senh_Btn;
    QPushButton *cosh_Btn;
    QPushButton *tanh_Btn;
    QPushButton *asen_Btn;
    QPushButton *atan_Btn;
    QPushButton *acos_Btn;
    QPushButton *sen_Btn;
    QPushButton *tan_Btn;
    QPushButton *sec_Btn;
    QPushButton *cot_Btn;
    QPushButton *csc_Btn;
    QPushButton *cos_Btn;
    QPushButton *invx_Btn;
    QPushButton *yrtx_Btn;
    QPushButton *ln_Btn;
    QPushButton *logy_Btn;
    QPushButton *log10_Btn;
    QPushButton *sqrtx_Btn;
    QPushButton *xpowy_Btn;
    QPushButton *exp_Btn;
    QPushButton *xfact_Btn;
    QLabel *lb_Answer;
    QLabel *lb_ResultOp;
    QPushButton *help_Btn;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pi_Btn;
    QPushButton *seven_Btn;
    QPushButton *eight_Btn;
    QPushButton *nine_Btn;
    QPushButton *six_Btn;
    QPushButton *five_Btn;
    QPushButton *four_Btn;
    QPushButton *three_Btn;
    QPushButton *two_Btn;
    QPushButton *one_Btn;
    QPushButton *zero_Btn;
    QRadioButton *x_Btn;
    QRadioButton *y_Btn;
    QPushButton *dot_Btn;
    QPushButton *negative_Btn;
    QPushButton *pi_half_Btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setIconSize(QSize(800, 600));
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Basic_Calculator = new QLabel(centralwidget);
        Basic_Calculator->setObjectName(QString::fromUtf8("Basic_Calculator"));
        Basic_Calculator->setEnabled(true);
        Basic_Calculator->setGeometry(QRect(570, 0, 221, 61));
        lb_X = new QLabel(centralwidget);
        lb_X->setObjectName(QString::fromUtf8("lb_X"));
        lb_X->setGeometry(QRect(0, 50, 91, 61));
        lb_Y = new QLabel(centralwidget);
        lb_Y->setObjectName(QString::fromUtf8("lb_Y"));
        lb_Y->setGeometry(QRect(0, 100, 91, 61));
        x_Field = new QLineEdit(centralwidget);
        x_Field->setObjectName(QString::fromUtf8("x_Field"));
        x_Field->setEnabled(true);
        x_Field->setGeometry(QRect(50, 70, 651, 31));
        x_Field->setFrame(true);
        y_Field = new QLineEdit(centralwidget);
        y_Field->setObjectName(QString::fromUtf8("y_Field"));
        y_Field->setGeometry(QRect(50, 120, 651, 31));
        senh_Btn = new QPushButton(centralwidget);
        senh_Btn->setObjectName(QString::fromUtf8("senh_Btn"));
        senh_Btn->setGeometry(QRect(210, 210, 121, 41));
        cosh_Btn = new QPushButton(centralwidget);
        cosh_Btn->setObjectName(QString::fromUtf8("cosh_Btn"));
        cosh_Btn->setGeometry(QRect(340, 210, 121, 41));
        tanh_Btn = new QPushButton(centralwidget);
        tanh_Btn->setObjectName(QString::fromUtf8("tanh_Btn"));
        tanh_Btn->setGeometry(QRect(470, 210, 121, 41));
        asen_Btn = new QPushButton(centralwidget);
        asen_Btn->setObjectName(QString::fromUtf8("asen_Btn"));
        asen_Btn->setGeometry(QRect(210, 260, 121, 41));
        atan_Btn = new QPushButton(centralwidget);
        atan_Btn->setObjectName(QString::fromUtf8("atan_Btn"));
        atan_Btn->setGeometry(QRect(470, 260, 121, 41));
        acos_Btn = new QPushButton(centralwidget);
        acos_Btn->setObjectName(QString::fromUtf8("acos_Btn"));
        acos_Btn->setGeometry(QRect(340, 260, 121, 41));
        sen_Btn = new QPushButton(centralwidget);
        sen_Btn->setObjectName(QString::fromUtf8("sen_Btn"));
        sen_Btn->setGeometry(QRect(210, 360, 121, 41));
        tan_Btn = new QPushButton(centralwidget);
        tan_Btn->setObjectName(QString::fromUtf8("tan_Btn"));
        tan_Btn->setGeometry(QRect(470, 360, 121, 41));
        sec_Btn = new QPushButton(centralwidget);
        sec_Btn->setObjectName(QString::fromUtf8("sec_Btn"));
        sec_Btn->setGeometry(QRect(210, 310, 121, 41));
        cot_Btn = new QPushButton(centralwidget);
        cot_Btn->setObjectName(QString::fromUtf8("cot_Btn"));
        cot_Btn->setGeometry(QRect(470, 310, 121, 41));
        csc_Btn = new QPushButton(centralwidget);
        csc_Btn->setObjectName(QString::fromUtf8("csc_Btn"));
        csc_Btn->setGeometry(QRect(340, 310, 121, 41));
        cos_Btn = new QPushButton(centralwidget);
        cos_Btn->setObjectName(QString::fromUtf8("cos_Btn"));
        cos_Btn->setGeometry(QRect(340, 360, 121, 41));
        invx_Btn = new QPushButton(centralwidget);
        invx_Btn->setObjectName(QString::fromUtf8("invx_Btn"));
        invx_Btn->setGeometry(QRect(210, 460, 121, 41));
        yrtx_Btn = new QPushButton(centralwidget);
        yrtx_Btn->setObjectName(QString::fromUtf8("yrtx_Btn"));
        yrtx_Btn->setGeometry(QRect(470, 460, 121, 41));
        ln_Btn = new QPushButton(centralwidget);
        ln_Btn->setObjectName(QString::fromUtf8("ln_Btn"));
        ln_Btn->setGeometry(QRect(210, 410, 121, 41));
        logy_Btn = new QPushButton(centralwidget);
        logy_Btn->setObjectName(QString::fromUtf8("logy_Btn"));
        logy_Btn->setGeometry(QRect(470, 410, 121, 41));
        log10_Btn = new QPushButton(centralwidget);
        log10_Btn->setObjectName(QString::fromUtf8("log10_Btn"));
        log10_Btn->setGeometry(QRect(340, 410, 121, 41));
        sqrtx_Btn = new QPushButton(centralwidget);
        sqrtx_Btn->setObjectName(QString::fromUtf8("sqrtx_Btn"));
        sqrtx_Btn->setGeometry(QRect(340, 460, 121, 41));
        xpowy_Btn = new QPushButton(centralwidget);
        xpowy_Btn->setObjectName(QString::fromUtf8("xpowy_Btn"));
        xpowy_Btn->setGeometry(QRect(340, 510, 121, 41));
        exp_Btn = new QPushButton(centralwidget);
        exp_Btn->setObjectName(QString::fromUtf8("exp_Btn"));
        exp_Btn->setGeometry(QRect(210, 510, 121, 41));
        xfact_Btn = new QPushButton(centralwidget);
        xfact_Btn->setObjectName(QString::fromUtf8("xfact_Btn"));
        xfact_Btn->setGeometry(QRect(470, 510, 121, 41));
        lb_Answer = new QLabel(centralwidget);
        lb_Answer->setObjectName(QString::fromUtf8("lb_Answer"));
        lb_Answer->setGeometry(QRect(0, 150, 131, 61));
        lb_ResultOp = new QLabel(centralwidget);
        lb_ResultOp->setObjectName(QString::fromUtf8("lb_ResultOp"));
        lb_ResultOp->setGeometry(QRect(100, 150, 691, 61));
        help_Btn = new QPushButton(centralwidget);
        help_Btn->setObjectName(QString::fromUtf8("help_Btn"));
        help_Btn->setGeometry(QRect(10, 10, 101, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 60, 80, 91));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 210, 141, 101));
        pi_Btn = new QPushButton(centralwidget);
        pi_Btn->setObjectName(QString::fromUtf8("pi_Btn"));
        pi_Btn->setGeometry(QRect(10, 210, 41, 41));
        seven_Btn = new QPushButton(centralwidget);
        seven_Btn->setObjectName(QString::fromUtf8("seven_Btn"));
        seven_Btn->setGeometry(QRect(60, 210, 41, 41));
        eight_Btn = new QPushButton(centralwidget);
        eight_Btn->setObjectName(QString::fromUtf8("eight_Btn"));
        eight_Btn->setGeometry(QRect(110, 210, 41, 41));
        nine_Btn = new QPushButton(centralwidget);
        nine_Btn->setObjectName(QString::fromUtf8("nine_Btn"));
        nine_Btn->setGeometry(QRect(160, 210, 41, 41));
        six_Btn = new QPushButton(centralwidget);
        six_Btn->setObjectName(QString::fromUtf8("six_Btn"));
        six_Btn->setGeometry(QRect(160, 260, 41, 41));
        five_Btn = new QPushButton(centralwidget);
        five_Btn->setObjectName(QString::fromUtf8("five_Btn"));
        five_Btn->setGeometry(QRect(110, 260, 41, 41));
        four_Btn = new QPushButton(centralwidget);
        four_Btn->setObjectName(QString::fromUtf8("four_Btn"));
        four_Btn->setGeometry(QRect(60, 260, 41, 41));
        three_Btn = new QPushButton(centralwidget);
        three_Btn->setObjectName(QString::fromUtf8("three_Btn"));
        three_Btn->setGeometry(QRect(160, 310, 41, 41));
        two_Btn = new QPushButton(centralwidget);
        two_Btn->setObjectName(QString::fromUtf8("two_Btn"));
        two_Btn->setGeometry(QRect(110, 310, 41, 41));
        one_Btn = new QPushButton(centralwidget);
        one_Btn->setObjectName(QString::fromUtf8("one_Btn"));
        one_Btn->setGeometry(QRect(60, 310, 41, 41));
        zero_Btn = new QPushButton(centralwidget);
        zero_Btn->setObjectName(QString::fromUtf8("zero_Btn"));
        zero_Btn->setGeometry(QRect(60, 360, 41, 41));
        x_Btn = new QRadioButton(centralwidget);
        x_Btn->setObjectName(QString::fromUtf8("x_Btn"));
        x_Btn->setGeometry(QRect(40, 470, 41, 22));
        y_Btn = new QRadioButton(centralwidget);
        y_Btn->setObjectName(QString::fromUtf8("y_Btn"));
        y_Btn->setGeometry(QRect(100, 470, 41, 22));
        dot_Btn = new QPushButton(centralwidget);
        dot_Btn->setObjectName(QString::fromUtf8("dot_Btn"));
        dot_Btn->setGeometry(QRect(10, 360, 41, 41));
        negative_Btn = new QPushButton(centralwidget);
        negative_Btn->setObjectName(QString::fromUtf8("negative_Btn"));
        negative_Btn->setGeometry(QRect(10, 310, 41, 41));
        pi_half_Btn = new QPushButton(centralwidget);
        pi_half_Btn->setObjectName(QString::fromUtf8("pi_half_Btn"));
        pi_half_Btn->setGeometry(QRect(10, 260, 41, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Basic_Calculator->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Basic Calculator</span></p></body></html>", nullptr));
        lb_X->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">X=</span></p></body></html>", nullptr));
        lb_Y->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Y=</span></p></body></html>", nullptr));
        x_Field->setInputMask(QString());
        senh_Btn->setText(QCoreApplication::translate("MainWindow", "senh(x)", nullptr));
        cosh_Btn->setText(QCoreApplication::translate("MainWindow", "cosh(x)", nullptr));
        tanh_Btn->setText(QCoreApplication::translate("MainWindow", "tanh(x)", nullptr));
        asen_Btn->setText(QCoreApplication::translate("MainWindow", "asen(x)", nullptr));
        atan_Btn->setText(QCoreApplication::translate("MainWindow", "atan(x)", nullptr));
        acos_Btn->setText(QCoreApplication::translate("MainWindow", "acos(x)", nullptr));
        sen_Btn->setText(QCoreApplication::translate("MainWindow", "sen(x)", nullptr));
        tan_Btn->setText(QCoreApplication::translate("MainWindow", "tan(x)", nullptr));
        sec_Btn->setText(QCoreApplication::translate("MainWindow", "sec(x)", nullptr));
        cot_Btn->setText(QCoreApplication::translate("MainWindow", "cot(x)", nullptr));
        csc_Btn->setText(QCoreApplication::translate("MainWindow", "csc(x)", nullptr));
        cos_Btn->setText(QCoreApplication::translate("MainWindow", "cos(x)", nullptr));
        invx_Btn->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        yrtx_Btn->setText(QCoreApplication::translate("MainWindow", "y\342\210\232x", nullptr));
        ln_Btn->setText(QCoreApplication::translate("MainWindow", "ln(x)", nullptr));
        logy_Btn->setText(QCoreApplication::translate("MainWindow", "logy(x)", nullptr));
        log10_Btn->setText(QCoreApplication::translate("MainWindow", "log10(x)", nullptr));
        sqrtx_Btn->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        xpowy_Btn->setText(QCoreApplication::translate("MainWindow", "x^y", nullptr));
        exp_Btn->setText(QCoreApplication::translate("MainWindow", "exp(x)", nullptr));
        xfact_Btn->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        lb_Answer->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Answer =</span></p></body></html>", nullptr));
        lb_ResultOp->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Output Field</span></p></body></html>", nullptr));
        help_Btn->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Test Funtras", nullptr));
        pi_Btn->setText(QCoreApplication::translate("MainWindow", "PI", nullptr));
        seven_Btn->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        eight_Btn->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine_Btn->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        six_Btn->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        five_Btn->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        four_Btn->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        three_Btn->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        two_Btn->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        one_Btn->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        zero_Btn->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        x_Btn->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        y_Btn->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        dot_Btn->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        negative_Btn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pi_half_Btn->setText(QCoreApplication::translate("MainWindow", "PI/2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
