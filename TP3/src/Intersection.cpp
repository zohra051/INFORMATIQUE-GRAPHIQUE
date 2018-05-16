#include <iostream>
#include "Point.hpp"
#include "Intersection.hpp"
Intersection::Intersection():
Point(),distance(0)
{}


Intersection::Intersection(const Point& p, Objet* o, const float& t):
Point(p),objet(o),distance(t)
{}


void Intersection::setIntersection(Point& p, float tarte)
{
	x=p.x;
	y=p.y;
	z=p.z;
	distance=tarte;
}

/*

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Intersection& i)
{
	os <<i.origine<<i.objet<<i.distance;
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Intersection& i)
{
	is >> i.origine << i.objet>>i.distance;
	return is;
}
*/
