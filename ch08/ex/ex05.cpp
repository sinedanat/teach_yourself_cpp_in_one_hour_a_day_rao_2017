// BUG BUSTERS: What is wrong with this code?
// #include <iostream>
// using namespace std;
// int main()
// {
// int pointToAnInt = new int;
// int* pNumberCopy = pointToAnInt;
// *pNumberCopy = 30;
// cout << *pointToAnInt;
// delete pNumberCopy;
// delete pointToAnInt;
// return 0;
// }

// Problem 1 with this line as pointToAnInt should be a pointer to int.
// Operator new allocate memory and returns the address of allocated memory.
// int pointToAnInt = new int;

// Proble 2 with this line as the second delete.
// 2 pointers points to the same allocated memory.
// delete pointToAnInt;

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
