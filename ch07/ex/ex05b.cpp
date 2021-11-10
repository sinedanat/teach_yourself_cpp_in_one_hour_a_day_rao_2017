// Write a function with return type void
// that still helps the caller calculate
// the area and circumference of a circle
// when supplied the radius.

#include <iostream>

void Calc(double radius, double& area, double& circumference);

const double Pi = 3.14159265;

int main()
{
    std::cout << "Enter radius: ";
    double radius = 0.0;
    std::cin >> radius;

    double area = 0.0;
    double circumference = 0.0;

    Calc(radius, area, circumference);

    std::cout << "Area is: " << area << std::endl;
    std::cout << "Circumference is: " << circumference << std::endl;

    return 0;
}

void Calc(double radius, double& area, double& circumference)
{
    area = Pi * radius * radius;
    circumference = 2 * Pi * radius;
}

// Enter radius: 10
// Area is: 314.159
// Circumference is: 62.8319

// Enter radius: 1
// Area is: 3.14159
// Circumference is: 6.28319
