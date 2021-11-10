// Write a for loop to access elements in an array in the reverse order.

#include <iostream>

int main()
{
    int arr[5] = {1, 11, 111, 1111, 11111};

    for (int i = 4; i >= 0; --i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

// 11111 1111 111 11 1 
