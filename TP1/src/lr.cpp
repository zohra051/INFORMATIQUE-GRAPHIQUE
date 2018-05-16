// HARRAT Zohra  &  DENIS Jimmy


#include <iostream>
#include "Point.hpp"
#include "Vecteur.hpp"
#include "Couleur.hpp"
#include "Materiau.hpp"
#include "Intensite.hpp"
#include "Sphere.hpp"
#include "Plan.hpp"
#include "Source.hpp"
#include "Scene.hpp"

int main()
{
	/*
	Point p(2,4,6);
	std::cout<<p<<'\n';
	Vecteur v(1,3,5);
	std::cout<<v<<'\n';
	Couleur c1(0.5,0.6,0.7);
	std::cout<<c1<<'\n';
	Materiau m(c1,0.4,0.8,50);
	Intensite i(10,20,40);
	std::cout<<m<<"\n"<<i<<'\n';
	Sphere s(m,p,2.5);
	std::cout<<s<<"\n";
	Plan pl(m,1,4,3.5,8);
	std::cout<<pl<<'\n';
	Source src(p,i);
	std::cout<<src<<'\n';*/

	/*
	Scene scene;
	Materiau mat1(Couleur(0.2,0.4,0.6), 0.5, 0.3, 10);
	scene.ajouterObjet(new Plan(mat1,0,1,0,0));
	scene.ajouterObjet( new Sphere(mat1 ,Point(0,0,-3) ,0.5) );
	scene.ajouterSource( new Source(Point(0,10,0) , Intensite(2,2,2)) );
	scene.setFond(new Couleur(0.5,0.5,0.5));
	scene.afficher();*/

	Scene scene;
	scene.charger("../scene01.txt");
	scene.afficher();
	return 0;
}
