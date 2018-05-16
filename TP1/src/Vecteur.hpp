// HARRAT Zohra  &  DENIS Jimmy


#ifndef VECTEUR_HPP
#define VECTEUR_HPP
#include <iostream>

class Vecteur
{
	public:
		//direction du vecteur
		float dx;
		float dy;
		float dz;

		Vecteur(); // constructeur par défaut, vecteur nul
		Vecteur(int dx,int dy,int dz);	//constructeur par paramètre
		friend std::ostream& operator<<(std::ostream& os,const Vecteur& v);
		friend std::istream& operator>>(std::istream& is, Vecteur& v);
};



#endif
