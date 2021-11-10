#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a boolean value true(1) or false(0): ";
    bool Value1 = false;
    cin >> Value1;

    cout << "Enter another boolean value true(1) or false(0): ";
    bool Value2 = false;
    cin >> Value2;

    cout << "Result of bitwise operators on these operands: " << endl;
    cout << "Bitwise AND: " << (Value1 & Value2) << endl;
    cout << "Bitwise OR: " << (Value1 | Value2) << endl;
    cout << "Bitwise XOR: " << (Value1 ^ Value2) << endl;

    return 0;
}

// Enter a boolean value true(1) or false(0): 0
// Enter another boolean value true(1) or false(0): 1
// Result of bitwise operators on these operands:
// Bitwise AND: 0
// Bitwise OR: 1
// Bitwise XOR: 1

// Enter a boolean value true(1) or false(0): 1
// Enter another boolean value true(1) or false(0): 0
// Result of bitwise operators on these operands:
// Bitwise AND: 0
// Bitwise OR: 1
// Bitwise XOR: 1

// Enter a boolean value true(1) or false(0): 1
// Enter another boolean value true(1) or false(0): 1
// Result of bitwise operators on these operands:
// Bitwise AND: 1
// Bitwise OR: 1
// Bitwise XOR: 0

// Enter a boolean value true(1) or false(0): 0
// Enter another boolean value true(1) or false(0): 0
// Result of bitwise operators on these operands:
// Bitwise AND: 0
// Bitwise OR: 0
// Bitwise XOR: 0
