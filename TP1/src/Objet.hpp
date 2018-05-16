// HARRAT Zohra  &  DENIS Jimmy


#ifndef OBJET_HPP
#define OBJET_HPP
#include <iostream>
#include "Materiau.hpp"

class Objet
{
	protected:
		Materiau materiau;	//matériau de l'objet
	public:
		Objet();	//constructeur par défaut, matériau par défaut
		Objet(Materiau materiau);	//constructeur par paramètre
		Materiau getMateriau() const;
		virtual bool intersection() const = 0;	//routine d'intersection
		virtual void afficher() const =0;	//fonction qui permet d'afficher un objet passer en pointeur
};

#endif
