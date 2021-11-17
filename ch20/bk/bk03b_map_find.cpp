#include <iostream>
#include <map>
#include <string>

using namespace std;

template<typename T>
void DisplayContents(const T& cont)
{
    for (auto element = cont.cbegin();
            element != cont.cend();
            ++element)
    {
        cout << element->first << " -> " << element->second << endl;
    }

    cout << endl;
}

int main()
{
    multimap<int, string> mmapIntToStr;

    mmapIntToStr.insert(make_pair(3, "Three"));
    mmapIntToStr.insert(make_pair(45, "Forty Five"));
    mmapIntToStr.insert(make_pair(7, "Seven"));
    mmapIntToStr.insert(make_pair(-1, "Minus One"));
    mmapIntToStr.insert(make_pair(1000, "Thousand"));
    // Duplicate.
    mmapIntToStr.insert(make_pair(7, "Seven Again"));

    cout << "The multimap contains " << mmapIntToStr.size();
    cout << " key-value pairs. They are: " << endl;

    // Print the contents of the map to the screen.
    DisplayContents(mmapIntToStr);

    cout << "Enter the key you wish to find: ";
    int key = 0;
    cin >> key;

    auto pairFound = mmapIntToStr.find(key);

    // Check if find() succeeded.
    if (pairFound != mmapIntToStr.cend())
    {
        // A multimap can contains multiple pairs with the same key.
        // Find the number of pairs that have the same supplied key.
        size_t numPairsInMap = mmapIntToStr.count(key);

        // Stay within bounds.
        for (size_t counter = 0;
                counter < numPairsInMap;
                ++counter)
        {
            cout << "Key: " << pairFound->first;
            cout << ", Value [" << counter << "] = ";
            cout << pairFound->second << endl;

            // Increment the iterator to access
            // those consequently placed values.
            ++pairFound;
        }
    }
    else
    {
        cout << "Element not found in the multimap";
    }

    return 0;
}

// The multimap contains 6 key-value pairs. They are:
// -1 -> Minus One
// 3 -> Three
// 7 -> Seven
// 7 -> Seven Again
// 45 -> Forty Five
// 1000 -> Thousand
//
// Enter the key you wish to find: 7
// Key: 7, Value [0] = Seven
// Key: 7, Value [1] = Seven Again

// The multimap contains 6 key-value pairs. They are:
// -1 -> Minus One
// 3 -> Three
// 7 -> Seven
// 7 -> Seven Again
// 45 -> Forty Five
// 1000 -> Thousand
//
// Enter the key you wish to find: 22
// Element not found in the multimap
