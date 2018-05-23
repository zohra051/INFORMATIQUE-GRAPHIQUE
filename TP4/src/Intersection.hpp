#ifndef INTERSECTION_HPP
#define INTERSECTION_HPP
#include "Vecteur.hpp"
class Objet;

class Intersection : public Point 
{
	private:
		Objet *objet;// objet sur lequel se situe l’intersection
		float distance;// distance param ́etrique par rapport `a l’origine du rayon
	public:
		Intersection();
		Intersection(const Point& p, Objet* o, const float& t);
		Objet* getObjet() const;
		float getDistance() const;
		Vecteur getNormale(); //Avoir la normale d'un objet par rapport à un point.
		void setObjet(Objet* obj);
		void setIntersection(Point& p, float tarte);
		~Intersection(){}; // ne pas effacer objet !!!
		
};

#endif
