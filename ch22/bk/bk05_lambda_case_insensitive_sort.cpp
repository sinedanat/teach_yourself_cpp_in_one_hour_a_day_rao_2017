#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

template<typename T>
void DisplayContents(const T& input)
{
    for (auto element = input.cbegin();
            element != input.cend();
            ++element)
    {
        cout << *element << endl;
    }

    cout << endl;
}

int main()
{
    vector<string> namesInVec{"jim", "Jack", "Sam", "Anna"};

    cout << "The names in vector in order of insertion:" << endl;
    DisplayContents(namesInVec);

    cout << "Order after case sensitive sort:" << endl;
    sort(namesInVec.begin(), namesInVec.end());
    DisplayContents(namesInVec);

    cout << "Order after sort ignoring case:" << endl;
    sort(namesInVec.begin(), namesInVec.end(),
         [](const string& str1, const string& str2) -> bool // Lambda.
    {
        string str1LC;

        // Assign space.
        str1LC.resize(str1.size());

        // Convert every character to the lower case.
        transform(str1.begin(), str1.end(), str1LC.begin(), ::tolower);

        string str2LC;

        // Assign space.
        str2LC.resize(str2.size());

        // Convert every character to the lower case.
        transform(str2.begin(), str2.end(), str2LC.begin(), ::tolower);

        return (str1LC < str2LC);
    }  // End of lambda.
        );  // End of sort.

    DisplayContents(namesInVec);

    return 0;
}

// The names in vector in order of insertion:
// jim
// Jack
// Sam
// Anna
//
// Order after case sensitive sort:
// Anna
// Jack
// Sam
// jim
//
// Order after sort ignoring case:
// Anna
// Jack
// jim
// Sam
