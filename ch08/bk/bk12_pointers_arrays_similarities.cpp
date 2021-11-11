#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_LEN = 5;

    // Static array of 5 integers, initialized
    int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

    // Pointer initialized to first element in array
    int* pointToNums = myNumbers;

    cout << "Display array using pointer syntax, operator *" << endl;

    for (int index = 0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << *(myNumbers + index) << endl;

    cout << "Display array using ptr with array syntax, operator []" << endl;

    for (int index = 0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << pointToNums[index] << endl;

    return 0;
}

// Display array using pointer syntax, operator *
// Element 0 = 24
// Element 1 = -1
// Element 2 = 365
// Element 3 = -999
// Element 4 = 2011
// Display array using ptr with array syntax, operator []
// Element 0 = 24
// Element 1 = -1
// Element 2 = 365
// Element 3 = -999
// Element 4 = 2011
