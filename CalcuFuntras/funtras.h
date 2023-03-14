#ifndef FUNTRAS_H
#define FUNTRAS_H

#include "math.h"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>

using namespace boost::multiprecision;

#define pi_t 3.14159265358979323846
#define max_iter 2500
#define tol 0.00000001



namespace funtras{


/**Entradas: x numero al que calcular el factorial
     * Salidas: Factorial de x
     */
    cpp_dec_float_50 fact_t(int x) {

        if (x<0){
            throw std::domain_error("x debe ser mayor o igual a 0");
        }

        if(x==0){
            return 1;
        }
        if (x != 1) {
            return fact_t(x - 1) * x;
        } else {
            return 1;
        }

    }

    cpp_dec_float_50 power_t(cpp_dec_float_50 x, cpp_dec_float_50 y);

    cpp_dec_float_50 divi_t_inital_value(cpp_dec_float_50 a) {
        cpp_dec_float_50  eps = 2.2204*pow(10,-16);
        if(a>=fact_t(100)){
            return 0;
        }else if(a>fact_t(80) && a<fact_t(100)){
            return power_t(eps,15);
        }else if(a>fact_t(60) && a<=fact_t(80)){
            return power_t(eps,11);
        }else if(a>fact_t(40) && a<=fact_t(60)){
            return power_t(eps,8);
        }else if(a>fact_t(20) && a<=fact_t(40)){
            return power_t(eps,4);
        }else{
            return power_t(eps,2);
        }
    }
    /***
     * Entradas: x numero de tipo cpp_dec_float_50 al que calcular el inverso
     * Salidas: Inverso de x
     * @return
     */
    cpp_dec_float_50 divi_t(cpp_dec_float_50 x) {
        cpp_dec_float_50 x_k = divi_t_inital_value(x);
        cpp_dec_float_50 x_k1 = 0;
        for(int iter=0;iter<max_iter;iter++){
            x_k1.assign(x_k*(2-x*x_k));
            if(abs(x_k1-x_k)<tol*x_k1){
                return x_k1;
            }
            x_k.assign(x_k1);
            if(iter==max_iter-1){
                return x_k1;
            }
        }
        return x_k;
    }


    /***
     * Placeholder de la funcion power_t de verdad :D
     * @param x
     * @return
     */
    cpp_dec_float_50 power_t(cpp_dec_float_50 x, cpp_dec_float_50 y) {
        cpp_dec_float_50 result = 1;
        cpp_dec_float_50 tempy=0;


        if(y==0){
            return 1;
        }
        else if(x==0){
            return 0;
        }
        else if(y ==1){
            return x;
        }
        else if(0>y){
                tempy = -1*y;
            while(tempy!=0){
                result*=x;
                tempy--;
            }
        }
        else{
            result = pow(x,y);
        }

        if(0>y)
            return divi_t(result);
        else{
            return result;
        }
    }



    /***
    * Placeholder de la funcion sin_t de verdad :D
    * @param x
    * @return S_k1 aproximacion de la funcion seno(x)
    */
    boost::multiprecision::cpp_dec_float_50 sin_t(boost::multiprecision::cpp_dec_float_50 x) {
        cpp_dec_float_50  S_k;
        cpp_dec_float_50  S_k1;
        // pendiente: validar numeros Reales, excluir complejos
        for(int iter=0; iter<max_iter;iter++){
            S_k.assign( power_t(-1,iter) * power_t(x, 2*iter + 1) * divi_t(fact_t(2*iter + 1)));
            S_k1.assign( power_t(-1,iter+1) * power_t(x, 2*(iter+1) + 1) * divi_t(fact_t(2*(iter+1) + 1)));

            if(abs(S_k1 - S_k < tol)){
                return S_k1;
            }
            S_k.assign(S_k1);
        }
    }

    /***
     * Placeholder de la funcion sinh_t de verdad :D
     * @param x
     * @return
     */
    cpp_dec_float_50 sinh_t(cpp_dec_float_50 a) {
        cpp_dec_float_50 S_k = a;
        cpp_dec_float_50 S_k1 = 0;
        for(int iter=1;iter<max_iter;iter++){
            S_k1.assign(S_k+ power_t(a,2*iter+1)* divi_t(fact_t(2*iter+1)));
            if(abs(S_k1-S_k)<tol){
                return S_k1;
            }
            S_k.assign(S_k1);
        }
    }

