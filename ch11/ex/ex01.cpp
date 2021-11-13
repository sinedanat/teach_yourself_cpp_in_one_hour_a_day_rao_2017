// Demonstrate an inheritance hierarchy that implements
// the question in Quiz 1 for Circle and Triangle.
// (You are modeling shapes — circle and triangle — and want every shape
// to compulsorily implement functions Area() and Print().
// How would you do it?)

#include <iostream>

const double Pi = 3.1416;

class Shape
{
public:
    virtual double Area() = 0;
    virtual void Print() = 0;
};

class Circle : public Shape
{
public:
    Circle(double newRadius) :
        radius(newRadius) {}
    double Area() override
    {
        return (Pi * radius * radius);
    }

    void Print() override
    {
        std::cout << "Circle ..." << std::endl;
    }

private:
    double radius;
};

class Triangle : public Shape
{
public:
    Triangle(double newBase, double newHeight) :
        base(newBase), height(newHeight) {}
    double Area() override
    {
        return (base * height) / 2;
    }

    void Print() override
    {
        std::cout << "Triangle ..." << std::endl;
    }

private:
    double base;
    double height;
};

int main()
{
    Circle circle(10);
    circle.Print();
    std::cout << "Circle's area: " << circle.Area() << std::endl;

    Triangle triangle(4, 3);
    triangle.Print();
    std::cout << "Triangle's area: " << triangle.Area() << std::endl;

    return 0;
}

// Circle ...
// Circle's area: 314.16
// Triangle ...
// Triangle's area: 6
