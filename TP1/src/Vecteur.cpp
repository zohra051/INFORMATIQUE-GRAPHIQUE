// HARRAT Zohra  &  DENIS Jimmy


#include "Vecteur.hpp"

// constructeur par défaut, vecteur nul
Vecteur::Vecteur():
dx(0),dy(0),dz(0)
{}

//constructeur par paramètre
Vecteur::Vecteur(int dx,int dy,int dz):
dx(dx),dy(dy),dz(dz)
{}

std::ostream& operator<<(std::ostream& os,const Vecteur& v)
{
	os <<"("<<v.dx<<","<<v.dy<<","<<v.dz<<")";
	return os;
}

std::istream& operator>>(std::istream& is, Vecteur& v)
{
	is >> v.dx >> v.dy >> v.dz;
	return is;
}