    /***
        * Placeholder de la funcion cos_t de verdad :D
        * @param x
        * @return S_k1 aproximacion de la funcion cos(x)
        */
    boost::multiprecision::cpp_dec_float_50 cos_t(boost::multiprecision::cpp_dec_float_50 x) {
        cpp_dec_float_50 S_k;
        cpp_dec_float_50 S_k1;
        // pendiente: validar numeros Reales, excluir complejos
        for (int iter = 0; iter < max_iter; iter++) {
            S_k.assign(power_t(-1, iter) * power_t(x, 2 * iter) * divi_t(fact_t(2 * iter)));
            S_k1.assign(power_t(-1, iter + 1) * power_t(x, 2 * (iter + 1)) * divi_t(fact_t(2 * (iter + 1))));

            if (abs(S_k1 - S_k < tol)) {
                return S_k1;
            }
            S_k.assign(S_k1);
        }
    }
    /***
     * Placeholder de la funcion cosh_t de verdad :D
     * @param x
     * @return
     */
    cpp_dec_float_50 cosh_t(cpp_dec_float_50 a) {
        cpp_dec_float_50 S_k = 1;
        cpp_dec_float_50 S_k1 = 0;
        for(int iter=1;iter<max_iter;iter++){
            S_k1.assign(S_k+ power_t(a,2*iter)* divi_t(fact_t(2*iter)));
            if(abs(S_k1-S_k)<tol){
                return S_k1;
            }
            S_k.assign(S_k1);
        }
    }

    /***
    * Placeholder de la funcion tanh_t de verdad :D
    * @param x
    * @return aproximacion de la funcion tanh(x)
    */
    boost::multiprecision::cpp_dec_float_50 tanh_t(boost::multiprecision::cpp_dec_float_50 x) {
        return sinh_t(x) * divi_t(cosh(x)); // tanh(x) = sinh(x)/cosh(x)
    }

    /***
     * Placeholder de la funcion sec_t de verdad :D
     * @param x
     * @return
     */
    cpp_dec_float_50 sec_t(cpp_dec_float_50 a) {
        return divi_t(cos_t(a));
    }

    cpp_dec_float_50 tan_t(cpp_dec_float_50 a);

/***
     * Placeholder de la funcion cot_t de verdad :D
     * @param x
     * @return
     */
    cpp_dec_float_50 cot_t(cpp_dec_float_50 a) {
        return divi_t(tan_t(a));
    }
    /***
     * Entradas: x el valor del angulo del que se obtendra la tangente
     * Salidas: la tangente de x
     */
    cpp_dec_float_50 tan_t(cpp_dec_float_50 x) {
        return sin_t(x) * divi_t(cos_t(x));;
    }


    /**
     * Entradas: x valor del que se obtendra el logaritmo
     * Salidas: logaritmo natural de x
     * @param x
     * @return
     * @throw std::domain_error para valores x iguales o menores que 0
     */
    cpp_dec_float_50 ln_t(boost::multiprecision::cpp_dec_float_50 x) {
        if (x <= 0) {
            throw std::domain_error(" x debe ser mayor a 0");
        }
        boost::multiprecision::cpp_dec_float_50 S_c = 2 * (x - 1) * divi_t(x + 1);
        boost::multiprecision::cpp_dec_float_50 S_k = 1;
        boost::multiprecision::cpp_dec_float_50 S_k1 = S_k + (divi_t(3) * power_t((x - 1) * divi_t(x + 1), 2));
        for (int i = 2; i < max_iter; ++i) {
            if (abs(S_k1 - S_k) < tol) {
                return S_c * S_k1;
            }
            S_k.assign(S_k1);
            S_k1.assign(S_k + (divi_t(2 * i + 1) * power_t(((x - 1) * divi_t(x + 1)), 2 * i)));
        }
        return S_k1;
    }

