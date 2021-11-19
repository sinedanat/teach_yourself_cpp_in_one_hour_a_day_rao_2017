// Write a program that reverses
// the user's string input using the stack class.

#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::stack<std::string> inputs;

    std::string ch = "y";

    do
    {
        std::cout << "Enter a string: ";
        std::string str;
        std::getline(std::cin, str);

        inputs.push(str);

        std::cout << "Would you like to enter one more string (y/n): ";
        std::getline(std::cin, ch);
    }
    while (ch != "n");

    std::cout << "You entered: " << std::endl;

    while (!inputs.empty())
    {
        std::cout << inputs.top() << std::endl;

        inputs.pop();
    }

    return 0;
}

// Enter a string: hello
// Would you like to enter one more string (y/n): y
// Enter a string: bye
// Would you like to enter one more string (y/n): y
// Enter a string: wow
// Would you like to enter one more string (y/n): y
// Enter a string: again and again ...
// Would you like to enter one more string (y/n): n
// You entered:
// again and again ...
// wow
// bye
// hello
