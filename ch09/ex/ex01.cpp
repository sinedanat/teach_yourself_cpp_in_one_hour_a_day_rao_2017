// BUG BUSTERS: What is wrong in the following class declaration?
// Class Human
// {
// int age;
// string name;
// public:
// Human() {}
// }

// Problem 1 - missing header <string>.
// Problem 2 - keyword 'class' should be lowercase.
// Problem 3 - missing std:: prefix for string.
// Problem 4 - missing ';' at the end.

#include <string>

class Human
{
    int age;
    std::string name;
public:
    Human() {}
};
