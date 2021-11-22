// BUG BUSTERS: What is wrong with the following code?
// int main()
// {
//     try
//     {
//         int* millionNums = new int [1000000];
//         // Do something with the million integers.
//         delete []millionNums;
//     }
//     catch (exception& exp)
//     {
//         int* anotherMillion = new int [1000000];
//         // take back up of millionNums and save it to disk
//     }
// }

// Don't insert any heavy logic or resource allocations
// inside a catch() block.

#include <iostream>
#include <exception>

int main()
{
    try
    {
        int* millionNums = new int[1000000];
        
        // Do something with the million integers.

        delete[] millionNums;
    }
    catch (std::exception& exp)
    {
        // Don't allocate memory!
        int* anotherMillion = new int[1000000];

        // Take back up of millionNums and save it to disk.

        delete[] anotherMillion;
    }
}
