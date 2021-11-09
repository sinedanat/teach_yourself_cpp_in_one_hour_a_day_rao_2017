#include <iostream>
using namespace std;

int main()
{
    auto coinFlippedHeads = true;
    auto largeNumber = 2500000000000;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

    return 0;
}

// coinFlippedHeads = 1 , sizeof(coinFlippedHeads) = 1
// largeNumber = 2500000000000 , sizeof(largeNumber) = 8
