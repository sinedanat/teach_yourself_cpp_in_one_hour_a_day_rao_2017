#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = {0};

    cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;

    for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
    {
        cout << "Enter an integer for element " << counter << ": ";
        cin >> myNums[counter];
    }

    cout << "Displaying contents of the array: " << endl;

    for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
        cout << "Element " << counter << " = " << myNums[counter] << endl;

    return 0;
}

// Populate array of 5 integers
// Enter an integer for element 0: 25
// Enter an integer for element 1: 41
// Enter an integer for element 2: 7
// Enter an integer for element 3: 5
// Enter an integer for element 4: 99
// Displaying contents of the array:
// Element 0 = 25
// Element 1 = 41
// Element 2 = 7
// Element 3 = 5
// Element 4 = 99
