#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // typedef is used to create an alias for a type
typedef std::string text_t; // alias for string
typedef int number_t; // alias for int

int main() {
    // std::vector<std::pair<std::string, int>> pairlist; // original type
    pairlist_t pairlist; // using the alias
    pairlist.push_back(std::make_pair("John", 25)); // adding a pair to the vector
    pairlist.push_back(std::make_pair("Alice", 30)); // adding another pair to the vector

    // std::string text; // original type
    text_t text = "Sabuhi Nazarov"; // using the alias
    std::cout << "Name: " << text << std::endl; // prints Sabuhi Nazarov
    std::cout << "Pairlist: " << std::endl; // prints Pairlist:
    for (const auto& pair : pairlist) {
        std::cout << "Name: " << pair.first << ", Age: " << pair.second << std::endl; // prints Name: John, Age: 25
    }
    // prints Name: Alice, Age: 30

    number_t number = 42; // using the alias
    std::cout << "Number: " << number << std::endl; // prints Number: 42


    return 0;
}