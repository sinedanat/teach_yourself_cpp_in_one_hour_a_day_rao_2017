// Extend the program from Exercise 1
// to be able to tell the user whether a value
// he queries for already exists in the vector.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter an int: ";
    int num = 0;
    std::cin >> num;

    std::vector<int> nums{1, 11, 111, 1111};

    auto res = std::find(nums.cbegin(), nums.cend(), num);

    if (res != nums.cend())
    {
        std::cout << num << " is already in vector." << std::endl;
    }
    else
    {
        std::cout << num << " is not in vector yet." << std::endl;
    }

    nums.push_back(num);

    std::cout << "You entered: " << nums[4] << std::endl;

    return 0;
}

// Enter an int: 11
// 11 is already in vector.
// You entered: 11

// Enter an int: 22
// 22 is not in vector yet.
// You entered: 22
