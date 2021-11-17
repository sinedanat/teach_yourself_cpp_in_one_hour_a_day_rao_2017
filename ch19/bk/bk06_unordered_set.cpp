#include <iostream>
#include <unordered_set>

using namespace std;

template<typename T>
void DisplayContents(const T& cont)
{
    cout << "Unordered set contains: ";

    for (auto element = cont.cbegin();
            element != cont.cend();
            ++ element)
        cout << *element << ' ';

    cout << endl;

    cout << "Number of elements, size() = " << cont.size() << endl;
    cout << "Bucket count = " << cont.bucket_count() << endl;
    cout << "Max load factor = " << cont.max_load_factor() << endl;
    cout << "Load factor: " << cont.load_factor() << endl << endl;
}

int main()
{
    unordered_set<int> usetInt{1, -3, 2017, 300, -1, 989, -300, 9};
    DisplayContents(usetInt);

    usetInt.insert(999);
    DisplayContents(usetInt);

    cout << "Enter int you want to check for existence in set: ";
    int input = 0;
    cin >> input;
    auto elementFound = usetInt.find(input);

    if (elementFound != usetInt.cend())
        cout << *elementFound << " found in set" << endl;
    else
        cout << input << " not available in set" << endl;

    return 0;
}

// Unordered set contains: 9 -300 -1 2017 -3 989 300 1
// Number of elements, size() = 8
// Bucket count = 13
// Max load factor = 1
// Load factor: 0.615385
// 
// Unordered set contains: 999 9 -300 -1 2017 -3 989 300 1
// Number of elements, size() = 9
// Bucket count = 13
// Max load factor = 1
// Load factor: 0.692308
// 
// Enter int you want to check for existence in set: 989
// 989 found in set
