// Write a program that asks the user
// to input two Boolean values and demonstrates
// the result of various bitwise operators on them.

#include <iostream>

int main()
{
    std::cout << "Enter 0 or 1: ";
    bool num1 = false;
    std::cin >> num1;

    std::cout << "Enter 0 or 1: ";
    bool num2 = false;
    std::cin >> num2;

    std::cout << "!num1: " << (!num1) << std::endl;
    std::cout << "!num2: " << (!num2) << std::endl;
    std::cout << "num1 & num2: " << (num1 & num2) << std::endl;
    std::cout << "num1 | num2: " << (num1 | num2) << std::endl;
    std::cout << "num1 ^ num2: " << (num1 ^ num2) << std::endl;

    return 0;
}

// Enter 0 or 1: 0
// Enter 0 or 1: 1
// !num1: 1
// !num2: 0
// num1 & num2: 0
// num1 | num2: 1
// num1 ^ num2: 1

// Enter 0 or 1: 1
// Enter 0 or 1: 0
// !num1: 0
// !num2: 1
// num1 & num2: 0
// num1 | num2: 1
// num1 ^ num2: 1

// Enter 0 or 1: 1
// Enter 0 or 1: 1
// !num1: 0
// !num2: 0
// num1 & num2: 1
// num1 | num2: 1
// num1 ^ num2: 0

// Enter 0 or 1: 0
// Enter 0 or 1: 0
// !num1: 1
// !num2: 1
// num1 & num2: 0
// num1 | num2: 0
// num1 ^ num2: 0
