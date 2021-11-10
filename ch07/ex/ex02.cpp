// Write a function that accepts an array of double as input.

#include <iostream>

void show(double arr[], int length);

int main()
{
    const int arr_length = 5;
    double arr[arr_length] = {1.1, 11.1, 111.1, 1111.1, 11111.1};

    show(arr, arr_length);

    return 0;
}

void show(double arr[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

// 1.1 11.1 111.1 1111.1 11111.1
