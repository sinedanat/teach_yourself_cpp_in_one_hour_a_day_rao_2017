// What is the output of the above program when corrected?

#include <iostream>

int main()
{
    int* pointToAnInt = new int;
    int* pNumberCopy = pointToAnInt;

    *pNumberCopy = 30;
    std::cout << *pointToAnInt << std::endl;

    delete pNumberCopy;

    return 0;
}

// 30
