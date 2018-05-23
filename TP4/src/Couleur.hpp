// HARRAT Zohra  &  DENIS Jimmy


#ifndef COULEUR_HPP
#define COULEUR_HPP
#include <iostream>
#include <algorithm>
#include "Intensite.hpp"
class Couleur
{
	public:
		//trois composante de couleur, valeur entre 0 et 1
		float r;
		float g;
		float b;

		Couleur();	//constructeur par défaut, couleur noire
		Couleur(const float r, const float g, const float b);	//constructeur paramètre
		void setColor(float r, float g, float b);	//setter, permet de prendre en comptre la plage des valeurs
		friend std::istream& operator>>(std::istream& is,Couleur& c); //opérateur de sortie
		friend std::ostream& operator<<(std::ostream& os,const Couleur& c); //opérateur d'entrée
		Couleur operator*(float k);//produit d’une couleur par un scalaire
		Couleur operator+=(const Couleur& v);//addition de deux vecteurs
		Couleur& operator+=(const Intensite& I);//addition d’une intensit ́e et d’une couleur
		Couleur operator*(const Intensite& I);//produit, par canal de couleur, entre une couleur et une intensit ́e

};




#endif
