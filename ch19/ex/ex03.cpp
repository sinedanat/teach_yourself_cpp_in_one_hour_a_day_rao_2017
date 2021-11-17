// Demonstrate via a simple program
// that a set cannot accept duplicate entries,
// whereas a multiset can.

#include <iostream>
#include <set>

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
    {
        std::cout << *element << ' ';
    }

    std::cout << std::endl;
}

int main()
{
    std::set<int> setInts{1, 2, 2, 3, 3, 3};
    std::cout << "Contents of the set: " << std::endl;
    DisplayContents(setInts);

    std::multiset<int> msetInts{1, 2, 2, 3, 3, 3};
    std::cout << "Contents of the multiset: " << std::endl;
    DisplayContents(msetInts);

    return 0;
}

// Contents of the set:
// 1 2 3
// Contents of the multiset:
// 1 2 2 3 3 3
