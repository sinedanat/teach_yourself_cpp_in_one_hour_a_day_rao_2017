// In Exercise 3, if the area and circumference
// were to be stored in integers,
// how would the output be any different?
#include <iostream>

int main()
{
    const int pi = 22 / 7;

    int radius = 0;
    std::cout << "Enter a radius: ";
    std::cin >> radius;

    std::cout << "Area of circle: " << (pi * radius * radius) << std::endl;
    std::cout << "Circumference of circle: " << (2 * pi * radius) << std::endl;

    return 0;
}

// Enter a radius: 10
// Area of circle: 300
// Circumference of circle: 60
