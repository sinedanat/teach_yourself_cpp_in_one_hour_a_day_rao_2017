#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int value = 0;
    cin >> value;

    value += 8;
    cout << "After += 8, value = " << value << endl;
    value -= 2;
    cout << "After -= 2, value = " << value << endl;
    value /= 4;
    cout << "After /= 4, value = " << value << endl;
    value *= 4;
    cout << "After *= 4, value = " << value << endl;
    value %= 1000;
    cout << "After %= 1000, value = " << value << endl;

    // Note: henceforth assignment happens within cout
    cout << "After <<= 1, value = " << (value <<= 1) << endl;
    cout << "After >>= 2, value = " << (value >>= 2) << endl;

    cout << "After |= 0x55, value = " << (value |= 0x55) << endl;
    cout << "After ^= 0x55, value = " << (value ^= 0x55) << endl;
    cout << "After &= 0x0F, value = " << (value &= 0x0F) << endl;

    return 0;
}

// Enter a number: 255
// After += 8, value = 263
// After -= 2, value = 261
// After /= 4, value = 65
// After *= 4, value = 260
// After %= 1000, value = 260
// After <<= 1, value = 520
// After >>= 2, value = 130
// After |= 0x55, value = 215
// After ^= 0x55, value = 130
// After &= 0x0F, value = 2

// Enter a number: 16
// After += 8, value = 24
// After -= 2, value = 22
// After /= 4, value = 5
// After *= 4, value = 20
// After %= 1000, value = 20
// After <<= 1, value = 40
// After >>= 2, value = 10
// After |= 0x55, value = 95
// After ^= 0x55, value = 10
// After &= 0x0F, value = 10
