// HARRAT Zohra  &  DENIS Jimmy


#ifndef SPHERE_HPP
#define SPHERE_HPP
#include <iostream>
#include "Objet.hpp"
#include "Point.hpp"
#include "Materiau.hpp"
#include "Rayon.hpp"
#include "Intersection.hpp"
#include <cmath>
class Sphere : public Objet
{
	private:
	
		Point centre;	//centre de la sphère
		float rayon;	//rayon de la sphère
	public:
		Sphere(); //constructeur par défaut, sphère à l'origine de rayon 1
		Sphere(Materiau materiau, Point centre, float rayon); // constructeur par paramètre
		Point getCentre() const;	//getter centre
		float getRayon() const;		//getter rayon
		bool intersection(const Rayon& r, Intersection& inter) const;	//routine d'intersection, @Objet
		void afficher() const;		//fonction d'affichage par pointeur, @Objet
		friend std::ostream& operator<<(std::ostream& os,const Sphere& s);	//opérateur sortie
		friend std::istream& operator>>(std::istream& is,Sphere& s);	//opérateur entrée
};



#endif
