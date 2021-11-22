#include <iostream>

using namespace std;

int main()
{
    cout << "Enter number of integers you wish to reserve: ";

    try
    {
        size_t input = 0;
        cin >> input;

        // Request memory space and then return it.
        int* numArray = new int[input];
        delete[] numArray;
    }
    catch (...)
    {
        cout << "Exception occurred. Got to end, sorry!" << endl;
    }

    return 0;
}

// Enter number of integers you wish to reserve: 10

// Enter number of integers you wish to reserve: -1
// Exception occurred. Got to end, sorry!
