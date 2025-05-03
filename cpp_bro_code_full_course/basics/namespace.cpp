// namespace

// a namespace is a solution to prevent naming conflicts
// = identical names as long as namespace is different

#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main () {

    int x = 0;
    std::cout << "Global x: " << x << std::endl; // prints 0
    std::cout << "First x: " << first::x << std::endl; // prints 1
    std::cout << "Second x: " << second::x << std::endl; // prints 2

    // using namespace first; // this will import all names from the first namespace
    // std::cout << "First x: " << x << std::endl; // prints 1
    // std::cout << "Second x: " << second::x << std::endl; // prints 2

    

    return 0;
}