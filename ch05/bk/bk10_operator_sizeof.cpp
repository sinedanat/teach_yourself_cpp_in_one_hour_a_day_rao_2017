#include <iostream>

using namespace std;

int main()
{
    cout << "Use sizeof to determine memory used by arrays" << endl;
    int myNumbers[100] = {0};

    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << endl;

    return 0;
}

// Use sizeof to determine memory used by arrays
// Bytes used by an int: 4
// Bytes used by myNumbers: 400
// Bytes used by an element: 4
