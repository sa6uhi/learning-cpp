#include <iostream>

int main(int argc, char const *argv[])
{
    int grade = 85;
    std::string result = (grade >= 60) ? "Passed" : "Failed";
    std::cout << "Result: " << result << std::endl;

    bool hungry = true;
    std::string food = hungry ? "Pizza" : "No Pizza";
    std::cout << "Food: " << food << std::endl;

    std::cout <<(hungry ? "You are hungry" : "Not hungry");
    return 0;
}
