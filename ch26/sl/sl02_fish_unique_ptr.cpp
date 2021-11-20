#include <iostream>
#include <memory>

using namespace std;

class Fish
{
public:
    Fish()
    {
        cout << "Fish: Constructed!" << endl;
    }

    virtual ~Fish()
    {
        cout << "Fish: Destructed!" << endl;
    }

    void Swim() const
    {
        cout << "Fish swims in water" << endl;
    }
};

class Carp: public Fish
{
};

void MakeFishSwim(const unique_ptr<Fish>& inFish)
{
    inFish->Swim();
}

int main()
{
    unique_ptr<Fish> myCarp(new Carp);
    MakeFishSwim(myCarp);

    return 0;
}

// Fish: Constructed!
// Fish swims in water
// Fish: Destructed!
