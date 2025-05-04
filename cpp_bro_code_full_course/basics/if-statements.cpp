#include <iostream>

int main(int argc, char const *argv[])
{
    int age;
    std::cout << "Enter you age:\n";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are over 18";
    }
    else if (age < 0)
    {
        std::cout << "Age can't be below 0";
    } else
    {
        std::cout << "Your are under 18";
    }
    

    return 0;
}
