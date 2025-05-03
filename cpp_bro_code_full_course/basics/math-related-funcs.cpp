#include <iostream>
#include <cmath> // for sqrt, pow, etc.

int main(int argc, char const *argv[])
{
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); // max of x and y
    std::cout << "Max of x and y: " << z << std::endl;
    z = std::min(x, y); // min of x and y
    std::cout << "Min of x and y: " << z << std::endl;

    z = std::pow(2, 3);
    std::cout << "2^3: " << z << std::endl; // 2^3 = 8
    z = std::pow(2, 4);
    std::cout << "2^4: " << z << std::endl; // 2^4 = 16

    z = std::sqrt(9); // square root of 16
    std::cout << "Square root of 9: " << z << std::endl; // 4

    z = std::abs(-5); // absolute value of -5
    std::cout << "Absolute value of -5: " << z << std::endl; // 5

    x = 3.14;
    z = std::round(x); // round to nearest integer
    std::cout << "Round of 3.14: " << z << std::endl; // 3
    z = std::ceil(x); // round up to nearest integer
    std::cout << "Ceil of 3.14: " << z << std::endl; // 4
    z = std::floor(x); // round down to nearest integer
    std::cout << "Floor of 3.14: " << z << std::endl; // 3

    return 0;
}
