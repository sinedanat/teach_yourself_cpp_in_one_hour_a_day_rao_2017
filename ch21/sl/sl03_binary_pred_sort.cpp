#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename elementType>
class SortAscending
{
public:
    bool operator()(const elementType& num1,
                    const elementType& num2) const
    {
        return (num1 < num2);
    }
};

int main()
{
    vector<int> numsInVec;

    // Insert sample numbers: 100, 90... 20, 10.
    for (int sample = 10; sample > 0; --sample)
        numsInVec.push_back(sample * 10);

    sort(numsInVec.begin(), numsInVec.end(), SortAscending<int>());

    for (size_t index = 0; index < numsInVec.size(); ++index)
        cout << numsInVec[index] << ' ';

    cout << endl;

    return 0;
}

// 10 20 30 40 50 60 70 80 90 100 
