#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));            // Seed the random number generator with the current time
    int num1 = (rand() % 6) + 1; // 32767 is the max value of rand()
    // rand() % 20 gives a number between 0 and 19, so we add 1 to get a number between 1 and 20
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
}