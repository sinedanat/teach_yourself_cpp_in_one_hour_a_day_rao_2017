// auto with vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto coinFlippedHeads = true;
    auto largeNumber = 2500000000000;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

    vector<int> MylargeNumbers;
    MylargeNumbers.push_back(-45);
    MylargeNumbers.push_back(202);
    MylargeNumbers.push_back(0);
    MylargeNumbers.push_back(1000);

    cout << "Using older C++ style, elements are: " << endl;

    for (vector<int>::const_iterator Iterator = MylargeNumbers.begin();
            Iterator < MylargeNumbers.end();
            ++Iterator)
        cout << *Iterator << " ";

    cout << endl;

    cout << "Using auto to iterate, elements are: " << endl;

    for (auto Iterator = MylargeNumbers.begin();
            Iterator < MylargeNumbers.end();
            ++Iterator)
        cout << *Iterator << " ";

    cout << endl;

    return 0;
}

// coinFlippedHeads = 1 , sizeof(coinFlippedHeads) = 1
// largeNumber = 2500000000000 , sizeof(largeNumber) = 8
// Using older C++ style, elements are: 
// -45 202 0 1000 
// Using auto to iterate, elements are: 
// -45 202 0 1000 
