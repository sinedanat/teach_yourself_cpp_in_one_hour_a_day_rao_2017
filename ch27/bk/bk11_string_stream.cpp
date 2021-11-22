#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int input = 0;
    cin >> input;

    stringstream converterStream;
    converterStream << input;
    string inputAsStr;
    converterStream >> inputAsStr;

    cout << "Integer Input = " << input << endl;
    cout << "String gained from integer = " << inputAsStr << endl;

    stringstream anotherStream;
    anotherStream << inputAsStr;
    int Copy = 0;
    anotherStream >> Copy;

    cout << "Integer gained from string, Copy = " << Copy << endl;

    return 0;
}

// Enter an integer: 1234
// Integer Input = 1234
// String gained from integer = 1234
// Integer gained from string, Copy = 1234
