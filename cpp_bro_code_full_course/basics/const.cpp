#include <iostream>

int main() {

    const double PI = 3.14159;
    const int SPEED_OF_LIGHT = 299792458; // in meters per second
    const int GRAVITY = 9.81; // in meters per second squared
    const int EARTH_RADIUS = 6371; // in kilometers
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    
    double radius = 10;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    std::cout << circumference << " cm";

    return 0;
}