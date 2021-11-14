// Program a conversion operator for class Date
// that converts the date it holds into a unique integer.

#include <iostream>

using namespace std;

class Date
{
private:
    int month, day, year;

public:
    Date(int inMonth, int inDay, int inYear)
        : month(inMonth), day(inDay), year(inYear) {}

    operator long long()
    {
        return (year * 365 + month * 30 + day);
    }
};

int main()
{
    Date holiday(12, 25, 2016);

    cout << "Holiday is on: " << holiday << endl;

    return 0;
}

// Holiday is on: 736225
