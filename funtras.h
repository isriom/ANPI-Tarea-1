//
// Created by 2001i on 11/2/2023.
//

#ifndef ANPI_TAREA_1_FUNTRAS_H
#define ANPI_TAREA_1_FUNTRAS_H

#include <iostream>
#include "math.h"
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace boost::multiprecision;


#define pi_t 3.14159265358979323846
#define max_iter 2500
#define tol 0.00000001

namespace funstras {

    /**
     *
     * @param x
     * @return
     */
    cpp_dec_float_50 fact_t(int x) {
        if (x != 1) {
            return fact_t(x - 1) * x;
        } else {
            return 1;
        }

    }

    cpp_dec_float_50 power_t(cpp_dec_float_50 x, cpp_dec_float_50 y);

    cpp_dec_float_50 divi_t_inital_value(cpp_dec_float_50 a) {
        cpp_dec_float_50 x = 10;
        cpp_dec_float_50 y = -16;
        cpp_dec_float_50  eps = 2.2204*power_t(x,y);
        cpp_dec_float_50  power=0;
        if(a>=fact_t(100)){
            return 0;
        }else if(a>fact_t(80) && a<fact_t(100)){
            power=15;
            return power_t(eps,power);
        }else if(a>fact_t(60) && a<=fact_t(80)){
            power=11;
            return power_t(eps,power);
        }else if(a>fact_t(40) && a<=fact_t(60)){
            power=8;
            return power_t(eps,power);
        }else if(a>fact_t(20) && a<=fact_t(40)){
            power=4;
            return power_t(eps,power);
        }else{
            power=2;
            return power_t(eps,power);
        }
    }

    /***
     * Placeholder de la funcion power_t de verdad :D
     * @param x
     * @return
     */
    cpp_dec_float_50 power_t(cpp_dec_float_50 x, cpp_dec_float_50 y) {
        cpp_dec_float_50 result = pow(x, y);
        return result;
    }

    /***
     * Placeholder de la funcion divi_t de verdad :D
     * @param x
     * @return
     */
    cpp_dec_float_50 divi_t(cpp_dec_float_50 x) {
        cpp_dec_float_50 x_k = divi_t_inital_value(x);
        cpp_dec_float_50 x_k1 = 0;
        for(int iter=0;iter<max_iter;iter++){
            x_k1 = x_k*(2-x*x_k);
            if(abs(x_k1-x_k)<tol*x_k1){
                return x_k1;
            }
            x_k = x_k1;
            if(iter==max_iter-1){
                return x_k1;
            }
        }
        return x_k;
    }


    /***
     * Placeholder de la funcion sin_t de verdad :D
     * @param x
     * @return
     */
    boost::multiprecision::cpp_dec_float_50 sin_t(boost::multiprecision::cpp_dec_float_50 x) {
        return sin(x);

    }

    /***
     * Placeholder de la funcion cos_t de verdad :D
     * @param x
     * @return
     */
    boost::multiprecision::cpp_dec_float_50 cos_t(boost::multiprecision::cpp_dec_float_50 x) {
        return cos(x);

    }

    /**
     *
     * @param x
     * @return
     */
    boost::multiprecision::cpp_dec_float_50 tan_t(boost::multiprecision::cpp_dec_float_50 x) {
        return sin_t(x) * divi_t(cos_t(x));
    }

    /**
     *
     * @param x
     * @return
     * @throw std::domain_error para valores x iguales o menores que 0
     */
    boost::multiprecision::cpp_dec_float_50 ln_t(boost::multiprecision::cpp_dec_float_50 x) {
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
     *
     * @param x
     * @return
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
            return funstras::power_t(x, y);
        }
    }


    /**
     *
     * @param x
     * @return
     * @throw std::domain_error para valores x iguales o menores que 0
     */
    boost::multiprecision::cpp_dec_float_50 asin_t(boost::multiprecision::cpp_dec_float_50 x) {
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


}
#endif //ANPI_TAREA_1_FUNTRAS_H
