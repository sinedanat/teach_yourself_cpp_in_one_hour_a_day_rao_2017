#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // Initialize a sample vector with 3 elements.
    vector<int> numsInVec(3);

    // Fill all elements in the container with value 9.
    fill(numsInVec.begin(), numsInVec.end(), 9);

    // Increase the size of the vector to hold 6 elements.
    numsInVec.resize(6);

    // Fill the three elements starting at offset position 3 with value -9.
    fill_n(numsInVec.begin() + 3, 3, -9);

    cout << "Contents of the vector are:" << endl;

    for (size_t index = 0; index < numsInVec.size(); ++index)
    {
        cout << "Element [" << index << "] = ";
        cout << numsInVec[index] << endl;
    }

    return 0;
}

// Contents of the vector are:
// Element [0] = 9
// Element [1] = 9
// Element [2] = 9
// Element [3] = -9
// Element [4] = -9
// Element [5] = -9
