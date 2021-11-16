#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Please enter a string for case-convertion:" << endl;
    cout << "> ";

    string inStr;
    getline(cin, inStr);
    cout << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::toupper);
    cout << "The string converted to upper case is: " << endl;
    cout << inStr << endl << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::tolower);
    cout << "The string converted to lower case is: " << endl;
    cout << inStr << endl << endl;

    return 0;
}

// Please enter a string for case-convertion:
// > My name is Ed.
// 
// The string converted to upper case is:
// MY NAME IS ED.
// 
// The string converted to lower case is:
// my name is ed.
