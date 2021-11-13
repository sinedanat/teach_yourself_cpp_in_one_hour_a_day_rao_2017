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

    return 0;
}

// Animal constructor
// Animal constructor
// Animal constructor
// Platypus constructor
