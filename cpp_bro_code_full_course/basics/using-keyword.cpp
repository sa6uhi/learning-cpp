#include <iostream>
#include <vector>
//typedef replaced with using keyword because it is more modern and easier to read and work better with templates

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t; 
using pairlist_t = std::vector<std::pair<std::string, int>>; // using keyword to create an alias for the type
using text_t = std::string; // using keyword to create an alias for the type
using number_t = int; // using keyword to create an alias for the type

int main() {


    // std::vector<std::pair<std::string, int>> pairlist; // original type
    pairlist_t pairlist;
    pairlist.push_back(std::make_pair("John", 25)); 
    pairlist.push_back(std::make_pair("Alice", 30)); 

    

    // std::string text; // original type
    text_t text = "Sabuhi Nazarov"; // using the alias

    number_t number = 42; // using the alias
    std::cout << "Number: " << number << std::endl; // prints Number: 42


    return 0;
}