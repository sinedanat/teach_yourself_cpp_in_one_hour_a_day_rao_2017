// Write a template version of the macro in Exercise 1.

#include <iostream>

template<typename T>
T Multi(T x, T y)
{
    return (x * y);
}

int main()
{
    std::cout << "2 * 5 = " << Multi(2, 5) << std::endl;
    std::cout << "2.2 * 4.4 = " << Multi(2.2, 4.4) << std::endl;

    return 0;
}

// 2 * 5 = 10
// 2.2 * 4.4 = 9.68
