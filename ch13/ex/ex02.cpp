// You have pointer objFish* that points to object of class Tuna.
// Fish* objFish = new Tuna;
// Tuna* pTuna = <what cast?>objFish;
// What cast would you use to get a pointer Tuna*
// point to this object of type Tuna?
// Demonstrate using code.

#include <iostream>

class Fish
{
public:
    virtual ~Fish() {}
};

class Tuna : public Fish
{
public:
    void DoSomething()
    {
        std::cout << "Doing something ..." << std::endl;
    }
};

int main()
{
    Fish* fish = new Tuna;
    Tuna* tuna = static_cast<Tuna*>(fish);

    tuna->DoSomething();

    delete fish;
    fish = nullptr;

    return 0;
}

// Doing something ...
