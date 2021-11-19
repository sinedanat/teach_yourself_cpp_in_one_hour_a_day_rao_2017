#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <functional>

using namespace std;

int main()
{
    string str("THIS is a TEst string!");
    cout << "The sample string is: " << str << endl;

    string strLowerCaseCopy;
    strLowerCaseCopy.resize(str.size());

    transform(str.cbegin(),             // Start source range.
              str.cend(),               // End source range.
              strLowerCaseCopy.begin(), // Start destination range.
              ::tolower);               // Unary function.

    cout << "Result of 'transform' on the string with 'tolower':" << endl;
    cout << "\"" << strLowerCaseCopy << "\"" << endl << endl;

    // Two sample vectors of integers.
    vector<int> numsInVec1{2017, 0, -1, 42, 10101, 25};
    vector<int> numsInVec2(numsInVec1.size(), -1);

    // A destination range for holding the result of addition.
    deque<int> sumInDeque(numsInVec1.size());

    transform(numsInVec1.cbegin(),      // Start of source range 1.
              numsInVec1.cend(),        // End of source range 1.
              numsInVec2.cbegin(),      // Start of source range 2.
              sumInDeque.begin(),       // Start of destination range.
              plus<int>());             // Binary function.

    cout << "Result of 'transform' using binary function 'plus': " << endl;
    cout << "Index    Vector1 + Vector2 = Result (in Deque)" << endl;

    for (size_t index = 0; index < numsInVec1.size(); ++index)
    {
        cout << index << "     \t " << numsInVec1[index]    << "\t+    ";
        cout << numsInVec2[index]  << " \t  =     ";
        cout << sumInDeque[index] << endl;
    }

    return 0;
}

// The sample string is: THIS is a TEst string!
// Result of 'transform' on the string with 'tolower':
// "this is a test string!"
// 
// Result of 'transform' using binary function 'plus':
// Index    Vector1 + Vector2 = Result (in Deque)
// 0        2017   +    -1           =     2016
// 1        0      +    -1           =     -1
// 2        -1     +    -1           =     -2
// 3        42     +    -1           =     41
// 4        10101  +    -1           =     10100
// 5        25     +    -1           =     24
