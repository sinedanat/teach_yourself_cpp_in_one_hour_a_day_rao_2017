#include <iostream>
// Include this to catch exception bad_alloc.
#include <exception>

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
    catch (std::bad_alloc& exp)
    {
        cout << "Exception encountered: " << exp.what() << endl;
        cout << "Got to end, sorry!" << endl;
    }
    catch (...)
    {
        cout << "Exception encountered. Got to end, sorry!" << endl;
    }

    return 0;
}

// Enter number of integers you wish to reserve: 10

// Enter number of integers you wish to reserve: -1
// Exception encountered: std::bad_array_new_length
// Got to end, sorry!
