#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "How many integers shall I reserve memory for?" << endl;
    int numEntries = 0;
    cin >> numEntries;

    int* myNumbers = new int[numEntries];

    cout << "Memory allocated at: " << hex << myNumbers << endl;

    // De-allocate before exiting
    delete[] myNumbers;
    myNumbers = nullptr;

    return 0;
}

// How many integers shall I reserve memory for?
// 4
// Memory allocated at: 0x3c0370
