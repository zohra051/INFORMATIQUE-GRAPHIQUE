// HARRAT Zohra  &  DENIS Jimmy


#include "Intensite.hpp"

//constructeur par defaut, intensité 0
Intensite::Intensite():
ir(0),ig(0),ib(0)
{}

//constructeur paramètre
Intensite::Intensite(unsigned int ir, unsigned int ig, unsigned int ib):
ir(ir),ig(ig),ib(ib)
{}

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Intensite& c)
{
	os <<"("<<c.ir<<","<<c.ig<<","<<c.ib<<")";
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Intensite& c)
{
	is >> c.ir >> c.ig >> c.ib;
	return is;
}
