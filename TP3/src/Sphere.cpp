// HARRAT Zohra  &  DENIS Jimmy


#include "Sphere.hpp"

//constructeur par défaut, sphère à l'origine de rayon 1
Sphere::Sphere():
Objet(),centre(Point()),rayon(1)
{}

// constructeur par paramètre
Sphere::Sphere(Materiau materiau, Point centre, float rayon):
Objet(materiau),centre(centre),rayon(rayon)
{}

bool Sphere::intersection() const //routine d'intersection, @Objet
{
	return false;
}

//getter centre
Point Sphere::getCentre() const
{return centre;}

//getter rayon
float Sphere::getRayon() const
{return rayon;}

//fonction d'affichage par pointeur, @Objet
void Sphere::afficher() const
{
	//on n'a pas réussie à faire fonctionner l'opérateur << sur un pointeur, on utilise donc une fonction intermédiaire
	std::cout << *this<<'\n';
}

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Sphere& s)
{
	os <<"Sphere : de rayon "<<s.getRayon();
	os <<", de centre "<<s.getCentre();
	os <<"de matériau ["<<s.getMateriau()<<']';
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Sphere& s)
{
	is >> s.centre >> s.rayon;
	return is;
}
