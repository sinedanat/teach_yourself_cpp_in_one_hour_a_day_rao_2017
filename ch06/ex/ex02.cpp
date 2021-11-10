// Write a nested loop equivalent of Listing 6.14
// that adds elements in two arrays, but in reverse order.

#include <iostream>

int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {35, -3, 0};
    int myNums2[ARRAY2_LEN] = {20, -1};

    std::cout << "Multiplying each int in myNums1 by each in myNums2:" << std::endl;

    for (int index1 = ARRAY1_LEN - 1; index1 >= 0; --index1)
        for (int index2 = ARRAY2_LEN - 1; index2 >= 0; --index2)
            std::cout << myNums1[index1] << " x " << myNums2[index2]
                      << " = " << myNums1[index1] * myNums2[index2] << std::endl;

    return 0;
}

// Multiplying each int in myNums1 by each in myNums2:
// 0 x -1 = 0
// 0 x 20 = 0
// -3 x -1 = 3
// -3 x 20 = -60
// 35 x -1 = -35
// 35 x 20 = 700
