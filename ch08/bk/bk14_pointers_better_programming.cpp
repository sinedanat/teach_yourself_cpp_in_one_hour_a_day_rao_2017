#include <iostream>

using namespace std;

int main()
{
    cout << "Is it sunny (y/n)? ";
    char userInput = 'y';
    cin >> userInput;

    // declare pointer and initialize
    bool* const isSunny = new bool;
    *isSunny = true;

    if (userInput == 'n')
        *isSunny = false;

    cout << "Boolean flag sunny says: " << *isSunny << endl;

    // release valid memory
    delete isSunny;

    return 0;
}

// Is it sunny (y/n)? y
// Boolean flag sunny says: 1

// Is it sunny (y/n)? n
// Boolean flag sunny says: 0
