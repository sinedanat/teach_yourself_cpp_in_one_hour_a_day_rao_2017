// Demonstrate how you would toggle
// (that is, switch) the bits in a bitset.

#include <iostream>
#include <bitset>

int main()
{
    std::bitset<4> bNum(0b0010);

    std::cout << "bNum before toggle bits: " << bNum << std::endl;

    bNum.flip();

    std::cout << "bNum after toggle bits: " << bNum << std::endl;

    return 0;
}

// bNum before toggle bits: 0010
// bNum after toggle bits: 1101
