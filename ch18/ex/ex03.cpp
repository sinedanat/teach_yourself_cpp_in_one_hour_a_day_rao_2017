// Write a program that inserts the contents of a vector
// into an STL list using the list's insert() function.

#include <iostream>
#include <list>
#include <vector>

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
    std::list<int> listInts{1, 11, 111};
    std::vector<int> vectorInts{2, 22, 222};

    listInts.insert(listInts.begin(), vectorInts.cbegin(), vectorInts.cend());

    std::cout << "List contains: " << std::endl;
    DisplayContents(listInts);

    return 0;
}

// List contains: 
// 2 22 222 1 11 111 
