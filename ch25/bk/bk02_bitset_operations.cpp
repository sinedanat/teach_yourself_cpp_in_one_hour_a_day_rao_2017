#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    bitset<8> inputBits;
    cout << "Enter a 8-bit sequence: ";
    // Store user input in bitset.
    cin >> inputBits;

    cout << "Num 1s you supplied: " << inputBits.count() << endl;
    cout << "Num 0s you supplied: ";
    cout << inputBits.size() - inputBits.count() << endl;

    // Copy.
    bitset<8> inputFlipped(inputBits);

    // toggle the bits.
    inputFlipped.flip();

    cout << "Flipped version is: " << inputFlipped << endl;

    cout << "Result of AND, OR and XOR between the two:" << endl;

    cout << inputBits << " & " << inputFlipped << " = ";
    // Bitwise AND.
    cout << (inputBits & inputFlipped) << endl;

    cout << inputBits << " | " << inputFlipped << " = ";
    // Bitwise OR.
    cout << (inputBits | inputFlipped) << endl;

    cout << inputBits << " ^ " << inputFlipped << " = ";
    // Bitwise XOR.
    cout << (inputBits ^ inputFlipped) << endl;

    return 0;
}

// Enter a 8-bit sequence: 00000010
// Num 1s you supplied: 1
// Num 0s you supplied: 7
// Flipped version is: 11111101
// Result of AND, OR and XOR between the two:
// 00000010 & 11111101 = 00000000
// 00000010 | 11111101 = 11111111
// 00000010 ^ 11111101 = 11111111
