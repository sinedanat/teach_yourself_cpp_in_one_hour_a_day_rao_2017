#include <iostream>

using namespace std;

class Fish
{
public:
    void Swim()
    {
        cout << "Fish swims ... !" << endl;
    }

    void Swim(bool isFreshWaterFish)
    {
        if (isFreshWaterFish)
            cout << "Swims in lake" << endl;
        else
            cout << "Swims in sea" << endl;
    }
};

class Tuna : public Fish
{
public:
    void Swim()
    {
        cout << "Tuna swims real fast" << endl;
    }

    void Swim(bool isFreshWaterFish)
    {
        Fish::Swim(isFreshWaterFish);
    }
};

int main()
{
    Tuna myDinner;

    cout << "Getting my food to swim" << endl;

    myDinner.Swim();

    // Solution 3: Override all overloaded variants of Swim() in class Tuna.
    myDinner.Swim(false);

    return 0;
}

// Getting my food to swim
// Tuna swims real fast
// Swims in sea
