#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stlString("Hello String");

    // Access the contents of the string using array syntax.
    cout << "Display elements in string using array-syntax: " << endl;

    for (size_t charCounter = 0;
            charCounter < stlString.length();
            ++charCounter)
    {
        cout << "Character [" << charCounter << "] is: ";
        cout << stlString[charCounter] << endl;
    }

    cout << endl;

    // Access the contents of a string using iterators.
    cout << "Display elements in string using iterators: " << endl;
    int charOffset = 0;

    for (auto charLocator = stlString.cbegin();
            charLocator != stlString.cend();
            ++charLocator)
    {
        cout << "Character [" << charOffset++ << "] is: ";
        cout << *charLocator << endl;
    }

    cout << endl;

    // Access contents as a const char*.
    cout << "The char* representation of the string is: ";
    cout << stlString.c_str() << endl;

    return 0;
}

// Display elements in string using array-syntax: 
// Character [0] is: H
// Character [1] is: e
// Character [2] is: l
// Character [3] is: l
// Character [4] is: o
// Character [5] is:  
// Character [6] is: S
// Character [7] is: t
// Character [8] is: r
// Character [9] is: i
// Character [10] is: n
// Character [11] is: g
// 
// Display elements in string using iterators: 
// Character [0] is: H
// Character [1] is: e
// Character [2] is: l
// Character [3] is: l
// Character [4] is: o
// Character [5] is:  
// Character [6] is: S
// Character [7] is: t
// Character [8] is: r
// Character [9] is: i
// Character [10] is: n
// Character [11] is: g
// 
// The char* representation of the string is: Hello String
