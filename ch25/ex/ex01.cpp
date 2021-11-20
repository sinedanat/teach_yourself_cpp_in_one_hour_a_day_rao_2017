// Write a bitset class that contains four bits.
// Initialize it to a number, display the result,
// and add it to another bitset object.
// (The catch: Bitsets don’t allow bitsetA = bitsetX + bitsetY.)

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    std::bitset<4> bX(0b0010);
    std::bitset<4> bY(0b0101);

    std::cout << "bX as bin: " << bX << std::endl;
    std::cout << "bX as dec: " << bX.to_ulong() << std::endl;

    std::cout << "bY as bin: " << bY << std::endl;
    std::cout << "bY as dec: " << bY.to_ulong() << std::endl;

    std::bitset<8> bRes(bX.to_ulong() + bY.to_ulong());

    std::cout << "bRes as bin: " << bRes << std::endl;
    std::cout << "bRes as dec: " << bRes.to_ulong() << std::endl;

    std::cout << bX << " + " << bY << " = " << bRes << std::endl;
    std::cout << bX.to_ulong() << " + "
              << bY.to_ulong() << " = "
              << bRes.to_ulong() << std::endl;

    return 0;
}

// bX as bin: 0010
// bX as dec: 2
// bY as bin: 0101
// bY as dec: 5
// bRes as bin: 00000111
// bRes as dec: 7
// 0010 + 0101 = 00000111
// 2 + 5 = 7
