// A queue of people (class Person) are lining up at the post office.
// Person contains member attributes that hold age and gender
// and are defined as:
// class Person
// {
// public:
// int age;
// bool isFemale;
// };
// Amend this class such that a priority_queue containing objects of it
// would offer the elderly and women (in that order) priority service.

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <functional>

class Person
{
public:
    int age;
    bool isFemale;
    std::string displayAs;

    Person(int newAge, bool newIsFemale)
        : age(newAge), isFemale(newIsFemale)
    {
        displayAs = std::to_string(age) + ", "
                    + (isFemale ? "female" : "male");
    }

    bool operator<(const Person& person) const
    {
        if (this->isFemale == person.isFemale)
        {
            return (this->age < person.age);
        }
        else if (this->isFemale && !person.isFemale)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    operator const char*() const
    {
        return displayAs.c_str();
    }
};

int main()
{
    std::priority_queue<Person,
        std::vector<Person>,
        std::less<Person>> persons;

    persons.push(Person(26, false));
    persons.push(Person(44, false));
    persons.push(Person(38, true));
    persons.push(Person(32, false));
    persons.push(Person(57, true));

    while (!persons.empty())
    {
        std::cout << "Deleting topmost element: "
                  << persons.top() << std::endl;

        persons.pop();
    }

    return 0;
}

// Deleting topmost element: 57, female
// Deleting topmost element: 38, female
// Deleting topmost element: 44, male
// Deleting topmost element: 32, male
// Deleting topmost element: 26, male
