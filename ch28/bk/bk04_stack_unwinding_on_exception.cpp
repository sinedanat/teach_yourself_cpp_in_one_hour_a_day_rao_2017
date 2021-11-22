#include <iostream>

using namespace std;

struct StructA
{
    StructA()
    {
        cout << "StructA constructor" << endl;
    }
    ~StructA()
    {
        cout << "StructA destructor" << endl;
    }
};

struct StructB
{
    StructB()
    {
        cout << "StructB constructor" << endl;
    }
    ~StructB()
    {
        cout << "StructB destructor" << endl;
    }
};

// Throws.
void FuncB()
{
    cout << "In Func B" << endl;
    StructA objA;
    StructB objB;
    cout << "About to throw up!" << endl;

    throw "Throwing for the heck of it";
}

void FuncA()
{
    try
    {
        cout << "In Func A" << endl;
        StructA objA;
        StructB objB;
        FuncB();
        cout << "FuncA: returning to caller" << endl;
    }
    catch (const char* exp)
    {
        cout << "FuncA: Caught exception: " << exp << endl;
        cout << "Handled it, will not throw to caller" << endl;

        // Uncomment this line to throw to main().
        // throw;
    }
}

int main()
{
    cout << "main(): Started execution" << endl;

    try
    {
        FuncA();
    }
    catch (const char* exp)
    {
        cout << "Exception in main(): " << exp << endl;
    }

    cout << "main(): exiting gracefully" << endl;

    return 0;
}

// main(): Started execution
// In Func A
// StructA constructor
// StructB constructor
// In Func B
// StructA constructor
// StructB constructor
// About to throw up!
// StructB destructor
// StructA destructor
// StructB destructor
// StructA destructor
// FuncA: Caught exception: Throwing for the heck of it
// Handled it, will not throw to caller
// main(): exiting gracefully

// main(): Started execution
// In Func A
// StructA constructor
// StructB constructor
// In Func B
// StructA constructor
// StructB constructor
// About to throw up!
// StructB destructor
// StructA destructor
// StructB destructor
// StructA destructor
// FuncA: Caught exception: Throwing for the heck of it
// Handled it, will not throw to caller
// Exception in main(): Throwing for the heck of it
// main(): exiting gracefully
