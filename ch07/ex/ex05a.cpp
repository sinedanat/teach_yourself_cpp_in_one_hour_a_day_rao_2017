// Write a function with return type void
// that still helps the caller calculate
// the area and circumference of a circle
// when supplied the radius.

#include <iostream>

void Area(double radius, double& result);
void Circumference(double radius, double& result);

const double Pi = 3.14159265;

int main()
{
    std::cout << "Enter radius: ";
    double radius = 0.0;
    std::cin >> radius;

    double result = 0.0;

    Area(radius, result);
    std::cout << "Area is: " << result << std::endl;

    Circumference(radius, result);
    std::cout << "Circumference is: " << result << std::endl;

    return 0;
}

void Area(double radius, double& result)
{
    result = Pi * radius * radius;
}

void Circumference(double radius, double& result)
{
    result = 2 * Pi * radius;
}

// Enter radius: 10
// Area is: 314.159
// Circumference is: 62.8319

// Enter radius: 1
// Area is: 3.14159
// Circumference is: 6.28319
