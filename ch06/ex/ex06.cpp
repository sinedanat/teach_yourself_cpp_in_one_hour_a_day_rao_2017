// BUG BUSTERS: What is wrong with this code?
// int loopCounter = 0;
// while(loopCounter <5);
// {
// cout << loopCounter << " ";
// loopCounter++;
// }

// The problem is ';' after test condition in while-loop.

#include <iostream>

int main()
{
    int loopCounter = 0;

    while (loopCounter < 5)
    {
        std::cout << loopCounter << " ";
        loopCounter++;
    }

    return 0;
}

// 0 1 2 3 4
