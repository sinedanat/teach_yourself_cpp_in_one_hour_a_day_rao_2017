#include <string>
#include <iostream>

using namespace std;

int main()
{
    const string str1 = "I";
    const string str2 = "Love";
    const string str3 = "STL";
    const string str4 = "String.";

    string strResult = str1 + " " + str2 + " " + str3 + " " + str4;

    cout << "The sentence reads:" << endl;
    cout << strResult << endl;

    return 0;
}

// The sentence reads:
// I Love STL String.
