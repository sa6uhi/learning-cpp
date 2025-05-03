#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double a, b, c;
    
    std::cout << "Enter side a:";
    std::cin >> a;

    std::cout << "Enter side b:";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Side c: " << c;



    return 0;
}
