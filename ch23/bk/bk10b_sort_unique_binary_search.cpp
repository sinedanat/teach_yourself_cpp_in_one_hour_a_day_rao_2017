#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
    {
        cout << *element << endl;
    }

    cout << endl;
}

int main()
{
    vector<string> vecNames;

    vecNames.push_back("John Doe");
    vecNames.push_back("Jack Nicholson");
    vecNames.push_back("Sean Penn");
    vecNames.push_back("Anna Hoover");

    // Insert a duplicate into the vector.
    vecNames.push_back("Jack Nicholson");

    cout << "The initial contents of the vector are:" << endl;
    DisplayContents(vecNames);

    cout << "The sorted vector contains names in the order:" << endl;
    sort(vecNames.begin(), vecNames.end());
    DisplayContents(vecNames);

    cout << "Searching for \"John Doe\" using 'binary_search':" << endl;
    bool bElementFound = binary_search(vecNames.cbegin(),
                                       vecNames.cend(),
                                       "John Doe");

    if (bElementFound)
        cout << "Result: \"John Doe\" was found in the vector!" << endl;
    else
        cout << "Element not found " << endl;

    cout << endl;

    // Erase adjacent duplicates.
    auto iNewEnd = unique(vecNames.begin(), vecNames.end());
    vecNames.erase(iNewEnd, vecNames.end());

    cout << "The contents of the vector after using 'unique':" << endl;
    DisplayContents(vecNames);

    return 0;
}

// The initial contents of the vector are:
// John Doe
// Jack Nicholson
// Sean Penn
// Anna Hoover
// Jack Nicholson
// 
// The sorted vector contains names in the order:
// Anna Hoover
// Jack Nicholson
// Jack Nicholson
// John Doe
// Sean Penn
// 
// Searching for "John Doe" using 'binary_search':
// Result: "John Doe" was found in the vector!
// 
// The contents of the vector after using 'unique':
// Anna Hoover
// Jack Nicholson
// John Doe
// Sean Penn
