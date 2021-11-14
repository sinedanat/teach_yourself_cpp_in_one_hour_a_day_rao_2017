#include <iostream>
#include <string>
#include <memory>  // New include to use unique_ptr.

using namespace std;

class Date
{
private:
    int month, day, year;
    string dateInString;

public:
    Date(int inMonth, int inDay, int inYear)
        : month(inMonth), day(inDay), year(inYear) {}

    void DisplayDate()
    {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main()
{
    unique_ptr<int> smartIntPtr(new int);
    *smartIntPtr = 42;

    // Use smart pointer type like an int*.
    cout << "Integer value is: " << *smartIntPtr << endl;

    unique_ptr<Date> smartHoliday(new Date(12, 25, 2016));
    cout << "The new instance of date contains: ";

    // Use smartHoliday just as you would a Date*.
    smartHoliday->DisplayDate();

    return 0;
}

// Integer value is: 42
// The new instance of date contains: 12 / 25 / 2016
