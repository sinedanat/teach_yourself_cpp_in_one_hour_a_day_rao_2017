#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// A structure as a unary predicate.
template<typename numberType>
struct IsMultiple
{
    numberType Divisor;

    IsMultiple(const numberType& divisor)
    {
        Divisor = divisor;
    }

    bool operator()(const numberType& element) const
    {
        // Check if the dividend is a multiple of the divisor.
        return ((element % Divisor) == 0);
    }
};

int main()
{
    vector<int> numsInVec{25, 26, 27, 28, 29, 30, 31};
    cout << "The vector contains: 25, 26, 27, 28, 29, 30, 31" << endl;

    cout << "Enter divisor (> 0): ";
    int divisor = 2;
    cin >> divisor;

    // Find the first element that is a multiple of divisor in the collection.
    auto element = find_if(numsInVec.cbegin(),
                           numsInVec.cend(),
                           IsMultiple<int>(divisor));

    if (element != numsInVec.end())
    {
        cout << "First element in vector divisible by " << divisor;
        cout << ": " << *element << endl;
    }

    return 0;
}

// The vector contains: 25, 26, 27, 28, 29, 30, 31
// Enter divisor (> 0): 4
// First element in vector divisible by 4: 28

// The vector contains: 25, 26, 27, 28, 29, 30, 31
// Enter divisor (> 0): 5
// First element in vector divisible by 5: 25
