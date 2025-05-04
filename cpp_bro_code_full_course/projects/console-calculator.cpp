#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    char op;
    double num1, num2, result;

    std::cout << "*********** CALCULATOR! ***********\n";

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << "\n";
            } else {
                std::cout << "Error: Division by zero!\n";
            }
            break;
        default:
            std::cout << "Error: Invalid operator!\n";
    }

    std::cout << "***********************************\n";





    return 0;
}
