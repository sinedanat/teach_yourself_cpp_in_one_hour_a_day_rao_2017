// Also contains postfix increment and decrement.

#include <iostream>

using namespace std;

class Date
{
private:
    int month, day, year;

public:
    Date(int inMonth, int inDay, int inYear)
        : month(inMonth), day(inDay), year(inYear) {}

    Date& operator++() // Prefix increment.
    {
        ++day;

        return *this;
    }

    Date& operator--() // Prefix decrement.
    {
        --day;
        
        return *this;
    }

    Date operator++(int) // Postfix increment.
    {
        Date copy(month, day, year);
        ++day;
        
        return copy;
    }

    Date operator--(int) // Postfix decrement.
    {
        Date copy(month, day, year);
        --day;
        
        return copy;
    }

    void DisplayDate()
    {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main()
{
    Date holiday(12, 25, 2016);  // Dec 25, 2016.

    cout << "The date object is initialized to: ";
    holiday.DisplayDate();

    ++holiday; // Move date ahead by a day.
    cout << "Date after prefix-increment is: ";
    holiday.DisplayDate();

    --holiday; // Move date backwards by a day.
    cout << "Date after a prefix-decrement is: ";
    holiday.DisplayDate();

    return 0;
}

// The date object is initialized to: 12 / 25 / 2016
// Date after prefix-increment is: 12 / 26 / 2016
// Date after a prefix-decrement is: 12 / 25 / 2016
