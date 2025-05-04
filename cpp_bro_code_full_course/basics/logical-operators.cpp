#include <iostream>

int main(int argc, char const *argv[])
{
    // Logical operators: && (AND), || (OR), ! (NOT)
    bool a = true;
    bool b = false;

    bool c = (a && b); // AND operator
    std::cout << "a && b: " << c << std::endl; // false
    c = (a || b); // OR operator
    std::cout << "a || b: " << c << std::endl; // true
    c = !a; // NOT operator
    std::cout << "!a: " << c << std::endl; // false
}
