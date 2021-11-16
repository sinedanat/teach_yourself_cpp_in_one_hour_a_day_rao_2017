#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Please enter a word for palindrome-check:" << endl;
    string strInput;
    cin >> strInput;

    string strCopy(strInput);
    reverse(strCopy.begin(), strCopy.end());

    if (strCopy == strInput)
        cout << strInput << " is a palindrome!" << endl;
    else
        cout << strInput << " is not a palindrome." << endl;

    return 0;
}

// Please enter a word for palindrome-check:
// baooab
// baooab is a palindrome!
// 
// Please enter a word for palindrome-check:
// bye
// bye is not a palindrome.
