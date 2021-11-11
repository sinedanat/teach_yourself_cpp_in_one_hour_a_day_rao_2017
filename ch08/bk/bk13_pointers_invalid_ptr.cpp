#include <iostream>

using namespace std;

int main()
{
    // uninitialized pointer (bad)
    bool* isSunny;

    cout << "Is it sunny (y/n)? ";
    char userInput = 'y';
    cin >> userInput;

    if (userInput == 'y')
    {
        isSunny = new bool;
        *isSunny = true;
    }

    // isSunny contains invalid value if user entered 'n'
    cout << "Boolean flag sunny says: " << *isSunny << endl; // Runtime Error!

    // delete being invoked also when new wasn't
    delete isSunny;
    isSunny = nullptr;

    return 0;
}

// Is it sunny (y/n)? y
// Boolean flag sunny says: 1

// Is it sunny (y/n)? 2
// Boolean flag sunny says:
// Runtime Error!
