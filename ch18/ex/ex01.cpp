// Write a short program that accepts numbers
// from the user and inserts them at the top of the list.

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
    std::list<int> listInts;

    char ch = 'y';

    do
    {
        std::cout << "Enter an int: ";
        int num = 0;
        std::cin >> num;

        listInts.push_back(num);

        std::cout << "Would you like to enter one more jar (y/n): ";
        std::cin >> ch;
    }
    while (ch != 'n');

    std::cout << "You entered: " << std::endl;
    DisplayContents(listInts);

    return 0;
}

// Enter an int: 1
// Would you like to enter one more jar (y/n): y
// Enter an int: 11
// Would you like to enter one more jar (y/n): y
// Enter an int: 111
// Would you like to enter one more jar (y/n): y
// Enter an int: 1111
// Would you like to enter one more jar (y/n): n
// You entered:
// 1 11 111 1111
