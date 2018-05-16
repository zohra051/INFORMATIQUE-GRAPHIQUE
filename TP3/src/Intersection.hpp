#ifndef INTERSECTION_HPP
#define INTERSECTION_HPP

class Objet;

class Intersection : public Point 
{
	private:
		Objet *objet;// objet sur lequel se situe l’intersection
		float distance;// distance param ́etrique par rapport `a l’origine du rayon
	public:
		Intersection();
		Intersection(const Point& p, Objet* o, const float& t);
		void setIntersection(Point& p, float tarte);
		~Intersection(){}; // ne pas effacer objet !!!
		
};

#endif
