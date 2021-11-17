#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

template<typename T1, typename T2>
void DisplayUnorderedMap(unordered_map<T1, T2>& cont)
{
    cout << "Unordered Map contains: " << endl;

    for (auto element = cont.cbegin();
            element != cont.cend();
            ++element)
    {
        cout << element->first << " -> " << element->second << endl;
    }

    cout << "Number of pairs, size(): " << cont.size() << endl;
    cout << "Bucket count = " << cont.bucket_count() << endl;
    cout << "Current load factor: " << cont.load_factor() << endl;
    cout << "Max load factor = " << cont.max_load_factor() << endl;
}

int main()
{
    unordered_map<int, string> umapIntToStr;
    umapIntToStr.insert(make_pair(1, "One"));
    umapIntToStr.insert(make_pair(45, "Forty Five"));
    umapIntToStr.insert(make_pair(1001, "Thousand One"));
    umapIntToStr.insert(make_pair(-2, "Minus Two"));
    umapIntToStr.insert(make_pair(-1000, "Minus One Thousand"));
    umapIntToStr.insert(make_pair(100, "One Hundred"));
    umapIntToStr.insert(make_pair(12, "Twelve"));
    umapIntToStr.insert(make_pair(-100, "Minus One Hundred"));

    DisplayUnorderedMap<int, string>(umapIntToStr);

    cout << "Inserting one more element" << endl;
    umapIntToStr.insert(make_pair(300, "Three Hundred"));
    DisplayUnorderedMap<int, string>(umapIntToStr);

    cout << "Enter key to find for: ";
    int Key = 0;
    cin >> Key;

    auto element = umapIntToStr.find(Key);

    if (element != umapIntToStr.cend())
        cout << "Found! Key pairs with value " << element->second << endl;
    else
        cout << "Key has no corresponding pair value!" << endl;

    return 0;
}

// Unordered Map contains:
// -100 -> Minus One Hundred
// 12 -> Twelve
// 100 -> One Hundred
// -1000 -> Minus One Thousand
// 1001 -> Thousand One
// 45 -> Forty Five
// -2 -> Minus Two
// 1 -> One
// Number of pairs, size(): 8
// Bucket count = 13
// Current load factor: 0.615385
// Max load factor = 1
// Inserting one more element
// Unordered Map contains:
// -100 -> Minus One Hundred
// 12 -> Twelve
// 100 -> One Hundred
// -1000 -> Minus One Thousand
// 1001 -> Thousand One
// 45 -> Forty Five
// 300 -> Three Hundred
// -2 -> Minus Two
// 1 -> One
// Number of pairs, size(): 9
// Bucket count = 13
// Current load factor: 0.692308
// Max load factor = 1
// Enter key to find for: 100
// Found! Key pairs with value One Hundred
