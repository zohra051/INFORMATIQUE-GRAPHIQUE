// HARRAT Zohra  &  DENIS Jimmy


#ifndef VECTEUR_HPP
#define VECTEUR_HPP
#include <iostream>
#include <cmath>
class Vecteur
{
	public:
		//direction du vecteur
		float dx;
		float dy;
		float dz;

		Vecteur(); // constructeur par défaut, vecteur nul
		Vecteur(float dx,float dy,float dz);	//constructeur par paramètre
		void normaliser();	//normalise le vecteur
		Vecteur operator*(float k);
		 Vecteur operator+(const Vecteur& v);
		 Vecteur operator-(const Vecteur& v);
		 float operator*(const Vecteur& v);
		friend std::ostream& operator<<(std::ostream& os,const Vecteur& v);	//opérateur sortie
		friend std::istream& operator>>(std::istream& is, Vecteur& v);	//opérateur entrée
};



#endif
