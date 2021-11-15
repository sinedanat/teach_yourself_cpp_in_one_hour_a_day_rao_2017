// Implement a template function for swap that exchanges two variables.

#include <iostream>

template<typename T>
void Swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 2;
    int y = 4;

    std::cout << "Before: " << "x = " << x << " and y = " << y << std::endl;

    Swap(x, y);

    std::cout << "After: " << "x = " << x << " and y = " << y << std::endl;

    return 0;
}

// Before: x = 2 and y = 4
// After: x = 4 and y = 2
