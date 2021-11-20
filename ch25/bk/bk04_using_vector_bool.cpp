#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Instantiated to hold 3 bool flags.
    vector<bool> boolFlags(3);
    boolFlags[0] = true;
    boolFlags[1] = true;
    boolFlags[2] = false;

    // You may instantiate bool flags
    // with initial values using List Initialization.
    vector<bool> boolFlagsAnother{true, true, false};

    // Insert a fourth bool at the end.
    boolFlags.push_back(true);
    cout << "The contents of the vector are: " << endl;

    for (size_t index = 0; index < boolFlags.size(); ++index)
        cout << boolFlags[index] << ' ';

    cout << endl;

    boolFlags.flip();

    cout << "The contents of the vector are: " << endl;

    for (size_t index = 0; index < boolFlags.size(); ++index)
        cout << boolFlags[index] << ' ';

    cout << endl;

    return 0;
}

// The contents of the vector are:
// 1 1 0 1
// The contents of the vector are:
// 0 0 1 0
