// Write overloaded functions that calculate
// the volume of a sphere and a cylinder.
// The formulas are the following:
// Volume of sphere = (4 * Pi * radius * radius * radius) / 3
// Volume of a cylinder = Pi * radius * radius * height

#include <iostream>

double volume(double radius);
double volume(double radius, double height);

const double Pi = 3.14159265;

int main()
{
    std::cout << "Enter radius: ";
    double radius = 0.0;
    std::cin >> radius;

    std::cout << "Enter height: ";
    double height = 0.0;
    std::cin >> height;

    std::cout << "Volume of a sphere: " << volume(radius) << std::endl;
    std::cout << "Volume of a sphere: " << volume(radius, height) << std::endl;

    return 0;
}

// Calculate the volume of a sphere.
double volume(double radius)
{
    return (4 * Pi * radius * radius * radius) / 3;
}

// Calculate the volume of a cylinder.
double volume(double radius, double height)
{
    return Pi * radius * radius * height;
}

// Enter radius: 10
// Enter height: 4
// Volume of a sphere: 4188.79
// Volume of a sphere: 1256.64
