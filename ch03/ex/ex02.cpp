// Write a program that demonstrates that the size of an unsigned integer
// and a normal integer are the same, and that both are smaller
// in size than a long integer.

#include <iostream>

int main()
{
    std::cout << "sizeof(unsigned int): "
              << sizeof(unsigned int) << std::endl;
    std::cout << "sizeof(signed int): "
              << sizeof(signed int) << std::endl;

    std::cout << "sizeof(unsigned long): "
              << sizeof(unsigned long) << std::endl;
    std::cout << "sizeof(signed long): "
              << sizeof(signed long) << std::endl;

    std::cout << "sizeof(unsigned long long): "
              << sizeof(unsigned long long) << std::endl;
    std::cout << "sizeof(signed long long): "
              << sizeof(signed long long) << std::endl;

    return 0;
}

// sizeof(unsigned int): 4
// sizeof(signed int): 4
// sizeof(unsigned long): 4
// sizeof(signed long): 4
// sizeof(unsigned long long): 8
// sizeof(signed long long): 8
