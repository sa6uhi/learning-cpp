#include <iostream>

// cout << (insertion operator) is used to output data to the console
// cin >> (extraction operator) is used to input data from the console
// cin.get() is used to read a single character from the input stream
// cin.getline() is used to read a line of text from the input stream

int main(int argc, char const *argv[])
{
    std::string name;
    // std::getline(std::cin, name); // Read a whole line (including spaces)
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name; // Read a single word (up to whitespace)
    std::cout << "Hello, " << name << "!\n";

    std::cout << "Enter your age: ";
    std::cin >> age; // Read an integer
    std::cout << "You are " << age << " years old.";

    std::cout << "Enter your full name: ";
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    // std::cin.ignore() is used to ignore the newline character left in the input buffer after reading an integer
    std::getline(std::cin, name); // Read a whole line (including spaces)
    std::cout << "Hello " << name << "!\n";

    // OR std::getline(std::cin >> std::ws, name);
    

    return 0;
}
