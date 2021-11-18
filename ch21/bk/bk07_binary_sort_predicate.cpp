#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class CompareStringNoCase
{
public:
    bool operator()(const string& str1, const string& str2) const
    {
        string str1LowerCase;

        // Assign space.
        str1LowerCase.resize(str1.size());

        // Convert every character to the lower case.
        transform(str1.begin(), str1.end(), str1LowerCase.begin(), ::tolower);

        string str2LowerCase;

        // Assign space.
        str2LowerCase.resize(str2.size());

        // Convert every character to the lower case.
        transform(str2.begin(), str2.end(), str2LowerCase.begin(), ::tolower);

        return (str1LowerCase < str2LowerCase);
    }
};

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
    // Define a vector of string to hold names.
    vector<string> names;

    // Insert some sample names in to the vector.
    names.push_back("jim");
    names.push_back("Jack");
    names.push_back("Sam");
    names.push_back("Anna");

    cout << "The names in vector in order of insertion: " << endl;
    DisplayContents(names);

    cout << "Names after sorting using default std::less<>: " << endl;
    sort(names.begin(), names.end());
    DisplayContents(names);

    cout << "Sorting using predicate that ignores case:" << endl;
    sort(names.begin(), names.end(), CompareStringNoCase());
    DisplayContents(names);

    return 0;
}

// The names in vector in order of insertion: 
// jim
// Jack
// Sam
// Anna
// 
// Names after sorting using default std::less<>: 
// Anna
// Jack
// Sam
// jim
// 
// Sorting using predicate that ignores case:
// Anna
// Jack
// jim
// Sam
