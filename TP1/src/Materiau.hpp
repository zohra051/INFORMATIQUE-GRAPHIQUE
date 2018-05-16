// HARRAT Zohra  &  DENIS Jimmy


#ifndef MATERIAU_HPP
#define MATERIAU_HPP
#include <iostream>
#include <algorithm>
#include <climits>
#include "Couleur.hpp"

class Materiau
{
	private:
		Couleur couleur;	//couleur du matériau
		float kd;			//coefficient de réflexion diffuse, plage entre 0 et 1
		float ks;			//coéfficient de réflexion spéculaire, plage entre 0 et 1
		int s;				//facteur de brillance, valeurs supérieur ou égale à 1
	public:
		Materiau();	//constructeur par défaut, (0.8,0.8,0.8), 0.5, 0.1, 10
		Materiau(Couleur couleur, float kd, float ks, int s);	//constructeur paramètre
		void setAttibut(Couleur couleur, float kd, float ks, int s);	//setter,permet de prendre en compte la plage des valeurs
		Couleur getCouleur() const;
		float getkd() const;
		float getks() const;
		int gets() const;
		friend std::ostream& operator<<(std::ostream& os,const Materiau& m);
		friend std::istream& operator>>(std::istream& is,Materiau& );
};



#endif
