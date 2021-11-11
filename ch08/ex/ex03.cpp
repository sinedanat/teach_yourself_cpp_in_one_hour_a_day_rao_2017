// How would you change the declaration of pNum1 in Exercise 1
// at Line 1 so as to make the assignment at Line 3 invalid?
// (Hint: It has something to do with ensuring
// that pNum1 cannot change the data pointed to.)

#include <iostream>

int main()
{
    int number = 3;
    const int* pNum1 = &number;
    *pNum1 = 20;
    int* pNum2 = pNum1;
    number *= 2;
    std::cout << *pNum2 << std::endl;

    return 0;
}

// Error - Read-only variable is not assignable
// Error - Cannot initialize a variable of type 'int *'
// with an lvalue of type 'const int *'
