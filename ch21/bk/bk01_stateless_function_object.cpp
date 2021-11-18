#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

// A unary function.
template<typename elementType>
void FuncDisplayElement(const elementType& element)
{
    cout << element << ' ';
};

// A struct that behaves as a unary function.
template<typename elementType>
struct DisplayElement
{
    void operator()(const elementType& element) const
    {
        cout << element << ' ';
    }
};

int main()
{
    vector<int> numsInVec{0, 1, 2, 3, -1, -9, 0, -999};
    cout << "Vector of integers contains: " << endl;

    for_each(numsInVec.begin(),       // Start of range.
             numsInVec.end(),         // End of range.
             DisplayElement<int>());  // Unary function object.

    cout << endl;

    // Display the list of characters.
    list<char> charsInList{'a', 'z', 'k', 'd'};
    cout << "List of characters contains: " << endl;

    for_each(charsInList.begin(),
             charsInList.end(),
             FuncDisplayElement<char>);

    cout << endl;

    return 0;
}

// Vector of integers contains:
// 0 1 2 3 -1 -9 0 -999
// List of characters contains:
// a z k d
