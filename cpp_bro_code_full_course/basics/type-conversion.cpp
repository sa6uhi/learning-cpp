#include <iostream>

int main() {
    // Type Conversion
    // Implicit conversion (automatic)
    int a = 5;
    double b = a; // int to double
    std::cout << "Implicit conversion: " << b << std::endl; // 5.0

    // Explicit conversion (manual)
    double c = 9.8;
    int d = static_cast<int>(c); // double to int
    // static_cast is preferred for explicit conversion in C++
    // It is safer and more readable than C-style casts.
    std::cout << "Explicit conversion: " << d << std::endl; // 9

    // C-style cast
    char e = 'A';
    int f = (int)e; // char to int
    std::cout << "C-style cast: " << f << std::endl; // 65

    int x = 3.14;
    std::cout << "Implicit conversion from double to int: " << x << std::endl; // 3 (truncated)

    std::cout << (char)100 << "\n";

    int correct = 8;
    int question = 10;
    std::cout << correct / question * 100 << "%" << "\n"; // 0% (integer division)
    double percentage = (double)correct / question * 100; // explicit conversion to double
    std::cout << "Percentage: " << percentage << "%" << std::endl; // 80.0%

    return 0;
}