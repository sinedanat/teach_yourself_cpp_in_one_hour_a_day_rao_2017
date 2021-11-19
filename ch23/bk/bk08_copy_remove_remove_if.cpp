#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
    {
        cout << *element << ' ';
    }

    cout << "| Number of elements: " << container.size() << endl;
}

int main()
{
    list<int> numsInList{2017, 0, -1, 42, 10101, 25};

    cout << "Source (list) contains:" << endl;
    DisplayContents(numsInList);

    // Initialize vector to hold 2x elements as the list.
    vector<int> numsInVec(numsInList.size() * 2);

    auto lastElement = copy(numsInList.cbegin(),    // Start source range.
                            numsInList.cend(),      // End source range.
                            numsInVec.begin());     // Start dest range.

    // Copy odd numbers from list into vector.
    copy_if(numsInList.cbegin(),
            numsInList.cend(),
            lastElement,
            [](const int& element)
    {
        return ((element % 2) != 0);
    });

    cout << "Destination (vector) after copy and copy_if:" << endl;
    DisplayContents(numsInVec);

    // Remove all instances of '0'.
    auto newEnd = remove(numsInVec.begin(), numsInVec.end(), 0);

    // Resize vector using erase().
    numsInVec.erase(newEnd, numsInVec.end());

    // Remove all odd numbers from the vector using remove_if.
    newEnd = remove_if(numsInVec.begin(),
                       numsInVec.end(),
                       [](const int& element)
    {
        return ((element % 2) != 0);
    });

    // Resize vector using erase().
    numsInVec.erase(newEnd, numsInVec.end());

    cout << "Destination (vector) after remove, remove_if, erase:" << endl;
    DisplayContents(numsInVec);

    return 0;
}

// Source (list) contains:
// 2017 0 -1 42 10101 25 | Number of elements: 6
// Destination (vector) after copy and copy_if:
// 2017 0 -1 42 10101 25 2017 -1 10101 25 0 0 | Number of elements: 12
// Destination (vector) after remove, remove_if, erase:
// 42 | Number of elements: 1
