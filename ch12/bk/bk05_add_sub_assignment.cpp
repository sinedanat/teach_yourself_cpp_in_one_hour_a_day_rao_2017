#include <iostream>

using namespace std;

class Date
{
private:
    int month, day, year;

public:
    Date(int inMonth, int inDay, int inYear)
        : month(inMonth), day(inDay), year(inYear) {}

    void operator+=(int daysToAdd) // Addition assignment.
    {
        day += daysToAdd;
    }

    void operator-=(int daysToSub) // Subtraction assignment.
    {
        day -= daysToSub;
    }

    void DisplayDate()
    {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main()
{
    Date holiday(12, 25, 2016);
    cout << "holiday is on: ";
    holiday.DisplayDate();

    cout << "holiday -= 19 gives: ";
    holiday -= 19;
    holiday.DisplayDate();

    cout << "holiday += 25 gives: ";
    holiday += 25;
    holiday.DisplayDate();

    return 0;
}

// holiday is on: 12 / 25 / 2016
// holiday -= 19 gives: 12 / 6 / 2016
// holiday += 25 gives: 12 / 31 / 2016
