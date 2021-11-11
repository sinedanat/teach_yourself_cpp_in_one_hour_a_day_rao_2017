// How would the user of the class in Exercise 1 access member Human::age?

// Should create getter and setter methods.

#include <iostream>
#include <string>

class Human
{
    std::string name;
    int age;

public:
    Human() {}
    std::string GetName() const
    {
        return name;
    }
    void SetName(std::string newName)
    {
        name = newName;
    }
    int GetAge() const
    {
        return age;
    }
    void SetAge(int newAge)
    {
        age = newAge;
    }
};

int main()
{
    Human ed;
    ed.SetName("Ed");
    ed.SetAge(50);

    std::cout << "name: " << ed.GetName() << std::endl;
    std::cout << "age: " << ed.GetAge() << std::endl;

    return 0;
}

// name: Ed
// age: 50
