// Show how a class Polygon, class Triangle, and class Shape
// are related to each other.

class Shape {};

class Polygon : public Shape {};

class Triangle : public Polygon {};
