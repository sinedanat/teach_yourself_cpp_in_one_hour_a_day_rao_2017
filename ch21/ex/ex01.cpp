// Write a unary function that can be used with std::for_each()
// to display the double of the input parameter.

#include <iostream>
#include <algorithm>
#include <vector>

// Unary function.
template<typename T>
void DisplayDouble(const T& elem)
{
    std::cout << (2 * elem) << " ";
}

int main()
{
    std::vector<int> nums{1, 2, 3, 4};

    std::cout << "Display the double of each element in vector:" << std::endl;
    std::for_each(nums.begin(), nums.end(), DisplayDouble<int>);

    std::cout << std::endl;

    return 0;
}

// Display the double of each element in vector:
// 2 4 6 8
