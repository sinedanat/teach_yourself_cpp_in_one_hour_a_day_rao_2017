#include <iostream>
#include <bitset>

int main()
{
    // Initialize the bitset to 1001.
    std::bitset<4> fourBits(9);

    std::cout << "fourBits: " << fourBits << std::endl;

    // Initialize another bitset to 0010.
    std::bitset<4> fourMoreBits(2);

    std::cout << "fourMoreBits: " << fourMoreBits << std::endl;

    std::bitset<4> addResult(fourBits.to_ulong() + fourMoreBits.to_ulong());
    std::cout << "The result of the addition is: " << addResult << std::endl;;

    return 0;
}

// fourBits: 1001
// fourMoreBits: 0010
// The result of the addition is: 1011
