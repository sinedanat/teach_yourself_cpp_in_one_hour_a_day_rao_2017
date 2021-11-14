// Program a move constructor and move assignment operator
// for class DynIntegers that encapsulates a dynamically allocated array
// in the form of private member int*.

#include <iostream>
#include <stdexcept>

class DynIntegers
{
public:
    // Default constructor.
    DynIntegers(const int* newArrayNums, const size_t newLength)
        : length(newLength)
    {
        std::cout << "Constructor ..." << std::endl;

        if (newArrayNums != NULL)
        {
            arrayNums = new int[length];

            for (size_t i = 0; i < length; ++i)
            {
                arrayNums[i] = newArrayNums[i];
            }
        }
        else
        {
            arrayNums = NULL;
        }
    }

    // Copy constructor.
    DynIntegers(const DynIntegers& copySrc)
    {
        std::cout << "Copy constructor ..." << std::endl;

        if (copySrc.arrayNums != NULL)
        {
            arrayNums = new int[copySrc.length];

            for (size_t i = 0; i < copySrc.length; ++i)
            {
                arrayNums[i] = copySrc.arrayNums[i];
            }
        }
        else
        {
            arrayNums = NULL;
        }
    }

    // Copy assignment operator.
    DynIntegers& operator=(const DynIntegers& copySrc)
    {
        std::cout << "Copy assignment operator ... " << std::endl;

        if ((this != &copySrc) && (copySrc.arrayNums != NULL))
        {
            if (arrayNums != NULL)
                delete[] arrayNums;

            arrayNums = new int[copySrc.length];

            for (size_t i = 0; i < copySrc.length; ++i)
            {
                arrayNums[i] = copySrc.arrayNums[i];
            }
        }

        return *this;
    }

    // Move constructor.
    DynIntegers(DynIntegers&& moveSrc)
    {
        std::cout << "Move constructor ..." << std::endl;

        arrayNums = moveSrc.arrayNums; // Take ownership.
        moveSrc.arrayNums = NULL; // Release ownership from source.
    }

    // Move assignment operator.
    DynIntegers& operator= (DynIntegers&& moveSrc)
    {
        std::cout << "Move assignment operator ..." << std::endl;

        if (this != &moveSrc)
        {
            delete[] arrayNums; // Release own resources.
            arrayNums = moveSrc.arrayNums;
            moveSrc.arrayNums = NULL;
        }

        return *this;
    }

    // Destructor.
    ~DynIntegers()
    {
        std::cout << "Destructor ..." << std::endl;

        delete[] arrayNums;
    }

private:
    int* arrayNums;
    size_t length;
};

int main()
{
    const int length = 4;
    int arr[length] = {1, 11, 111, 1111};

    DynIntegers nums1(arr, length);

    DynIntegers nums2 = nums1;

    DynIntegers nums3(arr, length);
    
    DynIntegers nums4(nums1);

    nums4 = nums1;

    return 0;
}

// Constructor ...
// Copy constructor ...
// Constructor ...
// Copy constructor ...
// Copy assignment operator ... 
// Destructor ...
// Destructor ...
// Destructor ...
// Destructor ...
