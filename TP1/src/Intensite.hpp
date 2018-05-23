// HARRAT Zohra  &  DENIS Jimmy


#ifndef INTENSITE_HPP
#define INTENSITE_HPP
#include <iostream>

class Intensite
{
	public:
		//trois composante de lumière, valeur toujours positif, d'où le unsigned
		unsigned int ir;
		unsigned int ig;
		unsigned int ib;

		Intensite();	//constructeur par defaut, intensité 0
		Intensite(unsigned int ir, unsigned int ig, unsigned int ib);	//constructeur paramètre
		friend std::ostream& operator<<(std::ostream& os,const Intensite& c);
		friend std::istream& operator>>(std::istream& is,Intensite& c);
};



#endif
