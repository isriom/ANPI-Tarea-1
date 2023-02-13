#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include "funtras.cpp"

int main() {

    using namespace boost::multiprecision;
    using namespace funstras;


    // Operations at fixed precision and full numeric_limits support:
    //cpp_dec_float_50 b = 0.001;
    /*
    // We can use any C++ std lib function, lets print all the digits as well:
    std::cout << std::setprecision(50)
              << log(b) << std::endl; // print log(2)    // We can use any C++ std lib function, lets print all the digits as well:
    std::cout << std::setprecision(50)
              <<  ln_t(b) << std::endl; // print log(2)
    cpp_dec_float_50 number = 0.0000000002;
    std::cout << std::setprecision(50)<< divi_t(number) << std::endl;
    cpp_dec_float_50 number2 = 2;
    std::cout << std::setprecision(50)<< exp_t(number2) << std::endl;*/
    //cpp_dec_float_50 number3 = pi_t/2;
    //std::cout << std::setprecision(50)<< cosh_t(number3) << std::endl;
    //number3 = pi_t;
    //std::cout << std::setprecision(50)<< cosh_t(number3) << std::endl;
    //number3 = 3*pi_t/2;
    //std::cout << std::setprecision(50)<< cosh_t(number3) << std::endl;
    //number3 = 2*pi_t;
    //std::cout << std::setprecision(50)<< cosh_t(number3) << std::endl;


    //std::cout << std::setprecision(50) << sin_t(45) << std::endl;
    //std::cout << std::setprecision(50) << sin_t(pi_t) << std::endl;

    std::cout<<std::setprecision(50) << power_t(5,5);
    return 0;
}