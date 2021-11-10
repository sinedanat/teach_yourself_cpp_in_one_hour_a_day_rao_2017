// BUG BUSTERS: What is wrong with this code?
// for (int counter=0; counter=10; ++counter)
// cout << counter << " ";

// Should be test condition like counter < 10,
// but there is an assignment counter = 0.

#include <iostream>

int main()
{
    for (int counter = 0; counter < 10; ++counter)
    {
        std::cout << counter << " ";
    }

    return 0;
}

// 0 1 2 3 4 5 6 7 8 9 
