#include <iostream>

using namespace std;

int main()
{
    char userSelection = 'm';    // initial value

    while (userSelection != 'x')
    {
        cout << "Enter the two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << num1 << " x " << num2 << " = " << num1* num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        cout << "Press x to exit(x) or any other key to recalculate" << endl;
        cin >> userSelection;
    }

    cout << "Goodbye!" << endl;

    return 0;
}

// Enter the two integers:
// 4
// 2
// 4 x 2 = 8
// 4 + 2 = 6
// Press x to exit(x) or any other key to recalculate
// m
// Enter the two integers:
// 7
// 6
// 7 x 6 = 42
// 7 + 6 = 13
// Press x to exit(x) or any other key to recalculate
// x
// Goodbye!
