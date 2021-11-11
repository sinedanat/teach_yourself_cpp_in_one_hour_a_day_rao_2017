#include <iostream>

using namespace std;

int main()
{
    cout << "sizeof fundamental types:" << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;

    cout << "sizeof pointers to fundamental types:" << endl;
    cout << "sizeof(char*) = " << sizeof(char*) << endl;
    cout << "sizeof(int*) = " << sizeof(int*) << endl;
    cout << "sizeof(double*) = " << sizeof(double*) << endl;

    return 0;
}

// sizeof fundamental types:
// sizeof(char) = 1
// sizeof(int) = 4
// sizeof(double) = 8
// sizeof pointers to fundamental types:
// sizeof(char*) = 8
// sizeof(int*) = 8
// sizeof(double*) = 8
