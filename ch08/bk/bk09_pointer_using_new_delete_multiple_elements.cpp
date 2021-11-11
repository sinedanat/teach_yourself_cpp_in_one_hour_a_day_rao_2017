#include <iostream>

using namespace std;

int main()
{
    cout << "How many integers you wish to enter? ";
    int numEntries = 0;
    cin >> numEntries;

    int* pointsToInts = new int[numEntries];

    cout << "Allocated for " << numEntries << " integers" << endl;

    for (int counter = 0; counter < numEntries; ++counter)
    {
        cout << "Enter number " << counter << ": ";
        cin >> *(pointsToInts + counter);
    }

    cout << "Displaying all numbers entered: " << endl;

    for (int counter = 0; counter < numEntries; ++counter)
        cout << *(pointsToInts++) << " ";

    cout << endl;

    // The original pointer address returned by new
    // during allocation needs to be used
    // in the call to delete[] during de-allocation.
    // Return pointer to initial position.
    pointsToInts -= numEntries;

    // Done with using memory? Release.
    delete[] pointsToInts;
    pointsToInts = nullptr;

    return 0;
}

// How many integers you wish to enter? 4
// Allocated for 4 integers
// Enter number 0: 1
// Enter number 1: 11
// Enter number 2: 111
// Enter number 3: 1111
// Displaying all numbers entered:
// 1 11 111 1111
