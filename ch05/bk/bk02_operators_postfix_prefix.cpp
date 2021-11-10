#include <iostream>

using namespace std;

int main()
{
    int startValue = 101;
    cout << "Start value of integer being operated: " << startValue << endl;

    int postfixIncrement = startValue++;
    cout << "Result of Postfix Increment = " << postfixIncrement << endl;
    cout << "After Postfix Increment, startValue = " << startValue << endl;

    startValue = 101; // Reset
    int prefixIncrement = ++startValue;
    cout << "Result of Prefix Increment = " << prefixIncrement << endl;
    cout << "After Prefix Increment, startValue = " << startValue << endl;

    startValue = 101;
    int postfixDecrement = startValue--;
    cout << "Result of Postfix Decrement = " << postfixDecrement << endl;
    cout << "After Postfix Decrement, startValue = " << startValue << endl;

    startValue = 101;
    int prefixDecrement = --startValue;
    cout << "Result of Prefix Decrement = " << prefixDecrement << endl;
    cout << "After Prefix Decrement, startValue = " << startValue << endl;

    return 0;
}

// Start value of integer being operated: 101
// Result of Postfix Increment = 101
// After Postfix Increment, startValue = 102
// Result of Prefix Increment = 102
// After Prefix Increment, startValue = 102
// Result of Postfix Decrement = 101
// After Postfix Decrement, startValue = 100
// Result of Prefix Decrement = 100
// After Prefix Decrement, startValue = 100
