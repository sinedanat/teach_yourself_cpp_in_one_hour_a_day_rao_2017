// Write a simple template class that holds two arrays of types
// that are defined via the class's template parameter list.
// The size of the array is 10, and the template class
// should have accessor functions that allow
// for the manipulation of array elements.

#include <iostream>

static const int length = 10;

template<typename T1, typename T2>
class TwoArrays
{
public:
    TwoArrays(T1* newArr1, T2* newArr2)
        : arr1(newArr1), arr2(newArr2) {}
    void DisplayArrayOne()
    {
        for (int i = 0; i < length; ++i)
        {
            std::cout << "arr1[" << i << "] = " << arr1[i] << std::endl;
        }
    }
    void DisplayArrayTwo()
    {
        for (int i = 0; i < length; ++i)
        {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }
    }
private:
    T1* arr1;
    T2* arr2;
};

int main()
{
    int ints[length] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double doubles[length] = {0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    TwoArrays<int, double> arr(ints, doubles);

    arr.DisplayArrayOne();
    std::cout << std::endl;
    arr.DisplayArrayTwo();

    return 0;
}

// arr1[0] = 0
// arr1[1] = 1
// arr1[2] = 2
// arr1[3] = 3
// arr1[4] = 4
// arr1[5] = 5
// arr1[6] = 6
// arr1[7] = 7
// arr1[8] = 8
// arr1[9] = 9
// 
// arr2[0] = 0
// arr2[1] = 1.1
// arr2[2] = 2.2
// arr2[3] = 3.3
// arr2[4] = 4.4
// arr2[5] = 5.5
// arr2[6] = 6.6
// arr2[7] = 7.7
// arr2[8] = 8.8
// arr2[9] = 9.9
