#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    // use a conditional operator ?:
    int max = (num1 > num2) ? num1 : num2;

    /* Similar to -
    int max = 0;
    if (num1 > num2)
        max = num1;
    else
        max = num2;
    */

    cout << "The greater of " << num1 << " and "
         << num2 << " is: " << max << endl;

    return 0;
}

// Enter two numbers
// 2
// 4
// The greater of 2 and 4 is: 4

// Enter two numbers
// 5
// 2
// The greater of 5 and 2 is: 5

// Enter two numbers
// 7
// 7
// The greater of 7 and 7 is: 7
