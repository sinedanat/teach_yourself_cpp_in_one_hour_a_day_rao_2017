// The following is a map template definition
// in your dictionary application:
// map <wordProperty, string, fPredicate> mapWordDefinition;
// where WordProperty is a structure:
// struct WordProperty
// {
// string word;
// bool isLatinBase;
// };
// Define the binary predicate fPredicate that helps the map sort
// a key of type WordProperty according to the string attribute it contains.

#include <iostream>
#include <map>
#include <string>

struct WordProperty
{
    std::string word;

    bool isLatinBase()
    {
        return true;
    }
};

struct fPredicate
{
    bool operator()(const WordProperty& lhs, const WordProperty& rhs) const
    {
        return (lhs.word < rhs.word);
    }
};

int main()
{
    std::map<WordProperty, std::string, fPredicate> mapWordDefinition;

    return 0;
}
