// class D2 inherits from class D1, which inherits from class Base.
// To keep D2 from accessing the public members in Base,
// what access specifier would you use and where would you use it?

// private

class Base {};

class D1 : private Base {};

class D2 : public D1 {};
