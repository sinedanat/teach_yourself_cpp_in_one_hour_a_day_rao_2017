// What is the display when these statements are executed:
// 0: int number = 3;
// 1: int* pNum1 = &number;
// 2: *pNum1 = 20;
// 3: int* pNum2 = pNum1;
// 4: number *= 2;
// 5: cout << *pNum2;

#include <iostream>

int main()
{
    int number = 3;
    int* pNum1 = &number;
    *pNum1 = 20;
    int* pNum2 = pNum1;
    number *= 2;
    std::cout << *pNum2 << std::endl;

    return 0;
}

// 40
