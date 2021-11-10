#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two integers:" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    return 0;
}

// Enter two integers:
// 4 2
// 4 + 2 = 6
// 4 - 2 = 2
// 4 * 2 = 8
// 4 / 2 = 2
// 4 % 2 = 0
