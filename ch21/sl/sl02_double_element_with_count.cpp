#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename elementType = int>
struct Double
{
    int usageCount;

    // Constructor.
    Double() : usageCount(0) {};
    void operator()(const elementType element)
    {
        ++usageCount;
        cout << (element * 2) << ' ';
    }
};

int main()
{
    vector<int> numsInVec;

    for (int count = 0; count < 10; ++count)
        numsInVec.push_back(count);

    cout << "Displaying the vector of integers:" << endl;

    Double<int> result;

    // Display the array of integers.
    result = for_each(numsInVec.begin(), // Start of range.
                      numsInVec.end(),   // End of range.
                      Double<>());       // Unary function object.

    cout << endl;

    cout << "operator() was used: " << result.usageCount << endl;

    return 0;
}

// Displaying the vector of integers:
// 0 2 4 6 8 10 12 14 16 18 
// operator() was used: 10
