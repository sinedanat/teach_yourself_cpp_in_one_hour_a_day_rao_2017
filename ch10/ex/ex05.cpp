// BUG BUSTERS: What is the problem in this code:
// class Derived: public Base
// {
// // ... Derived members
// };
// void SomeFunc (Base value)
// {
// // …
// }

// Problem 1 - missing definition of base class Base.
// Problem 2 - slicing problem, i.e.
// if object of derived class
// use as parameter by value in function SomeFunc(...).

class Base {};

class Derived: public Base
{
    // ... Derived members
};

void SomeFunc(Base value)
{
    // …
}
