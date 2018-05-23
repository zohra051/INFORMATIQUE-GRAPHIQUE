// HARRAT Zohra  &  DENIS Jimmy


#ifndef RAYON_HPP
#define RAYON_HPP
#include <iostream>
#include "Point.hpp"
#include "Vecteur.hpp"
#include <fstream>
class Rayon
{
	public:
		Point origine;	//origine du vecteur
		Vecteur direction;	//cordonnée du vecteur

		Rayon();	//constructeur par defaut, origine O et vecteur nul
		Rayon(Point origine,Vecteur direction);	//constructeur par paramètre
		friend std::ostream& operator<<(std::ostream& os,const Rayon& r); //opérateur de sortie
		friend std::istream& operator>>(std::istream& is,Rayon& r); //opérateur d'entrée
};

#endif
