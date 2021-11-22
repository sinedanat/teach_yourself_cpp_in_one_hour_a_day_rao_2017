#include <iostream>

using namespace std;

double Divide(double dividend, double divisor)
{
    if (divisor == 0)
        throw "Dividing by 0 is a crime";

    return (dividend / divisor);
}

int main()
{
    cout << "Enter dividend: ";
    double dividend = 0;
    cin >> dividend;
    cout << "Enter divisor: ";
    double divisor = 0;
    cin >> divisor;

    try
    {
        cout << "Result is: " << Divide(dividend, divisor);
    }
    catch (const char* exp)
    {
        cout << "Exception: " << exp << endl;
        cout << "Sorry, can't continue!" << endl;
    }

    return 0;
}

// Enter dividend: 10
// Enter divisor: 2
// Result is: 5

// Enter dividend: 10
// Enter divisor: 0
// Result is: Exception: Dividing by 0 is a crime
// Sorry, can't continue!
