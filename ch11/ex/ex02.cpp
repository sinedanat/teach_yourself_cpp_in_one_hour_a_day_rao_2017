// BUG BUSTERS: What is the problem in the following code:
// class Vehicle
// {
// public:
// Vehicle() {}
// ~Vehicle(){}
// };
// class Car: public Vehicle
// {
// public:
// Car() {}
// ~Car() {}
// };

// Destructor in base class should be virtual.

class Vehicle
{
public:
    Vehicle() {}
    virtual ~Vehicle() {}
};
class Car : public Vehicle
{
public:
    Car() {}
    ~Car() {}
};
