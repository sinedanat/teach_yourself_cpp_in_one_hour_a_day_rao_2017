// Write a lambda function that, when used in for_each(),
// adds a user-specified value to that in a container such as vector.

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void DisplayContents(const T& cont)
{
    for (auto element = cont.cbegin();
            element != cont.cend();
            ++element)
    {
        std::cout << *element << " ";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> nums{1, 11, 111, 1111};

    std::cout << "Display elements in vector before add a value:" << std::endl;
    DisplayContents(nums);

    std::cout << "Enter an int: ";
    int num = 0;
    std::cin >> num;

    std::for_each(nums.begin(),
                  nums.end(),
                  [num](int& element)
    {
        element += num;
    });

    std::cout << "Display elements in vector after add a value:" << std::endl;
    DisplayContents(nums);

    return 0;
}

// Display elements in vector before add a value:
// 1 11 111 1111
// Enter an int: 10
// Display elements in vector after add a value:
// 11 21 121 1121
