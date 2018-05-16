// HARRAT Zohra  &  DENIS Jimmy


#ifndef COULEUR_HPP
#define COULEUR_HPP
#include <iostream>
#include <algorithm>

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
		friend std::istream& operator>>(std::istream& is,Couleur& c);
		friend std::ostream& operator<<(std::ostream& os,const Couleur& c);
};




#endif
