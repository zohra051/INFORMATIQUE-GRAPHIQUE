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

Point Sphere::getCentre() const
{return centre;}

float Sphere::getRayon() const
{return rayon;}

//fonction d'affichage par pointeur, @Objet
void Sphere::afficher() const
{
	//je n'ai pas réussie à faire fonctionner l'opérateur << sur un pointeur, j'utilise donc une fonction intermédiaire
	std::cout << *this<<'\n';
}

std::ostream& operator<<(std::ostream& os,const Sphere& s)
{
	os <<"Sphere : de rayon "<<s.getRayon();
	os <<", de centre "<<s.getCentre();
	os <<"de matériau ["<<s.getMateriau()<<']';
	return os;
}

std::istream& operator>>(std::istream& is,Sphere& s)
{
	is >> s.centre >> s.rayon;
	return is;
}
