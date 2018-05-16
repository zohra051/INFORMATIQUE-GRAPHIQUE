// HARRAT Zohra  &  DENIS Jimmy

#ifndef SCENE_HPP
#define SCENE_HPP
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <typeinfo>
#include "Objet.hpp"
#include "Source.hpp"
#include "Couleur.hpp"
#include "Materiau.hpp"
#include "Intensite.hpp"
#include "Plan.hpp"
#include "Sphere.hpp"
#include "Rayon.hpp"
#include "Intersection.hpp"
class Scene
{
	private:
		std::vector <Objet*> objets;	//tableau qui contient tout  les objets
		std::vector <Source*> sources;	//tableau qui contient toute les sources
		Couleur * fond;					//conleur de fond de la scène
	public:
		Scene();	//constructeur, scène vide couleur de fond noir
		~Scene();	//destructeur
		Couleur getFond() const;
		void setFond(Couleur * f);	//change la couleur de fond
		void ajouterObjet(Objet * obj);	//ajoute un objet à la scène
		void ajouterSource(Source * src);	//ajoute une source à la scène
		bool intersection(const Rayon& r, Intersection& inter) const;	//routine d'intersection
		void charger(std::string nom);	//charge une scène à partir d'un fichier existant (fichier à mettre dans le meme dossier que l'exécutable)
		void afficher() const;	//affiche tout les élément de la scène
};

#endif
