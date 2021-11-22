// BUG BUSTERS: What is wrong with the following code?
// int main()
// {
//     int* millionNums = new int[1000000];
//     // Do something with the million integers.
//     delete []millionNums;
// }

// Place memory allocation code in try-catch block.

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
    catch (std::bad_alloc& exp)
    {
        std::cout << "Exception encountered: " << exp.what() << std::endl;
    }
}
