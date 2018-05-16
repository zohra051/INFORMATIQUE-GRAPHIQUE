// HARRAT Zohra  &  DENIS Jimmy


#include "Sphere.hpp"

//constructeur par défaut, sphère à l'origine de rayon 1
Sphere::Sphere():
Objet(),centre(Point()),rayon(1)
{}

// constructeur par paramètre
Sphere::Sphere(Materiau materiau, Point centre, float rayon):
Objet(materiau),centre(centre),rayon(rayon)
{}

bool Sphere::intersection(const Rayon& r, Intersection& inter) const //routine d'intersection, @Objet
{
	float a = pow(r.direction.dx,2) + pow(r.direction.dy,2) + pow(r.direction.dz,2);
	float b = 0.0f;
	float c = pow(r.origine.x,2) + pow(r.origine.y,2) + pow(r.origine.z,2) +  - pow(centre.x,2) - pow(centre.y,2) - pow(centre.z,2) - pow(rayon,2); 
	std::cout << a <<" "<< c<<" ";
	float resultat;
	float resultat1;
	float resultat2;
	
	float determinant = pow(b,2) -(4.0f * a * c);
	std::cout<<determinant<<std::endl;
	
	if(determinant == 0 )
	{
		 resultat = (- b) / ( 2.0f * a);
		 float x = resultat * r.direction.dx;
		 float y = resultat * r.direction.dy;
		 float z = resultat * r.direction.dz;
		 Point p(x,y,z);
		 inter.setIntersection(p,resultat);
		return true;
	}
	if(determinant > 0 )
	{
		
		resultat1 = ( (- b) - sqrt(determinant) ) / (2.0f * a);
		resultat2 = ( (- b) + sqrt(determinant) ) / (2.0f * a);

		if( resultat1 < resultat2)
		{
			float x = resultat1 * r.direction.dx;
			float y = resultat1 * r.direction.dy;
			float z = resultat1 * r.direction.dz;
			Point p(x,y,z);
			inter.setIntersection(p,resultat1);
		}
		else
		{
			float x = resultat2 * r.direction.dx;
			float y = resultat2 * r.direction.dy;
			float z = resultat2 * r.direction.dz;
			Point p(x,y,z);
			inter.setIntersection(p,resultat2);
		}
		return true;
	}	
	
	return false;
}

//getter centre
Point Sphere::getCentre() const
{return centre;}

//getter rayon
float Sphere::getRayon() const
{return rayon;}

//fonction d'affichage par pointeur, @Objet
void Sphere::afficher() const
{
	//on n'a pas réussie à faire fonctionner l'opérateur << sur un pointeur, on utilise donc une fonction intermédiaire
	std::cout << *this<<'\n';
}

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Sphere& s)
{
	os <<"Sphere : de rayon "<<s.getRayon();
	os <<", de centre "<<s.getCentre();
	os <<"de matériau ["<<s.getMateriau()<<']';
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Sphere& s)
{
	is >> s.centre >> s.rayon;
	return is;
}
