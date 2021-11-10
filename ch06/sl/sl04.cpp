#include <iostream>

using namespace std;

int main()
{
    enum Colors
    {
        Violet = 0,
        Indigo,
        Blue,
        Green,
        Yellow,
        Orange,
        Red,
        Crimson,
        Beige,
        Brown,
        Peach,
        Pink,
        White,
    };

    cout << "Here are the available colors: " << endl;
    cout << "Violet: " << Violet << endl;
    cout << "Indigo: " << Indigo << endl;
    cout << "Blue: " << Blue << endl;
    cout << "Green: " << Green << endl;
    cout << "Yellow: " << Yellow << endl;
    cout << "Orange: " << Orange << endl;
    cout << "Red: " << Red << endl;
    cout << "Crimson: " << Crimson << endl;
    cout << "Beige: " << Beige << endl;
    cout << "Brown: " << Brown << endl;
    cout << "Peach: " << Peach << endl;
    cout << "Pink: " << Pink << endl;
    cout << "White: " << White << endl;

    cout << "Choose one by entering code: ";
    int YourChoice = Blue; // initial
    cin >> YourChoice;

    switch (YourChoice)
    {
        case Violet:
        case Indigo:
        case Blue:
        case Green:
        case Yellow:
        case Orange:
        case Red:
            cout << "Bingo, your choice is a Rainbow color!" << endl;
            break;

        default:
            cout << "The color you chose is not in the rainbow" << endl;
            break;
    }

    return 0;
}

// Here are the available colors:
// Violet: 0
// Indigo: 1
// Blue: 2
// Green: 3
// Yellow: 4
// Orange: 5
// Red: 6
// Crimson: 7
// Beige: 8
// Brown: 9
// Peach: 10
// Pink: 11
// White: 12
// Choose one by entering code: 11
// The color you chose is not in the rainbow

// Here are the available colors:
// Violet: 0
// Indigo: 1
// Blue: 2
// Green: 3
// Yellow: 4
// Orange: 5
// Red: 6
// Crimson: 7
// Beige: 8
// Brown: 9
// Peach: 10
// Pink: 11
// White: 12
// Choose one by entering code: 3
// Bingo, your choice is a Rainbow color!
