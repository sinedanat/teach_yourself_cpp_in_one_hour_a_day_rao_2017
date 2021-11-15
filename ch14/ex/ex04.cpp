// BUG BUSTERS: How would you improve the following macro
// that computes the quarter of an input value?
// #define QUARTER(x) (x / 4)

// Add parens to x.

#include <iostream>

#define QUARTER(x) ((x) / 4)

int main()
{
    std::cout << "8 / 4 = " << QUARTER(8) << std::endl;
    std::cout << "(8 + 4) / 4 = " << QUARTER(8 + 4) << std::endl;

    return 0;
}

// 8 / 4 = 2
// (8 + 4) / 4 = 3
