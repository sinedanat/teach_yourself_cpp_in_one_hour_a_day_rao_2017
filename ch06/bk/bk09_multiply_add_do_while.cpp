#include <iostream>

using namespace std;

int main()
{
    char userSelection = 'x';    // initial value

    do
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
    while (userSelection != 'x');

    cout << "Goodbye!" << endl;

    return 0;
}

// Enter the two integers:
// 4
// 8
// 4 x 8 = 32
// 4 + 8 = 12
// Press x to exit(x) or any other key to recalculate
// ;
// Enter the two integers:
// 8
// 5
// 8 x 5 = 40
// 8 + 5 = 13
// Press x to exit(x) or any other key to recalculate
// x
// Goodbye!
