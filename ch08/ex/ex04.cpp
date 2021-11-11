// BUG BUSTERS: What is wrong with this code?
// #include <iostream>
// using namespace std;
// int main()
// {
// int *pointToAnInt = new int;
// pointToAnInt = 9;
// cout << "The value at pointToAnInt: " << *pointToAnInt;
// delete pointToAnInt;
// return 0;
// }

// Problem with this line as pointToAnInt is a pointer to int.
// Should use dereference operator * to change data.
// pointToAnInt = 9;

#include <iostream>

int main()
{
    int* pointToAnInt = new int;
    *pointToAnInt = 9;
    
    std::cout << "The value at pointToAnInt: " << *pointToAnInt << std::endl;
    
    delete pointToAnInt;
    pointToAnInt = nullptr;
    
    return 0;
}

// The value at pointToAnInt: 9
