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

    cout << endl;
}

int main()
{
    vector<int> vecNumbers{25, -5, 122, 2011, -10001};

    DisplayContents(vecNumbers);

    sort(vecNumbers.begin(), vecNumbers.end());

    DisplayContents(vecNumbers);

    sort(vecNumbers.begin(), vecNumbers.end(),
         [](int Num1, int Num2)
    {
        return (Num1 > Num2);
    });

    DisplayContents(vecNumbers);

    cout << "Number do you wish to add to all elements:";
    int numcontainer = 0;
    cin >> numcontainer;

    for_each(vecNumbers.begin(),
             vecNumbers.end(),
             [numcontainer](int& element)
    {
        element += numcontainer;
    });

    DisplayContents(vecNumbers);

    return 0;
}

// 25 -5 122 2011 -10001
// -10001 -5 25 122 2011
// 2011 122 25 -5 -10001
// Number do you wish to add to all elements:10
// 2021 132 35 5 -9991
