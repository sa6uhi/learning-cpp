#include <iostream>

void happyBirthday(std::string name, int age); // if function will declared after main func this line must be written

int main()
{
    int age = 21;
    std::string name = "Sabuhi";
    happyBirthday(name, age);
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n\n";
    std::cout << "You are " << age << " years old!\n\n";
}
