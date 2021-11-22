#include <iostream>
#include <string>
#include <exception>

using namespace std;

class CustomException: public std::exception
{
    string reason;
public:
    // Constructor, needs reason.
    CustomException(const char* why): reason(why) {}

    // Redefining virtual function to return 'reason'.
    virtual const char* what() const throw()
    {
        return reason.c_str();
    }
};

double Divide(double dividend, double divisor)
{
    if (divisor == 0)
        throw CustomException("CustomException: Dividing by 0 is a crime");

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
    // Catch CustomException, bad_alloc, etc.
    catch (exception& exp)
    {
        cout << exp.what() << endl;
        cout << "Sorry, can't continue!" << endl;
    }

    return 0;
}

// Enter dividend: 10
// Enter divisor: 2
// Result is: 5

// Enter dividend: 10
// Enter divisor: 0
// Result is: CustomException: Dividing by 0 is a crime
// Sorry, can't continue!
