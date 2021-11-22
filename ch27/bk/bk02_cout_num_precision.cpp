#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double Pi = (double)22.0 / 7;
    cout << "Pi = " << Pi << endl;

    cout << endl << "Setting precision to 7: " << endl;
    cout << setprecision(7);
    cout << "Pi = " << Pi << endl;
    cout << fixed << "Fixed Pi = " << Pi << endl;
    cout << scientific << "Scientific Pi = " << Pi << endl;

    cout << endl << "Setting precision to 10: " << endl;
    cout << setprecision(10);
    cout << "Pi = " << Pi << endl;
    cout << fixed << "Fixed Pi = " << Pi << endl;
    cout << scientific << "Scientific Pi = " << Pi << endl;

    cout << endl << "Enter a radius: ";
    double radius = 0.0;
    cin >> radius;
    cout << "Area of circle: " << (2 * Pi * radius * radius) << endl;

    return 0;
}

// Pi = 3.14286

// Setting precision to 7:
// Pi = 3.142857
// Fixed Pi = 3.1428571
// Scientific Pi = 3.1428571e+00

// Setting precision to 10:
// Pi = 3.1428571429e+00
// Fixed Pi = 3.1428571429
// Scientific Pi = 3.1428571429e+00

// Enter a radius: 10
// Area of circle: 6.2857142857e+02
