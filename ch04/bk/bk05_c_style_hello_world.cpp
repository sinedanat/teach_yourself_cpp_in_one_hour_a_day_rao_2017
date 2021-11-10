#include <iostream>

using namespace std;

int main()
{
    char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;

    cout << "Replacing space with null" << endl;
    sayHello[5] = '\0';
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;

    cout << sayHello + 6 << endl;   // "World"

    return 0;
}

// Hello World
// Size of array: 12
// Replacing space with null
// Hello
// Size of array: 12
// World
