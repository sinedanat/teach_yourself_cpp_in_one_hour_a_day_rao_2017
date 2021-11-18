// Extend this predicate to indicate the number of times it was used.

#include <iostream>
#include <algorithm>
#include <vector>

// A struct to use as unary function object.
template<typename T>
struct DisplayDouble
{
    int count;

    DisplayDouble() : count(0) {}

    void operator()(const T& elem)
    {
        ++count;
        std::cout << (2 * elem) << " ";
    }
};

int main()
{
    std::vector<int> nums{1, 2, 3, 4};

    DisplayDouble<int> result;

    std::cout << "Display the double of each element in vector:" << std::endl;
    result = std::for_each(nums.begin(), nums.end(), DisplayDouble<int>());

    std::cout << std::endl;

    std::cout << "operator() was used: " << result.count << std::endl;

    return 0;
}

// Display the double of each element in vector:
// 2 4 6 8 
// operator() was used: 4
