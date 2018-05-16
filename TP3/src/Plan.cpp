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
{return false;}

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
