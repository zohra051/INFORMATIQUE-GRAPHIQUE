// HARRAT Zohra  &  DENIS Jimmy


#include "Couleur.hpp"
#include "Intensite.hpp"
//constructeur par défaut, couleur noire
Couleur::Couleur():
r(0), g(0), b(0)
{}


/* std::clamp(num,min,max)
 * si num est inférieur à min, il retourne min
 * si num est supérieur à max, il retourne max
 * sinon il retourne num
 *
 * if(num < min)
 * 	return min;
 * if(num > max)
 * 	return max;
 * return num
 *
 * ici on s'en sert pour forcer les valeurs à être entre 0 et 1,
 * si on rentre une valeur invalide, la valeur seras soit 0, soit 1
 * 
 * utilisable qu'en c++17, les pc de la fac sont sur c++14, on a dus le refaire
 * */

//constructeur paramètre
Couleur::Couleur(float r, float g, float b)
{
	if(r < 0)
		r = 0.0f;
	if(r > 1)
		r = 1.0f;
	this->r = r;
	
	if(g < 0)
		g = 0.0f;
	if(g > 1)
		g = 1.0f;
	this->g = g;
	
	if(b < 0)
		b = 0.0f;
	if(b > 1)
		b = 1.0f;
	this->b = b;
}

//setter, permet de prendre en comptre la plage des valeurs
void Couleur::setColor(float r, float g, float b)
{
	if(r < 0)
		r = 0.0f;
	if(r > 1)
		r = 1.0f;
	this->r = r;
	
	if(g < 0)
		g = 0.0f;
	if(g > 1)
		g = 1.0f;
	this->g = g;
	
	if(b < 0)
		b = 0.0f;
	if(b > 1)
		b = 1.0f;
	this->b = b;
}

std::ostream& operator<<(std::ostream& os,const Couleur& c)
{
	os <<"("<<c.r<<","<<c.g<<","<<c.b<<")";
	return os;
}

std::istream& operator>>(std::istream& is,Couleur& c)
{
	//on utiliseras setColor, au cas où l'on tente de mettre des valeurs hors de la plage
	float r,g,b;
	is >> r >> g >> b;
	c.setColor(r,g,b);
	return is;
}

//produit d’une couleur par un scalaire
Couleur Couleur::operator*(float k)
{
	float x= r*k;
	float y= g*k;
	float z= b*k;
	return Couleur(x,y,z);
}

//addition de deux vecteurs
Couleur Couleur::operator+=(const Couleur& v)
{
	float x = r + v.r;	
	float y = g + v.g;
	float z = b + v.b;
	return Couleur(x,y,z);
	
}

//addition d’une intensit ́e et d’une couleur
Couleur& Couleur::operator+=(const Intensite& I)
{
	float x = r + I.ir;	
	float y = g + I.ig;
	float z = b + I.ib;
	Couleur caca(x,y,z);
	return caca;
}

//produit, par canal de couleur, entre une couleur et une intensit ́e
Couleur Couleur::operator*(const Intensite& I)
{
	float x = r * I.ir;	
	float y = g * I.ig;
	float z = b * I.ib;
	return Couleur(x,y,z);
}
