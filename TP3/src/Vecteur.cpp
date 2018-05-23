// HARRAT Zohra  &  DENIS Jimmy


#include "Vecteur.hpp"

// constructeur par défaut, vecteur nul
Vecteur::Vecteur():
dx(0),dy(0),dz(0)
{}

//constructeur par paramètre
Vecteur::Vecteur(float dx,float dy,float dz):
dx(dx),dy(dy),dz(dz)
{}

//normalise le vecteur
void Vecteur::normaliser()
{
	float norm = sqrt(pow(dx,2) + pow(dy,2) + pow(dz,2));	//calcule de la norme
	//normalisation
	dx = dx/norm;
	dy = dy/norm;
	dz = dz/norm;
}

//opérateur sortie
std::ostream& operator<<(std::ostream& os,const Vecteur& v)
{
	os <<"("<<v.dx<<","<<v.dy<<","<<v.dz<<")";
	return os;
}

//opérateur entrée
std::istream& operator>>(std::istream& is, Vecteur& v)
{
	is >> v.dx >> v.dy >> v.dz;
	return is;
}
