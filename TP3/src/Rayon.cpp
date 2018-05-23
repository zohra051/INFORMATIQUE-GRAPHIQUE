// HARRAT Zohra  &  DENIS Jimmy


#include <iostream>
#include "Rayon.hpp"

//constructeur par défaut
Rayon::Rayon():
origine(Point(0.0f,0.0f,0.0f)),direction(Vecteur(0.0f,0.0f,0.0f))
{}

//constructeur par paramètre
Rayon::Rayon(Point origine,Vecteur direction):
origine(origine),direction(direction)
{}

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Rayon& r)
{
	os << r.origine <<" -> " <<r.direction;
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Rayon& r)
{
	is >> r.origine >> r.direction;
	return is;
}
