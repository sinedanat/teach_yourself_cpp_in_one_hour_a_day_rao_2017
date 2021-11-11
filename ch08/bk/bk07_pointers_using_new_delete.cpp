#include <iostream>

using namespace std;

int main()
{
    // Request for memory space for an int
    int* pointsToAnAge = new int;

    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    cin >> *pointsToAnAge;

    // use indirection operator * to access value
    cout << "Age " << *pointsToAnAge << " is stored at "
         << hex << pointsToAnAge << endl;

    delete pointsToAnAge; // release dynamically allocated memory
    pointsToAnAge = nullptr;

    return 0;
}

// Enter your dog's age: 4
// Age 4 is stored at 0x391900
