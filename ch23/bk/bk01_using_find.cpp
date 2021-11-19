#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> numsInVec{2017, 0, -1, 42, 10101, 25};

    cout << "Enter number to find in collection: ";
    int numToFind = 0;
    cin >> numToFind;

    auto element = find(numsInVec.cbegin(), // Start of range.
                        numsInVec.cend(),   // End of range.
                        numToFind);         // Element to find.

    // Check if find succeeded.
    if (element != numsInVec.cend())
        cout << "Value " << *element << " found!" << endl;
    else
        cout << "No element contains value " << numToFind << endl;

    cout << "Finding the first even number using find_if: " << endl;

    auto evenNum = find_if(numsInVec.cbegin(),  // Start of range.
                           numsInVec.cend(),    // End of range.
                           [](const int& elem)
    {
        return (elem % 2) == 0;
    });

    // Check if find succeeded.
    if (evenNum != numsInVec.cend())
    {
        cout << "Number '" << *evenNum << "' found at position [";
        cout << distance(numsInVec.cbegin(), evenNum) << "]" << endl;
    }

    return 0;
}

// Enter number to find in collection: 42
// Value 42 found!
// Finding the first even number using find_if:
// Number '0' found at position [1]

// Enter number to find in collection: 111
// No element contains value 111
// Finding the first even number using find_if:
// Number '0' found at position [1]
