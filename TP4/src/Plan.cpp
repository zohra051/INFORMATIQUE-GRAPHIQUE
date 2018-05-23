// HARRAT Zohra  &  DENIS Jimmy


#include "Plan.hpp"

//constructeur par défaut, plan horizontal passant par O
Plan::Plan():
Objet(),a(0),b(1),c(0),d(0)
{}

//constructeur par paramètre
Plan::Plan(Materiau m,float a, float b, float c, float d):
Objet(m),a(a),b(b),c(c),d(d)
{}

/*obtention des contantes */
float Plan::getA() const
{return a;}

float Plan::getB() const
{return b;}

float Plan::getC() const
{return c;}

float Plan::getD() const
{return d;}

//routine d'intersection, @Objet
bool Plan::intersection(const Rayon& r, Intersection& inter) const
{
/*La valeur de t n'est pas toujours definit: 
 * si le vecteur est parallèle par rapport au plan
 * sinon il y a au moins une intersection */
 
	float A=((a*r.direction.dx)+(b*r.direction.dy)+(c*r.direction.dz));
	if( A == 0)
	{
		return false;
	}
	else
	{
		float t = (-((a*r.origine.x)+(b*r.origine.y)+(c*r.origine.z)+d)/ A);
		 float x = t * r.direction.dx;
		 float y = t * r.direction.dy;
		 float z = t * r.direction.dz;
		 Point p(x,y,z);
		 inter.setIntersection(p,t);
		return true;
	}
	
}

//permet d'afficher lorsque l'on passe par pointeur, @Objet
void Plan::afficher() const
{
	//on a pas réussie à faire fonctionner l'opérateur << sur un pointeur, on utilise donc une fonction intermédiaire
	std::cout<<*this<<'\n';
}

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Plan& p)
{
	os <<"Plan : d'équation " <<p.getA()<<"x + "<<p.getB()<<"y + "<<p.getC()<<"z + "<<p.getD()<<" = 0 ";
	os <<"de matériau ["<<p.getMateriau()<<"]";
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream & is, Plan& p)
{
	is >> p.materiau >> p.a >> p.b >> p.c >> p.d;
	return is;
}

 //Avoir la normale d'un objet par rapport à un point.
Vecteur Plan::getNormale(Point &p)
{
	Vecteur vect(a,b,c);
	vect.normaliser();
	return vect;
	
}
