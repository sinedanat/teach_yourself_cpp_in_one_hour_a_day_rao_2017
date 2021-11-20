#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{

    // 4 bits initialized to 0000.
    bitset<4> fourBits;
    cout << "Initial contents of fourBits: " << fourBits << endl;

    // 5 bits 10101.
    bitset<5> fiveBits("10101");
    cout << "Initial contents of fiveBits: " << fiveBits << endl;

    // C++14 binary literal.
    bitset<6> sixBits(0b100001);
    cout << "Initial contents of sixBits: " << sixBits << endl;

    // 8 bits initialized to long int 255.
    bitset<8> eightbits(255);
    cout << "Initial contents of eightBits: " << eightbits << endl;

    // Instantiate one bitset as a copy of another.
    bitset<8> eightBitsCopy(eightbits);
    cout << "Initial contents of eightBits: " << eightBitsCopy << endl;

    return 0;
}

// Initial contents of fourBits: 0000
// Initial contents of fiveBits: 10101
// Initial contents of sixBits: 100001
// Initial contents of eightBits: 11111111
// Initial contents of eightBits: 11111111
