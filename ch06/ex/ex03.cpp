// Write a program that displays Fibonacci numbers
// similar to Listing 6.16 but asks the user
// how many numbers she wants to compute.

#include <iostream>

int main()
{
    int numsToCalculate = 0;
    std::cout << "Enter how many numbers she wants to compute: ";
    std::cin >> numsToCalculate;

    std::cout << "This program will calculate " << numsToCalculate
              << " Fibonacci Numbers at a time" << std::endl;

    int num1 = 0, num2 = 1;
    char wantMore = '\0';
    std::cout << num1 << " " << num2 << " ";

    do
    {
        for (int counter = 0; counter < numsToCalculate; ++counter)
        {
            std::cout << num1 + num2 << " ";

            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;
        }

        std::cout << std::endl << "Do you want more numbers (y/n)? ";
        std::cin >> wantMore;
    }
    while (wantMore == 'y');

    std::cout << "Goodbye!" << std::endl;

    return 0;
}

// Enter how many numbers she wants to compute: 4
// This program will calculate 4 Fibonacci Numbers at a time
// 0 1 1 2 3 5
// Do you want more numbers (y/n)? y
// 8 13 21 34
// Do you want more numbers (y/n)? y
// 55 89 144 233
// Do you want more numbers (y/n)? n
// Goodbye!
