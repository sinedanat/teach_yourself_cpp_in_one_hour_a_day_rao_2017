#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    cout << "Enter \'m\' to multiply, anything else to add: ";
    char userSelection = '\0';
    cin >> userSelection;

    int result = 0;

    if (userSelection == 'm')
        result = num1 * num2;
    else
        result = num1 + num2;

    cout << "result is: " << result << endl;

    return 0;
}

// Enter two integers:
// 10
// 20
// Enter 'm' to multiply, anything else to add: m
// result is: 200

// Enter two integers:
// 10
// 20
// Enter 'm' to multiply, anything else to add: a
// result is: 30
