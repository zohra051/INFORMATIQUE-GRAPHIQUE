#include <iostream>
#include "Point.hpp"
#include "Intersection.hpp"
Intersection::Intersection():
Point(),distance(0)
{}


Intersection::Intersection(const Point& p, Objet* o, const float& t):
Point(p),objet(o),distance(t)
{}

