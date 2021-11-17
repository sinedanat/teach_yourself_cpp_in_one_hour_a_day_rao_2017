// Write a program that sorts and reverses a list of strings.

#include <iostream>
#include <list>
#include <string>

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
    std::list<std::string> listStrings{"hi", "bye", "wow", "chao"};

    std::cout << "List contains: " << std::endl;
    DisplayContents(listStrings);
    std::cout << std::endl;

    listStrings.sort();
    std::cout << "List contains after sort: " << std::endl;
    DisplayContents(listStrings);
    std::cout << std::endl;

    listStrings.reverse();
    std::cout << "List contains after reverse: " << std::endl;
    DisplayContents(listStrings);

    return 0;
}

// List contains: 
// hi bye wow chao 

// List contains after sort: 
// bye chao hi wow 

// List contains after reverse: 
// wow hi chao bye 
