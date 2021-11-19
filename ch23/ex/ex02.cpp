// Demonstrate how STL algorithms such as copy() use iterators
// to do their functions without needing to know
// the nature of the destination collections by copying
// between two sequences held in two dissimilar containers.

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
    {
        std::cout << *element << " ";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> vectorInts{1, 11, 111, 1111};

    std::list<int> listInts;
    listInts.resize(vectorInts.size());

    std::copy(vectorInts.cbegin(), vectorInts.cend(), listInts.begin());

    std::cout << "vectorInts contains:" << std::endl;
    DisplayContents(vectorInts);

    std::cout << "listInts contains:" << std::endl;
    DisplayContents(listInts);

    return 0;
}

// vectorInts contains:
// 1 11 111 1111
// listInts contains:
// 1 11 111 1111
