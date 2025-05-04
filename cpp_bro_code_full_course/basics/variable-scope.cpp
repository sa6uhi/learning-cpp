#include <iostream>

// :: Scope resolution operator

void printNum();

int myNum = 2;
int globalNum = 12;

int main(int argc, char const *argv[])
{
    int myNum = 1;

    std::cout << "from main func local myNum: " << myNum << "\n";
    std::cout << "from main func global globalNum: " << globalNum << "\n";
    std::cout << "from main func global myNum: " << ::myNum << "\n";

    printNum();
    return 0;
}

void printNum() {
    int myNum = 1;

    std::cout << "from printNum func myNum: " << myNum << "\n";
    std::cout << "from printNum func globalNum " << globalNum << "\n";
    std::cout << "from printNum func global myNum: " << ::myNum << "\n";

}

// search local variables first then go outer scope