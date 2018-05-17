// HARRAT Zohra  &  DENIS Jimmy


#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

class Point
{
	public:
		//cordonnées du point
		float x;
		float y;
		float z;

		Point(); //constructeur par défaut, point à l'origine
		Point(float x,float y,float z);	//constructeur par paramètre
		Point(const Point& p);
		friend std::ostream& operator<<(std::ostream& os,const Point& p); //opérateur de sortie
		friend std::istream& operator>>(std::istream& is,Point& p); //opérateur d'entrée
};



#endif
