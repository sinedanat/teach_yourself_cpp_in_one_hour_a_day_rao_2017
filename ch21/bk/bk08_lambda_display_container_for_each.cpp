// This has been moved to Chapter 22, Listing 22.1.

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> vecIntegers;

    for (int nCount = 0; nCount < 10; ++ nCount)
        vecIntegers.push_back(nCount);

    list<char> listChars;

    for (char nChar = 'a'; nChar < 'k'; ++nChar)
        listChars.push_back(nChar);

    cout << "Displaying the vector of integers: " << endl;

    // Display the array of integers.
    for_each(vecIntegers.cbegin(),  // Start of range.
             vecIntegers.cend(),    // End of range.
             [](int Num)
    {
        cout << Num << ' ';
    });  // Unary function object.

    cout << endl;

    cout << "Displaying the list of characters: " << endl;

    // Display the list of characters.
    for_each(listChars.cbegin(),    // Start of range.
             listChars.cend(),      // End of range.
             [](int Num)
    {
        cout << Num << ' ';
    }); // Unary function object.

    cout << endl;

    return 0;
}

// Displaying the vector of integers: 
// 0 1 2 3 4 5 6 7 8 9 
// Displaying the list of characters: 
// 97 98 99 100 101 102 103 104 105 106 
