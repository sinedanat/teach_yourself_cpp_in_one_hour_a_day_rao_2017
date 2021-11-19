// Define a multiset to store entered words and their meanings.
// That is, make a multiset work as a dictionary.
// (Hint: The multiset should be one of a structure
// that contains two strings: the word and its meaning.)

#include <iostream>
#include <set>
#include <string>

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
    {
        std::cout << *element << std::endl;
    }

    std::cout << std::endl;
}

struct Record
{
    std::string word;
    std::string meaning;
    std::string displayAs;

    Record(const std::string& newWord, const std::string& newMeaning)
        : word(newWord), meaning(newMeaning)
    {
        displayAs = word + ": " + meaning;
    }

    // Used by find().
    bool operator==(const Record& itemToCompare) const
    {
        return (this->word == itemToCompare.word);
    }

    // Used to sort.
    bool operator<(const Record& itemToCompare) const
    {
        return (this->word < itemToCompare.word);
    }

    // Used in DisplayContents via cout.
    operator const char*() const
    {
        return displayAs.c_str();
    }
};

int main()
{
    std::set<Record> dict;

    std::string ch = "y";

    do
    {
        std::cout << "Enter word: ";
        std::string word;
        std::getline(std::cin, word);

        std::cout << "Enter meaning: ";
        std::string meaning;
        std::getline(std::cin, meaning);

        dict.insert(Record(word, meaning));

        std::cout << "Would you like to enter one more record (y/n): ";
        std::getline(std::cin, ch);
    }
    while (ch != "n");

    std::cout << "You entered: " << std::endl;
    DisplayContents(dict);

    return 0;
}

// Enter word: book
// Enter meaning: a thing from paper
// Would you like to enter one more record (y/n): y
// Enter word: car
// Enter meaning: a thing from metal
// Would you like to enter one more record (y/n): n
// You entered:
// book: a thing from paper
// car: a thing from metal
