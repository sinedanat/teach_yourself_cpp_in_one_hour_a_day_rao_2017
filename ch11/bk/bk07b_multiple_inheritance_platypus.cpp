#include <iostream>

using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal constructor" << endl;
    }

    int age;
};

class Mammal : public Animal
{
};

class Bird : public Animal
{
};

class Reptile : public Animal
{
};

class Platypus : public Mammal, public Bird, public Reptile
{
public:
    Platypus()
    {
        cout << "Platypus constructor" << endl;
    }
};

int main()
{
    Platypus duckBilledP;

    // Uncomment next line to see compile failure.
    // age is ambiguous as there are three instances of base Animal.
    // duckBilledP.age = 25;
    // duckBilledP.Platypus::age = 25;

    // It can get even more ridiculous
    // if you so wanted you could set all three:
    duckBilledP.Mammal::age = 25;
    duckBilledP.Bird::age = 25;
    duckBilledP.Reptile::age = 25;


    return 0;
}

// Animal constructor
// Animal constructor
// Animal constructor
// Platypus constructor
