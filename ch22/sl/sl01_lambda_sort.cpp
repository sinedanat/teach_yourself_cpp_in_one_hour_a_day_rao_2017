#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for (auto iElement = Input.cbegin();
            iElement != Input.cend();
            ++iElement)
    {
        cout << *iElement << ' ';
    }

    cout << endl;
}

int main()
{
    vector<int> vecNumbers;
    vecNumbers.push_back(25);
    vecNumbers.push_back(-5);
    vecNumbers.push_back(122);
    vecNumbers.push_back(2011);
    vecNumbers.push_back(-10001);
    
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
    int NumInput = 0;
    cin >> NumInput;

    for_each(vecNumbers.begin(), vecNumbers.end(),
             [NumInput](int& element)
    {
        element += NumInput;
    });

    DisplayContents(vecNumbers);

    return 0;
}

// 25 -5 122 2011 -10001
// -10001 -5 25 122 2011
// 2011 122 25 -5 -10001
// Number do you wish to add to all elements:10
// 2021 132 35 5 -9991
