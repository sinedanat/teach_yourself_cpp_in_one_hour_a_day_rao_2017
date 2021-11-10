#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Enter a word NOT longer than 20 characters:" << endl;

    char userInput[21] = {'\0'};
    cin >> userInput;

    cout << "Length of your input was: " << strlen(userInput) << endl;

    return 0;
}

// Enter a word NOT longer than 20 characters:
// Don'tUseThisProgram
// Length of your input was: 19

// Enter a word NOT longer than 20 characters:
// HelloAgain
// Length of your input was: 10

// Enter a word NOT longer than 20 characters:
// Hi, Ed!
// Length of your input was: 3
