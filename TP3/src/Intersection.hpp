#ifndef INTERSECTION_HPP
#define INTERSECTION_HPP
#include "Objet.hpp"
class Intersection : public Point 
{
	private:
		Objet *objet;// objet sur lequel se situe l’intersection
		float distance;// distance param ́etrique par rapport `a l’origine du rayon
	public:
		Intersection();
		Intersection(const Point& p, Objet* o, const float& t);
		~Intersection(){}; // ne pas effacer objet !!!
};

#endif
