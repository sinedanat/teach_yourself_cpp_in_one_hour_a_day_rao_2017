// Use the unique_ptr class to instantiate a Carp
// that inherits from Fish.
// Pass the object as a Fish pointer and comment on slicing, if any.

#include <iostream>
#include <memory>

class Fish
{
public:
    Fish()
    {
        std::cout << "Fish: Constructed!" << std::endl;
    }

    virtual ~Fish()
    {
        std::cout << "Fish: Destructed!" << std::endl;
    }

    virtual void Swim() const
    {
        std::cout << "Fish swims in water" << std::endl;
    }
};

class Carp : public Fish
{
public:
    Carp()
    {
        std::cout << "Carp: Constructed!" << std::endl;
    }

    ~Carp()
    {
        std::cout << "Carp: Destructed!" << std::endl;
    }

    void Swim() const override
    {
        std::cout << "Carp swims in water" << std::endl;
    }
};

void MakeFishSwim(const std::unique_ptr<Fish>& inFish)
{
    inFish->Swim();
}

int main()
{
    std::cout << "Create and use a Fish object:" << std::endl;

    std::unique_ptr<Fish> fish(new Fish);
    fish->Swim();
    MakeFishSwim(fish);

    std::cout << std::endl;

    std::cout << "Create and use a Carp object:" << std::endl;
    std::unique_ptr<Fish> carp(new Carp);
    carp->Swim();
    MakeFishSwim(carp);

    std::cout << std::endl;

    return 0;
}

// Create and use a Fish object:
// Fish: Constructed!
// Fish swims in water
// Fish swims in water
// 
// Create and use a Carp object:
// Fish: Constructed!
// Carp: Constructed!
// Carp swims in water
// Carp swims in water
// 
// Carp: Destructed!
// Fish: Destructed!
// Fish: Destructed!
