// Convert every alternate character of a string into uppercase.

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a sentence: ";
    std::string sentence;
    std::getline(std::cin, sentence);

    for (size_t i = 0; i < sentence.length(); i += 2)
    {
        sentence[i] = std::toupper(sentence[i]);
    }

    std::cout << "Sentence after: " << sentence << std::endl;

    return 0;
}

// Enter a sentence: hello world
// Sentence after: HeLlO WoRlD
