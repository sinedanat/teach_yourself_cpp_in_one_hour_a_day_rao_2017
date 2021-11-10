// Improve on the code in quiz question 5,
// using parenthesis to create clarity.

#include <iostream>

int main()
{
    std::cout << "Enter number: ";
    int number = 0;
    std::cin >> number;

    int result = ((number << 1) + 5) << 1;

    std::cout << "result: " << result << std::endl;

    return 0;
}

// Enter number: 10
// result: 50
