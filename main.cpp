#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include "funtras.cpp"
int main() {

    using namespace boost::multiprecision;
    using namespace funstras;


    // Operations at fixed precision and full numeric_limits support:
    cpp_dec_float_50 b = 0.001;
    // We can use any C++ std lib function, lets print all the digits as well:
    std::cout << std::setprecision(50)
              << log(b) << std::endl; // print log(2)    // We can use any C++ std lib function, lets print all the digits as well:
    std::cout << std::setprecision(50)
              <<  ln_t(b) << std::endl; // print log(2)

    return 0;
}
