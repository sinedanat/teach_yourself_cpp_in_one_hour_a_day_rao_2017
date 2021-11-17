#include <iostream>
#include <set>

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

    cout << endl;
}

int main()
{
    set<int> setInts{43, 78, -1, 124};

    // Display contents of the set to the screen.
    DisplayContents(setInts);

    // Try find an element.
    auto elementFound = setInts.find(-1);

    // Check if found.
    if (elementFound != setInts.cend())
        cout << "Element " << *elementFound << " found!" << endl;
    else
        cout << "Element not found in set!" << endl;

    // Find another.
    auto anotherFind = setInts.find(12345);

    // Check if found.
    if (anotherFind != setInts.cend())
        cout << "Element " << *anotherFind << " found!" << endl;
    else
        cout << "Element 12345 not found in set!" << endl;

    return 0;
}

// -1 43 78 124
// Element -1 found!
// Element 12345 not found in set!
