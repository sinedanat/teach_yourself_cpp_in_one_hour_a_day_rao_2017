#include <iostream>

using namespace std;

int main()
{
    int dogsAge = 30;
    cout << "Initialized dogsAge = " << dogsAge << endl;
    cout << "Adress of dogsAge = " << &dogsAge << endl;

    int* pointsToAnAge = &dogsAge;
    cout << "pointsToAnAge points to dogsAge" << endl;

    cout << "Enter an age for your dog: ";

    // Store input at the memory pointed to by pointsToAnAge
    cin >> *pointsToAnAge;

    // Displaying the address where age is stored
    cout << "Input stored at " << hex << pointsToAnAge << endl;
    cout << "Integer dogsAge = " << dec << dogsAge << endl;

    return 0;
}

// Initialized dogsAge = 30
// Adress of dogsAge = 0x34fdcc
// pointsToAnAge points to dogsAge
// Enter an age for your dog: 4
// Input stored at 0x34fdcc
// Integer dogsAge = 4
