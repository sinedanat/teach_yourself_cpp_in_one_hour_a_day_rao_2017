#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> numsInVec{25, 101, 2017, -50};

    auto evenNum = find_if(numsInVec.cbegin(),
                           numsInVec.cend(),    // Range to find in.
                           [](const int& num)
    {
        return ((num % 2) == 0);
    });

    if (evenNum != numsInVec.cend())
        cout << "Even number in collection is: " << *evenNum << endl;

    return 0;
}

// Even number in collection is: -50
