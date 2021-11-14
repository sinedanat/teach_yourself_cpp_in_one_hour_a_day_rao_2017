// BUG BUSTERS: What is the problem in the following code?
// void DoSomething(Base* objBase)
// {
// Derived* objDer = dynamic_cast<Derived*>(objBase);
// objDer->DerivedClassMethod();
// }

// Problem with missing check for validity of dynamic_cast.

#include <iostream>

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    void DerivedClassMethod()
    {
        std::cout << "Doing something ..." << std::endl;
    }
};

void DoSomething(Base* objBase)
{
    Derived* objDer = dynamic_cast<Derived*>(objBase);

    if (objDer)
    {
        objDer->DerivedClassMethod();
    }
}

int main()
{
    Base* base = new Derived;

    DoSomething(base);

    delete base;
    base = nullptr;

    return 0;
}

// Doing something ...
