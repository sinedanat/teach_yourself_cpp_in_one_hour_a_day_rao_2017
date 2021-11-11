// Write a better version of the class seen in Exercise 1
// that initializes all parameters
// using an initialization list in the constructor.

#include <iostream>
#include <string>

class Human
{
    std::string name;
    int age;

public:
    Human(std::string newName, int newAge) : name(newName), age(newAge) {}
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
    Human ed("Ed", 50);

    std::cout << "name: " << ed.GetName() << std::endl;
    std::cout << "age: " << ed.GetAge() << std::endl;

    return 0;
}

// name: Ed
// age: 50
