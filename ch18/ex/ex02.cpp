// Using a short program, demonstrate that an iterator
// pointing to an element in a list continues to remain valid
// even after another element has been inserted before it,
// thus changing the relative position of the former element.

#include <iostream>
#include <list>

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

    auto pElem = listInts.insert(listInts.begin(), 4444);
    listInts.insert(listInts.begin(), 1111);

    std::cout << "*pElem: " << *pElem << std::endl;

    std::cout << "List contains: " << std::endl;
    DisplayContents(listInts);

    return 0;
}

// *pElem: 4444
// List contains: 
// 1111 4444 1 11 111 
