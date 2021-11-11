#include <iostream>

using namespace std;

int main()
{
    int age = 30;

    int* pointsToInt = &age;
    cout << "pointsToInt points to age now" << endl;

    // Displaying the value of pointer
    cout << "pointsToInt = " << hex << pointsToInt << endl;

    int DogsAge = 9;
    pointsToInt = &DogsAge;
    cout << "pointsToInt points to DogsAge now" << endl;

    cout << "pointsToInt = " << hex << pointsToInt << endl;

    return 0;
}

// pointsToInt points to age now
// pointsToInt = 0x30fdfc
// pointsToInt points to DogsAge now
// pointsToInt = 0x30fdf8
