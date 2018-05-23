// HARRAT Zohra  &  DENIS Jimmy


#include "Source.hpp"

//constructeur par défaut, position à l'origine et intensité de (1,1,1)
Source::Source():
position(Point()),intensite(Intensite(100,100,100))
{}

//constructeur par paramètre
Source::Source(Point position,Intensite intensite):
position(position),intensite(intensite)
{}

//getter position
Point Source::getPosition() const
{return position;}

//getter intensité
Intensite Source::getIntensite() const
{return intensite;}

//fonction d'affichage de pointeur
void Source::afficher() const
{
	//on a pas réussie à faire fonctionner l'opérateur << sur un pointeur, on utilise donc une fonction intermédiaire
	std::cout<<*this<<'\n';
}

//opérateur sortie
std::ostream& operator<<(std::ostream& os,const Source& src)
{
	os <<"Source en "<<src.getPosition()<<" d'intensité "<<src.getIntensite()<<".";
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Source& src)
{
	is >> src.position >> src.intensite;
	return is;
}
