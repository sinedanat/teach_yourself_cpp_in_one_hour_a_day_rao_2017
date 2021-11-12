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

    using Fish::Swim; // Unhide all Swim() methods in class Fish

    void Swim()
    {
        cout << "Tuna swims real fast" << endl;
    }
};

int main()
{
    Tuna myDinner;

    cout << "Getting my food to swim" << endl;

    myDinner.Swim();

    // Solution 2: Use keyword using in class Tuna to unhide Swim() in class Fish.
    myDinner.Swim(false);

    return 0;
}

// Getting my food to swim
// Tuna swims real fast
// Swims in sea
