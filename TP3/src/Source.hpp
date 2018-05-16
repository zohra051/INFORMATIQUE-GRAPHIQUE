// HARRAT Zohra  &  DENIS Jimmy


#ifndef SOURCE_HPP
#define SOURCE_HPP
#include <iostream>
#include "Point.hpp"
#include "Intensite.hpp"
class Source
{
	private:
		Point position;		//point d'origine de la source
		Intensite intensite;	//couleur et intensité de la source
	public:
		Source();	//constructeur par défaut, position à l'origine et intensité de (1,1,1)
		Source(Point position, Intensite intensite);	//constructeur par paramètre
		Point getPosition() const;			//getter position
		Intensite getIntensite() const;		//getter intensité
		void afficher() const;	//fonction d'affichage de pointeur
		friend std::ostream& operator<<(std::ostream& os,const Source& src);	//opérateur sortie
		friend std::istream& operator>>(std::istream& is,Source& src);		//opérateur entrée

};



#endif
