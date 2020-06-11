#include "fibonacci.hpp"

#include <iostream>

int main(){
    long int fib1 = fibonacci1(16);
    std::cout << fib1 << "\n";
    long int fib2 = fibonacci2(16);
    std::cout << fib2 << "\n";
    long int fib3 = fibonacci3(16);
    std::cout << fib3 << "\n";
    return 0;
}