#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int month, day, year;
    string dateInString;

public:
    Date(int inMonth, int inDay, int inYear)
        : month(inMonth), day(inDay), year(inYear) {}

    Date operator+(int daysToAdd) // Binary addition.
    {
        return Date(month, day + daysToAdd, year);
    }

    Date operator-(int daysToSub) // Binary subtraction.
    {
        return Date(month, day - daysToSub, year);
    }

    void DisplayDate()
    {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main()
{
    Date Holiday(12, 25, 2016);
    cout << "Holiday on: ";
    Holiday.DisplayDate();

    Date PreviousHoliday(Holiday - 19);
    cout << "Previous holiday on: ";
    PreviousHoliday.DisplayDate();

    Date NextHoliday(Holiday + 6);
    cout << "Next holiday on: ";
    NextHoliday.DisplayDate();

    return 0;
}

// Holiday on: 12 / 25 / 2016
// Previous holiday on: 12 / 6 / 2016
// Next holiday on: 12 / 31 / 2016
