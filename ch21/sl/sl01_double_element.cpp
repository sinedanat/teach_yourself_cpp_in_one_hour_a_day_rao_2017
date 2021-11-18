#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename elementType = int>
struct Double
{
    void operator()(const elementType element) const
    {
        cout << element * 2 << ' ';
    }
};

int main()
{
    vector<int> numsInVec;

    for (int count = 0; count < 10; ++count)
        numsInVec.push_back(count);

    cout << "Displaying the vector of integers:" << endl;

    // Display the array of integers.
    for_each(numsInVec.begin(), // Start of range.
             numsInVec.end(),   // End of range.
             Double<>());       // Unary function object.

    cout << endl;

    return 0;
}

// Displaying the vector of integers:
// 0 2 4 6 8 10 12 14 16 18 
