#include <iostream>

using namespace std;

int main()
{
    int age = 30;
    const double Pi = 3.1416;

    // Use & to find the address in memory
    cout << "Integer age is located at: " << &age << endl;
    cout << "Double Pi is located at: " << &Pi << endl;

    return 0;
}

// Integer age is located at: 0x26f91c
// Double Pi is located at: 0x26f910
