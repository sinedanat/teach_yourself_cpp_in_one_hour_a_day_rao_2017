#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> numsInStack;

    // Insert values at top of the stack.
    cout << "Pushing {25, 10, -1, 5} on stack in that order:" << endl;
    numsInStack.push(25);
    numsInStack.push(10);
    numsInStack.push(-1);
    numsInStack.push(5);

    cout << "Stack contains " << numsInStack.size() << " elements" << endl;

    while (numsInStack.size() != 0)
    {
        cout << "Popping topmost element: " << numsInStack.top() << endl;

        // Removes topmost element.
        numsInStack.pop();
    }

    if (numsInStack.empty())
        cout << "Popping all elements empties stack!" << endl;

    return 0;
}

// Pushing {25, 10, -1, 5} on stack in that order:
// Stack contains 4 elements
// Popping topmost element: 5
// Popping topmost element: -1
// Popping topmost element: 10
// Popping topmost element: 25
// Popping all elements empties stack!
