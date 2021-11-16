// Write a program that displays
// the position of every occurrence of character 'a'
// in the string "Good day String! Today is beautiful!".

#include <iostream>
#include <string>

int main()
{
    std::string str("Good day String! Today is beautiful!");

    std::cout << "Locating all instances of character 'a'" << std::endl;

    const char charToSearch = 'a';
    auto charPos = str.find(charToSearch, 0);

    while (charPos != std::string::npos)
    {
        std::cout << "'" << charToSearch << "' found";
        std::cout << " at position: " << charPos << std::endl;

        // Make the 'find' function search forward from the next character onwards.
        size_t charSearchPos = charPos + 1;

        charPos = str.find(charToSearch, charSearchPos);
    }

    return 0;
}

// Locating all instances of character 'a'
// 'a' found at position: 6
// 'a' found at position: 20
// 'a' found at position: 28
