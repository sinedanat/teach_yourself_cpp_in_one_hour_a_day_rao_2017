// Demonstrate via a simple program
// that a set cannot accept duplicate entries,
// whereas a multiset can.

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
    set<int> setInts{1, 2, 2, 3, 3, 3};
    cout << "Contents of the set: " << endl;
    DisplayContents(setInts);

    multiset<int> msetInts{1, 2, 2, 3, 3, 3};
    cout << "Contents of the multiset: " << endl;
    DisplayContents(msetInts);

    return 0;
}

// Contents of the set:
// 1 2 3
// Contents of the multiset:
// 1 2 2 3 3 3
