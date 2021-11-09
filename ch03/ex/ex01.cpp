// Modify enum YourCards in quiz question 4
// to demonstrate that the value of Queen can be 45.

#include <iostream>

int main()
{
    enum YourCards {Ace = 43, Jack, Queen, King};
    std::cout << "Queen: " << Queen << std::endl;

    return 0;
}

// Queen: 45
