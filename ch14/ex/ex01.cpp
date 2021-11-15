// Write a macro that multiplies two numbers.

#include <iostream>

#define MULTI(x, y) ((x) * (y))

int main()
{
    std::cout << "2 * 5 = " << MULTI(2, 5) << std::endl;
    std::cout << "2.2 * 4.4 = " << MULTI(2.2, 4.4) << std::endl;

    return 0;
}

// 2 * 5 = 10
// 2.2 * 4.4 = 9.68
