#include <iostream>
using namespace std;

int main()
{
    const double Pi = 3.1416;

    cout << "Enter circle's radius: ";
    double Radius = 0;
    cin >> Radius;

    cout << "Area = " << Pi* Radius* Radius << endl;
    cout << "Circumference = " << 2 * Pi* Radius << endl;

    return 0;
}

// Enter circle's radius: 10
// Area = 314.16
// Circumference = 62.832
