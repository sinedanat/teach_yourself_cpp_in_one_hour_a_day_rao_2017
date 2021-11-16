#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Please enter a string for case-conversion:" << endl;
    cout << "> ";

    string strInput;
    getline(cin, strInput);
    cout << endl;

    for (size_t nCharIndex = 0;
            nCharIndex < strInput.length();
            nCharIndex += 2)
    {
        strInput[nCharIndex] = toupper(strInput[nCharIndex]);
    }

    cout << "The string converted to upper case is: " << endl;
    cout << strInput << endl << endl;

    return 0;
}

// Please enter a string for case-conversion:
// > hello

// The string converted to upper case is:
// HeLlO
