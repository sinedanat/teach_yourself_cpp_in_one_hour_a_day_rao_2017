#include <iostream>

using namespace std;

const double Pi = 3.14159265;

void QueryAndCalculate()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "Area: " << (Pi * radius * radius) << endl;

    cout << "Do you wish to calculate circumference (y/n)? ";
    char calcCircum = 'n';
    cin >> calcCircum;

    // Use of multiple returns could’ve been avoided simply
    // by changing the if condition to testing for 'y' or yes.
    if (calcCircum == 'y')
        cout << "Circumference: " << (2 * Pi * radius) << endl;

    return;
}

int main()
{
    QueryAndCalculate();

    return 0;
}

// Enter radius: 10
// Area: 314.159
// Do you wish to calculate circumference (y/n)? y
// Circumference: 62.8319
