// Write a program to calculate the area and circumference of a circle
// where the radius is fed by the user.

#include <iostream>

int main()
{
    const double pi = 22.0 / 7;

    double radius = 0.0;
    std::cout << "Enter a radius: ";
    std::cin >> radius;

    std::cout << "Area of circle: " << (pi * radius * radius) << std::endl;
    std::cout << "Circumference of circle: " << (2 * pi * radius) << std::endl;

    return 0;
}

// Enter a radius: 10
// Area of circle: 314.286
// Circumference of circle: 62.8571
