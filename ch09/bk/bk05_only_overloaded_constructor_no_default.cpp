#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string humansName /*= "Adam"*/, int humansAge /*= 25*/)
    {
        name = humansName;
        age = humansAge;
        cout << "Overloaded constructor creates ";
        cout << name << " of age " << age << endl;
    }

    void IntroduceSelf()
    {
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
};

int main()
{
    Human firstMan("Adam", 25);
    Human firstWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
}

// Overloaded constructor creates Adam of age 25
// Overloaded constructor creates Eve of age 28
// I am Adam and am 25 years old
// I am Eve and am 28 years old
