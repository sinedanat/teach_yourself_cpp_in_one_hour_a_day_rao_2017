#include <iostream>

using namespace std;

int main()
{
    // Static array of 5 integers
    int myNumbers[5];

    // Pointer initialized to array
    int* pointToNums = myNumbers;

    // Display address contained in pointer
    cout << "pointToNums = " << hex << pointToNums << endl;

    // Address of array
    cout << "myNumbers = " << hex << myNumbers << endl;

    // Address of first element of array
    cout << "&myNumbers[0] = " << hex << &myNumbers[0] << endl;

    return 0;
}

// pointToNums = 0x40fd60
// myNumbers = 0x40fd60
// &myNumbers[0] = 0x40fd60
