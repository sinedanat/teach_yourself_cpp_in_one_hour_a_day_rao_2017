#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Unary predicate.
bool IsEven(const int& num)
{
    return ((num % 2) == 0);
}

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
    vector<int> numsInVec{2017, 0, -1, 42, 10101, 25};

    cout << "The initial contents:" << endl;
    DisplayContents(numsInVec);

    vector<int> vecCopy(numsInVec);

    cout << "The effect of using partition():" << endl;
    partition(numsInVec.begin(), numsInVec.end(), IsEven);
    DisplayContents(numsInVec);

    cout << "The effect of using stable_partition():" << endl;
    stable_partition(vecCopy.begin(), vecCopy.end(), IsEven);
    DisplayContents(vecCopy);

    return 0;
}

// The initial contents:
// 2017 0 -1 42 10101 25 | Number of elements: 6
// The effect of using partition():
// 42 0 -1 2017 10101 25 | Number of elements: 6
// The effect of using stable_partition():
// 0 42 2017 -1 10101 25 | Number of elements: 6
