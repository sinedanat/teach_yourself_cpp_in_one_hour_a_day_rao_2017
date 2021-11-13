// In the (uncorrected) code in Exercise 2,
// what is the order of execution of constructors and destructors
// if an instance of car is created and destroyed like this:
// Vehicle* pMyRacer = new Car;
// delete pMyRacer;

// 1. Vehicle constructor.
// 2. Car constructor.
// 3. Vehicle destructor.

#include <iostream>

class Vehicle
{
public:
    Vehicle()
    {
        std::cout << "Vehicle constructor ..." << std::endl;
    }
    ~Vehicle()
    {
        std::cout << "Vehicle destructor ..." << std::endl;
    }
};
class Car : public Vehicle
{
public:
    Car()
    {
        std::cout << "Car constructor ..." << std::endl;
    }
    ~Car()
    {
        std::cout << "Car destructor ..." << std::endl;
    }
};

int main()
{
    Vehicle* pMyRacer = new Car;
    delete pMyRacer;

    return 0;
}

// Vehicle constructor ...
// Car constructor ...
// Vehicle destructor ...
