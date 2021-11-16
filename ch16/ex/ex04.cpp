// Your program should have four string objects
// that are initialized to "I", "Love", "STL", and "String".
// Append them with a space in between and display the sentence.

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string str1("I");
    std::string str2("Love");
    std::string str3("STL");
    std::string str4("String");

    str += str1;
    str += " ";
    str += str2;
    str += " ";
    str += str3;
    str += " ";
    str += str4;

    std::cout << str << std::endl;

    return 0;
}

// I Love STL String
