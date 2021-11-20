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

    ~Fish()
    {
        cout << "Fish: Destructed!" << endl;
    }

    void Swim() const
    {
        cout << "Fish swims in water" << endl;
    }
};

void MakeFishSwim(const unique_ptr<Fish>& inFish)
{
    inFish->Swim();
}

int main()
{
    unique_ptr<Fish> smartFish(new Fish);

    smartFish->Swim();

    // OK, as MakeFishSwim accepts reference.
    MakeFishSwim(smartFish);

    unique_ptr<Fish> copySmartFish;
    // copySmartFish = smartFish; // Error - operator= is private.

    // The smartFish is empty henceforth.
    unique_ptr<Fish> sameFish(std::move(smartFish));

    return 0;
}

// Fish: Constructed!
// Fish swims in water
// Fish swims in water
// Fish: Destructed!
