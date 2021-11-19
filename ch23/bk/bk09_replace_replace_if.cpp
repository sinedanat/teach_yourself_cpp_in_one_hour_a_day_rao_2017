#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
    {
        cout << *element << ' ';
    }

    cout << "| Number of elements: " << container.size() << endl;
}

int main()
{
    vector<int> numsInVec(6);

    // Fill first 3 elements with value 8.
    fill(numsInVec.begin(), numsInVec.begin() + 3, 8);

    // Fill last 3 elements with value 5.
    fill_n(numsInVec.begin() + 3, 3, 5);

    // Shuffle the container.
    random_shuffle(numsInVec.begin(), numsInVec.end());

    cout << "The initial contents of vector: " << endl;
    DisplayContents(numsInVec);

    cout << endl << "'std::replace' value 5 by 8" << endl;

    replace(numsInVec.begin(), numsInVec.end(), 5, 8);

    cout << "'std::replace_if' even values by -1" << endl;

    replace_if(numsInVec.begin(),
               numsInVec.end(),
               [](const int& element)
    {
        return ((element % 2) == 0);
    }, -1);

    cout << endl << "Vector after replacements:" << endl;
    DisplayContents(numsInVec);

    return 0;
}

// The initial contents of vector: 
// 5 8 5 8 8 5 | Number of elements: 6
// 
// 'std::replace' value 5 by 8
// 'std::replace_if' even values by -1
// 
// Vector after replacements:
// -1 -1 -1 -1 -1 -1 | Number of elements: 6
