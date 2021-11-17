#include <iostream>
#include <set>

using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for (auto element = Input.cbegin();
            element != Input.cend();
            ++ element)
        cout << *element << ' ';

    cout << endl;
}

typedef multiset<int> MSETINT;

int main()
{
    MSETINT msetInts{43, 78, 78, -1, 124};

    cout << "multiset contains " << msetInts.size() << " elements: ";
    DisplayContents(msetInts);

    cout << "Enter a number to erase from the set: ";
    int input = 0;
    cin >> input;

    cout << "Erasing " << msetInts.count(input);
    cout << " instances of value " << input << endl;

    msetInts.erase(input);

    cout << "multiset now contains " << msetInts.size() << " elements: ";
    DisplayContents(msetInts);

    return 0;
}

// multiset contains 5 elements: -1 43 78 78 124
// Enter a number to erase from the set: 78
// Erasing 2 instances of value 78
// multiset now contains 3 elements: -1 43 124
// 
// multiset contains 5 elements: -1 43 78 78 124
// Enter a number to erase from the set: 124
// Erasing 1 instances of value 124
// multiset now contains 4 elements: -1 43 78 78
