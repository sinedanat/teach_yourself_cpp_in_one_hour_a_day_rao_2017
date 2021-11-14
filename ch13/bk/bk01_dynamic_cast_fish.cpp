#include <iostream>

using namespace std;

class Fish
{
public:
    // Base class should always have virtual destructor.
    virtual ~Fish() {}

    virtual void Swim()
    {
        cout << "Fish swims in water" << endl;
    }
};

class Tuna : public Fish
{
public:
    void Swim() override
    {
        cout << "Tuna swims real fast in the sea" << endl;
    }

    void BecomeDinner()
    {
        cout << "Tuna became dinner in Sushi" << endl;
    }
};

class Carp : public Fish
{
public:
    void Swim() override
    {
        cout << "Carp swims real slow in the lake" << endl;
    }

    void Talk()
    {
        cout << "Carp talked carp!" << endl;
    }
};

void DetectFishType(Fish* objFish)
{
    Tuna* objTuna = dynamic_cast <Tuna*>(objFish);

    if (objTuna)
    {
        cout << "Detected Tuna. Making Tuna dinner: " << endl;
        // Calling Tuna::BecomeDinner.
        objTuna->BecomeDinner();
    }

    Carp* objCarp = dynamic_cast <Carp*>(objFish);

    if (objCarp)
    {
        cout << "Detected Carp. Making carp talk: " << endl;
        // Calling Carp::Talk.
        objCarp->Talk();
    }

    cout << "Verifying type using virtual Fish::Swim: " << endl;
    // Calling virtual function Swim.
    objFish->Swim();
}

int main()
{
    Carp myLunch;
    Tuna myDinner;

    DetectFishType(&myDinner);
    DetectFishType(&myLunch);

    return 0;
}

// Detected Tuna. Making Tuna dinner:
// Tuna became dinner in Sushi
// Verifying type using virtual Fish::Swim:
// Tuna swims real fast in the sea
// Detected Carp. Making carp talk:
// Carp talked carp!
// Verifying type using virtual Fish::Swim:
// Carp swims real slow in the lake
