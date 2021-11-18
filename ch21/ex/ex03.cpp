// Write a binary predicate that helps sort in ascending order.

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
struct AscendingOrder
{
    bool operator()(const T& elem1, const T& elem2) const
    {
        return (elem1 < elem2);
    }
};

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
    std::vector<int> nums{1, 4, 3, 2};

    std::cout << "Display elements in vector before sort:" << std::endl;
    DisplayContents(nums);

    std::sort(nums.begin(), nums.end(), AscendingOrder<int>());

    std::cout << "Display elements in vector after sort:" << std::endl;
    DisplayContents(nums);

    return 0;
}

// Display elements in vector before sort:
// 1 4 3 2 
// Display elements in vector after sort:
// 1 2 3 4 
