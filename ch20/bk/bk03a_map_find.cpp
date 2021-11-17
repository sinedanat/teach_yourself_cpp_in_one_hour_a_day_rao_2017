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
    map<int, string> mapIntToStr;

    mapIntToStr.insert(make_pair(3, "Three"));
    mapIntToStr.insert(make_pair(45, "Forty Five"));
    mapIntToStr.insert(make_pair(-1, "Minus One"));
    mapIntToStr.insert(make_pair(1000, "Thousand"));

    cout << "The multimap contains " << mapIntToStr.size();
    cout << " key-value pairs. They are: " << endl;

    // Print the contents of the map to the screen.
    DisplayContents(mapIntToStr);

    cout << "Enter the key you wish to find: ";
    int key = 0;
    cin >> key;

    auto pairFound = mapIntToStr.find(key);

    if (pairFound != mapIntToStr.cend())
    {
        cout << "Key " << pairFound->first << " points to Value: ";
        cout << pairFound->second << endl;
    }
    else
    {
        cout << "Sorry, pair with key " << key << " not in map" << endl;
    }

    return 0;
}

// The multimap contains 4 key-value pairs. They are:
// -1 -> Minus One
// 3 -> Three
// 45 -> Forty Five
// 1000 -> Thousand
//
// Enter the key you wish to find: 1000
// Key 1000 points to Value: Thousand

// The multimap contains 4 key-value pairs. They are:
// -1 -> Minus One
// 3 -> Three
// 45 -> Forty Five
// 1000 -> Thousand
// 
// Enter the key you wish to find: 77
// Sorry, pair with key 77 not in map
