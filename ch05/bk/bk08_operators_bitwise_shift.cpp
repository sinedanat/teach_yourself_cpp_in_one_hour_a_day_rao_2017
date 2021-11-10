#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int inputNum = 0;
    cin >> inputNum;

    int halfNum = inputNum >> 1;
    int quarterNum = inputNum >> 2;
    int doubleNum = inputNum << 1;
    int quadrupleNum = inputNum << 2;

    cout << "Quarter: " << quarterNum << endl;
    cout << "Half: " << halfNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;

    return 0;
}

// Enter a number: 255
// Quarter: 63
// Half: 127
// Double: 510
// Quadruple: 1020

// Enter a number: 16
// Quarter: 4
// Half: 8
// Double: 32
// Quadruple: 64
