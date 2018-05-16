// HARRAT Zohra  &  DENIS Jimmy


#include "Materiau.hpp"

//constructeur par défaut, (0.8,0.8,0.8), 0.5, 0.1, 10
Materiau::Materiau():
couleur(Couleur(0.8,0.8,0.8)),kd(0.5),ks(0.1),s(10)
{}

//constructeur paramètre
Materiau::Materiau(Couleur couleur, float kd, float ks, int s)
{
	this->couleur = couleur;
	
	if(kd < 0)
		kd = 0.0f;
	if(kd > 1)
		kd = 1.0f;
	this->kd = kd;
	
	if(ks < 0)
		ks = 0.0f;
	if(ks > 1)
		ks = 1.0f;
	this->ks = ks;

	if(s<1)
		s=1;
	this->s = s; 
}

//setter,permet de prendre en compte la plage des valeurs
void Materiau::setAttibut(Couleur couleur, float kd, float ks, int s)
{
	this->couleur = couleur;
	if(kd < 0)
		kd = 0.0f;
	if(kd > 1)
		kd = 1.0f;
	this->kd = kd;
	
	if(ks < 0)
		ks = 0.0f;
	if(ks > 1)
		ks = 1.0f;
	if(s<1)
		s=1;
	this->s = s; 
}

Couleur Materiau::getCouleur() const
{return couleur;}

float Materiau::getkd() const
{return kd;}

float Materiau::getks() const
{return ks;}

int Materiau::gets() const
{return s;}

std::ostream& operator<<(std::ostream& os,const Materiau& m)
{
	os <<m.getCouleur()<<","<<m.getkd()<<","<<m.getks()<<","<<m.gets();
	return os;
}

std::istream& operator>>(std::istream& is,Materiau& m)
{
	float kd,ks;
	int s;
	Couleur c;
	is >> c >> kd >> ks >> s;
	m.setAttibut(c,kd,ks,s);
	return is;
}
