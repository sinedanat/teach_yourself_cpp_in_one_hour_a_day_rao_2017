// Write a template function Display() that can be invoked
// with a varying number and type of arguments,
// and would display each of them.

#include <iostream>
#include <string>

void Display() {}

template<typename First, typename... Rest>
void Display(First val, Rest... rest)
{
    std::cout << val << std::endl;

    Display(rest...);
}

int main()
{
    Display(0, 1, 3.145, "Hello", 5, 55, "World");

    return 0;
}

// 0
// 1
// 3.145
// Hello
// 5
// 55
// World
