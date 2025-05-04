#include <iostream>

double square(double length);
double cube(double length);

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName = "Sabuhi";
    std::string lastName = "Nazarov";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    std::cout << "Hello " << fullName;

    return 0;
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

std::string concatStrings(std::string str1, std::string str2)
{
    return str1 + " " + str2;
}