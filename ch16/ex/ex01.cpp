// Write a program to verify whether the word
// input by the user is a palindrome.
// For example: ATOYOTA is a palindrome,
// as the word does not change when reversed.

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::cout << "Enter a word: ";
    std::string str1;
    std::getline(std::cin, str1);

    std::string str2 = str1;
    
    std::reverse(str2.begin(), str2.end());

    if(str1 == str2)
    {
        std::cout << str1 << " is a palindrome." << std::endl;
    }
    else
    {
        std::cout << str1 << " is not a palindrome." << std::endl;
    }

    return 0;
}

// Enter a word: yakkay
// yakkay is a palindrome.
// 
// Enter a word: wow wow
// wow wow is a palindrome.
// 
// Enter a word: hello
// hello is not a palindrome.
