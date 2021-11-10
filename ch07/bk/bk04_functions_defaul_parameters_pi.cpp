#include <iostream>

using namespace std;

// Function Declarations (Prototypes)
double Area(double radius, double pi = 3.14);

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "pi is 3.14, do you wish to change this (y/n)? ";
    char changePi = 'n';
    cin >> changePi;

    double circleArea = 0;

    if (changePi == 'y')
    {
        cout << "Enter new pi: ";
        double newPi = 3.14;
        cin >> newPi;
        circleArea = Area(radius, newPi);
    }
    else
        circleArea = Area(radius); // Ignore 2nd param, use default value

    // Call function "Area"
    cout << "Area is: " << circleArea << endl;

    return 0;
}

// Function definitions (implementations)
double Area(double radius, double pi)
{
    return pi * radius * radius;
}

// Enter radius: 10
// pi is 3.14, do you wish to change this (y / n)? n
// Area is: 314

// Enter radius: 10
// pi is 3.14, do you wish to change this (y / n)? y
// Enter new pi: 3.14859
// Area is: 314.859
