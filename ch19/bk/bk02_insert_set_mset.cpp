#include <iostream>
#include <set>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
        cout << *element << ' ';

    cout << endl;
}

int main()
{
    set<int> setInts{202, 151, -999, -1};
    // Duplicate.
    setInts.insert(-1);
    cout << "Contents of the set: " << endl;
    DisplayContents(setInts);

    multiset<int> msetInts;
    msetInts.insert(setInts.cbegin(), setInts.cend());
    // Duplicate.
    msetInts.insert(-1);

    cout << "Contents of the multiset: " << endl;
    DisplayContents(msetInts);

    cout << "Number of instances of '-1' in the multiset are: ";
    cout << msetInts.count(-1) << endl;

    return 0;
}

// Contents of the set: 
// -999 -1 151 202 
// Contents of the multiset: 
// -999 -1 -1 151 202 
// Number of instances of '-1' in the multiset are: '2'
