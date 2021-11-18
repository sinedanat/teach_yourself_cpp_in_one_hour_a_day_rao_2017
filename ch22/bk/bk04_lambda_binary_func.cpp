#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vecMultiplicand{0, 1, 2, 3, 4};
    vector<int> vecMultiplier{100, 101, 102, 103, 104};

    // Holds the result of multiplication.
    vector<int> vecResult;

    // Make space for the result of the multiplication.
    vecResult.resize(vecMultiplier.size());

    transform(vecMultiplicand.begin(),  // Range of multiplicands.
              vecMultiplicand.end(),    // End of range.
              vecMultiplier.begin(),    // Multiplier values.
              vecResult.begin(),        // Range that holds result.
              [](int a, int b)
    {
        return a * b;
    }); // Lambda.

    cout << "The contents of the first vector are:" << endl;

    for (size_t index = 0; index < vecMultiplicand.size(); ++index)
        cout << vecMultiplicand[index] << ' ';

    cout << endl;

    cout << "The contents of the second vector are:" << endl;

    for (size_t index = 0; index < vecMultiplier.size(); ++index)
        cout << vecMultiplier[index] << ' ';

    cout << endl;

    cout << "The result of the multiplication is:" << endl;

    for (size_t index = 0; index < vecResult.size(); ++index)
        cout << vecResult[index] << ' ';

    cout << endl;

    return 0;
}

// The contents of the first vector are:
// 0 1 2 3 4 
// The contents of the second vector are:
// 100 101 102 103 104 
// The result of the multiplication is:
// 0 101 204 309 416 
