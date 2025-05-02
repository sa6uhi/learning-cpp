#include <iostream>

int main(int argc, char const *argv[])
{
    int x; // declaration
    x = 5; // assignment

    std::cout << x << std::endl; // prints 5

    int y = 10; // declaration and assignment
    std::cout << y << std::endl; // prints 10

    int sum = x + y;
    std::cout << sum << std::endl; // prints 15


    // Data types
    // Integer(whole numbers)
    int age = 21;
    int year = 2025;
    int days = 7.5;
    std::cout << days << std::endl; // prints 7

    // double (decimal numbers)
    double price = 19.99;
    double gpa = 3.75;
    double temperature = 25.1;

    std::cout << price << std::endl;


    // char (single character)
    char grade = 'A';
    char initial = 'BC'; // error: too many characters in char literal
    char currency = '$';

    std::cout << currency << std::endl; // prints A
    std::cout << initial;

    // boolean (true or false)

    bool student = false;
    bool power = true;
    bool forSale = false;


    // string (sequence of characters)

    std::string name = "John Doe";
    std::string day = "Sunday";
    std::string food = "Kebab";
    std::string address = "123 Main St";



    std::cout << "Hello" << name << "\n"; // prints John Doe
    std::cout << "You are " << age << " years old."; // prints John Doe

    return 0;
}
