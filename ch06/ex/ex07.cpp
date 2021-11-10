// BUG BUSTERS: What is wrong with this code?
// cout << "Enter a number between 0 and 4" << endl;
// int input = 0;
// cin >> input;
// switch (input)
// {
// case 0:
// case 1:
// case 2:
// case 3:
// case 4:
// cout << "Valid input" << endl;
// default:
// cout << "Invalid input" << endl;
// }

// There in no break in case.

#include <iostream>

int main()
{
    std::cout << "Enter a number between 0 and 4: ";
    int input = 0;
    std::cin >> input;

    switch (input)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            std::cout << "Valid input" << std::endl;
            break;
        default:
            std::cout << "Invalid input" << std::endl;
    }

    return 0;
}

// Enter a number between 0 and 4: 0
// Valid input

// Enter a number between 0 and 4: 1
// Valid input

// Enter a number between 0 and 4: 4
// Valid input

// Enter a number between 0 and 4: 5
// Invalid input
