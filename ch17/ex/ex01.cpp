// Write an interactive program that accepts integer input
// from the user and saves it in the vector.
// The user should be able to query a value
// stored in the vector at any time, given an index.

#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter an int: ";
    int num = 0;
    std::cin >> num;

    std::vector<int> nums;
    nums.push_back(num);

    std::cout << "You entered: " << nums[0] << std::endl;

    return 0;
}

// Enter an int: 123
// You entered: 123
