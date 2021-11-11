// Write a class Circle that computes the area and circumference
// given a radius that is supplied to the class as a parameter
// at the time of instantiation.
// Pi should be contained in a constant private member
// that cannot be accessed from outside the circle.

#include <iostream>

class Circle
{
public:
    Circle(double newRadius) : radius(newRadius) {}
    constexpr double Area()
    {
        return (Pi * radius * radius);
    }
    constexpr double Circumference()
    {
        return (2 * Pi * radius);
    }

private:
    double radius;
    const double Pi = 3.1416;
};

int main()
{
    std::cout << "Enter circle's radius: ";
    double radius = 0;
    std::cin >> radius;

    Circle circle(10);

    std::cout << "Area = " << circle.Area() << std::endl;
    std::cout << "Circumference = " << circle.Circumference() << std::endl;

    return 0;
}

// Enter circle's radius: 10
// Area = 314.16
// Circumference = 62.832
