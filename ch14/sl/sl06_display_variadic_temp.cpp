#include <iostream>

using namespace std;

void Display() {}

template<typename First, typename... Last>
void Display(First a, Last... U)
{
    cout << a << endl;
    
    Display(U...);
}

int main()
{
    Display('a');
    cout << endl;
    Display(3.14);
    cout << endl;
    Display('a', 3.14);
    cout << endl;
    Display('z', 3.14567, "The power of variadic templates!");

    return 0;
}

// a
//
// 3.14
//
// a
// 3.14
//
// z
// 3.14567
// The power of variadic templates!
