#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int inputNum = 0;
    cin >> inputNum;

    cout << "Enter the value of Pi: ";
    double Pi = 0.0;
    cin >> Pi;

    cout << "Enter three characters separated by space: ";
    char char1 = '\0', char2 = '\0', char3 = '\0';
    cin >> char1 >> char2 >> char3;

    cout << "The recorded variable values are:" << endl;
    cout << "inputNum: " << inputNum << endl;
    cout << "Pi: " << Pi << endl;
    cout << "The three characters: " << char1 << char2 << char3 << endl;

    return 0;
}

// Enter an integer: 1234
// Enter the value of Pi: 3.14
// Enter three characters separated by space: a b c
// The recorded variable values are:
// inputNum: 1234
// Pi: 3.14
// The three characters: abc

// Enter an integer: 100
// Enter the value of Pi: 0.314e+1
// Enter three characters separated by space: c + +
// The recorded variable values are:
// inputNum: 100
// Pi: 3.14
// The three characters: c++
