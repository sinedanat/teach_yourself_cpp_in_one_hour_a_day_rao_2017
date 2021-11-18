#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename elementType>
struct DisplayElementKeepCount
{
    int count;

    // Constructor.
    DisplayElementKeepCount() : count(0) {}

    void operator()(const elementType& element)
    {
        ++count;
        cout << element << ' ';
    }
};

int main()
{
    vector<int> numsInVec{22, 2017, -1, 999, 43, 901};
    cout << "Displaying the vector of integers: " << endl;

    DisplayElementKeepCount<int> result;
    
    result = for_each(numsInVec.begin(),
                      numsInVec.end(),
                      DisplayElementKeepCount<int>());

    cout << endl;
    cout << "Functor invoked " << result.count << " times" << endl;

    return 0;
}

// Displaying the vector of integers: 
// 22 2017 -1 999 43 901 
// Functor invoked 6 times
