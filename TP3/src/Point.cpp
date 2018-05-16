// HARRAT Zohra  &  DENIS Jimmy


#include "Point.hpp"

//constructeur par défaut, point à l'origine
Point::Point():
x(0),y(0),z(0)
{}

//constructeur par paramètre
Point::Point(int x,int y,int z):
x(x),y(y),z(z)
{}

Point::Point(const Point& p):
x(p.x),y(p.y),z(p.z)
{}

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Point& p)
{
	os <<"("<<p.x<<","<<p.y<<","<<p.z<<")";
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Point& p)
{
	is >> p.x >> p.y >> p.z;
	return is;
}