    /**
     * Entradas: x el valor al que se le calculara la raiz, y el grado de la raiz
     * Salidas: la raiz de grado y de x
     * @throw std::domain_error para valor x menores que 0
     * @throw std::domain_error para y pares con x negativos
     */
    boost::multiprecision::cpp_dec_float_50
    root_t(boost::multiprecision::cpp_dec_float_50 x, boost::multiprecision::cpp_dec_float_50 y) {
        if (x < 0) {
            throw std::domain_error(" x debe ser mayor o igual a 0");
        }
        if (y < 0) {
            return power_t(x, y);
        }
        if (floor(y) == y) {
            //Es entero
            if (y < 2) {
                return x;
            }
            if (y.convert_to<int>() % 2 == 0 && x < 0) {
                throw std::domain_error(" x debe ser mayor o igual a 0");
            }
            boost::multiprecision::cpp_dec_float_50 S_k = x * 0.5;
            boost::multiprecision::cpp_dec_float_50 S_k1 =
                    S_k - (power_t(S_k, y) - x) * divi_t(y * power_t(S_k, y - 1));
            for (int i = 2; i < max_iter; ++i) {
                if (abs(S_k1 - S_k) < tol * abs(S_k1)) {
                    return S_k1;
                }
                S_k.assign(S_k1);
                S_k1.assign(S_k - (power_t(S_k, y) - x) * divi_t(y * power_t(S_k, y - 1)));
            }
            return S_k1;
        } else {
            return funtras::power_t(x, y);
        }
    }

    /**
     * Funcion raiz cuadrada de X
     * @param x
     * @return aproximacion de la sqrt(x)
     */
    boost::multiprecision::cpp_dec_float_50 sqrt_t(boost::multiprecision::cpp_dec_float_50 x) {
        return root_t(x, 2); // se invoca a una funcion existente con indice 2
    }

    /**
     * Entradas: x valor del angulo del que se le calculara el arcoseno
     * Salidas: el arcoseno de x
     * @throw std::domain_error para valores x iguales o menores que 0
     */
    cpp_dec_float_50 asin_t(boost::multiprecision::cpp_dec_float_50 x) {
        boost::multiprecision::cpp_dec_float_50 S_k = x;
        boost::multiprecision::cpp_dec_float_50 S_k1 = S_k + (divi_t(6) * power_t(x, 3));
        for (int i = 2; i < max_iter; ++i) {
            if (abs(S_k1 - S_k) < tol) {
                return S_k1;
            }
            S_k.assign(S_k1);
            S_k1.assign(S_k + fact_t(2 * i) * divi_t(power_t(4, i) * power_t(fact_t(i), 2) * (2 * i + 1)) *
                                      power_t(x, 2 * i + 1));
        }
        return S_k1;
    }


    cpp_dec_float_50 exp_t(cpp_dec_float_50 a){
        cpp_dec_float_50 S_k = 1;
        cpp_dec_float_50 S_k1 = 0;
        for(int iter=1;iter<max_iter;iter++){
            S_k1.assign(S_k+power_t(a,iter)* divi_t(fact_t(iter)));
            if(abs(S_k1-S_k)<tol){
                return S_k1;
            }
            S_k.assign(S_k1);
        }
    }

    cpp_dec_float_50 atan_t(boost::multiprecision::cpp_dec_float_50 x){
        cpp_dec_float_50 S_k = x;
        cpp_dec_float_50 S_k1 = 0;

        if(x>=-1 and x<=1){
            //S_k1 = -1* power_t(x,3)* divi_t(3);
            for(int n =0; n<=max_iter;n++){
                S_k1.assign(power_t(-1,n)* power_t(x,2*n+1)* divi_t(2*n+1));
                if(abs(S_k1-S_k)<tol){
                    return S_k;
                }
                S_k.assign(S_k1);
            }
        }
        else if(x>1){
            for(int n =0; n<=max_iter;n++){
                S_k1.assign(pi_t*divi_t(2)-(power_t(-1,n)*divi_t((2*n+1)*power_t(x,2*n+1))));
                if(abs(S_k1-S_k)<tol){
                    return S_k;
                }
                S_k.assign(S_k1);
            }
        }else{ //x<1
            for(int n =0; n<=max_iter;n++){
                S_k1.assign(-pi_t*divi_t(2)-(power_t(-1,n)*divi_t((2*n+1)*power_t(x,2*n+1))));
                if(abs(S_k1-S_k)<tol){
                    return S_k;
                }
                S_k.assign(S_k1);
            }
        }
    }
    cpp_dec_float_50 log_t(boost::multiprecision::cpp_dec_float_50 x, boost::multiprecision::cpp_dec_float_50 y){
        if(y==1)
            std::cout<<"Error";
        else if(x==1)
            return 0;
        else if(x==y)
            return 1;
        else
            return ln_t(x)* divi_t(ln_t(y));

    }
    cpp_dec_float_50 csc_t(boost::multiprecision::cpp_dec_float_50 x){
        return divi_t(sin_t(x));
    }

    cpp_dec_float_50 acos_t(boost::multiprecision::cpp_dec_float_50 x){
        return pi_t*divi_t(2)-asin_t(x);
    }



}

#endif // FUNTRAS_H




