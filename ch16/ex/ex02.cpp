// Write a program that tells the user
// the number of vowels in a sentence.
// Vowels: a, e, i, o, u.

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::cout << "Enter a sentence: ";
    std::string sentence;
    std::getline(std::cin, sentence);

    std::transform(sentence.begin(), sentence.end(),
                   sentence.begin(), ::tolower);

    int vowels = 0;

    for (size_t i = 0; i < sentence.length(); ++i)
    {
        switch (sentence[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowels;
                break;
        }
    }

    std::cout << "Sentence contains " << vowels << " vowels." << std::endl;

    return 0;
}

// Enter a sentence: aa bb cc aa
// Sentence contains 4 vowels.
//
// Enter a sentence: Hello, World!
// Sentence contains 3 vowels.
//
// Enter a sentence: a e i o u
// Sentence contains 5 vowels.
//
// Enter a sentence: aeiou
// Sentence contains 5 vowels.
//
// Enter a sentence: brrr
// Sentence contains 0 vowels.
