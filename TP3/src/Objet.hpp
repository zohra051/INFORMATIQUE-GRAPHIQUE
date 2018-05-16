// HARRAT Zohra  &  DENIS Jimmy


#ifndef OBJET_HPP
#define OBJET_HPP
#include <iostream>
#include "Materiau.hpp"
#include "Rayon.hpp"
#include "Intersection.hpp"

class Objet
{
	protected:
		Materiau materiau;	//matériau de l'objet
	public:
		Objet();	//constructeur par défaut, matériau par défaut
		Objet(Materiau materiau);	//constructeur par paramètre
		Materiau getMateriau() const; //obtenir les informations d'un matériau
		virtual bool intersection(const Rayon& r, Intersection& inter) const = 0;	//routine d'intersection
		virtual void afficher() const =0;	//fonction qui permet d'afficher un objet passer en pointeur
};

#endif
