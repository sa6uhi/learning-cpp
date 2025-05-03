#include <iostream>
#include <cmath> // for std::pow and std::sqrt
#include <iomanip> // for std::setprecision

int main() {
    // Arithmetic Operators

    int students = 20;
    students = students + 5; // students += 5; // 25
    std::cout << "Students: " << students << std::endl; // 25
    students++; // students = students + 1; // 26
    std::cout << "Students after increment: " << students << std::endl; // 26

    int a = 10, b = 3;
    std::cout << "Addition: " << a + b << std::endl; // 13
    std::cout << "Subtraction: " << a - b << std::endl; // 7
    std::cout << "Multiplication: " << a * b << std::endl; // 30
    std::cout << "Division: " << a / b << std::endl; // 3 (integer division)
    std::cout << "Modulus: " << a % b << std::endl; // 1 (remainder of division)

    // Increment and Decrement Operators
    int x = 5;
    std::cout << "Increment: " << ++x << std::endl; // 6 (pre-increment)
    std::cout << "Decrement: " << --x << std::endl; // 5 (pre-decrement)

    // Power and Square Root using cmath library
    double base = 2.0, exponent = 3.0;
    double power = std::pow(base, exponent); // base^exponent
    double squareRoot = std::sqrt(16.0); // square root of 16

    // Set precision for floating-point output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Power: " << power << std::endl; // 8.00
    std::cout << "Square Root: " << squareRoot << std::endl; // 4.00

    return 0;
}