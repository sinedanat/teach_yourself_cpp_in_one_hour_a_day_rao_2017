#include<iostream>

using namespace std;

class Human
{
    int age;
public:
    // explicit constructor blocks implicit conversions
    explicit Human(int humansAge) : age(humansAge) {}
};

void DoSomething(Human person)
{
    cout << "Human sent did something" << endl;

    return;
}

int main()
{
    Human kid(10);     // explicit converion is OK
    Human anotherKid = Human(11); // explicit, OK
    DoSomething(kid); // OK

    // Human anotherKid = 11; // Error - implicit conversion is not allowed
    // DoSomething(10); // Error - implicit conversion is not allowed

    return 0;
}

// Human sent did something
