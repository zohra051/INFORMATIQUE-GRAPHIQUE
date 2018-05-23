// HARRAT Zohra  &  DENIS Jimmy


#ifndef IMAGE_HPP
#define IMAGE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include "Couleur.hpp"
class Image
{
	private:
		Couleur *pixel;	//tableau de pixel
		int largeur, hauteur;	//hauteur et largeur de l'image
	public:
		Image();	//constructeur par défaut, 10 sur 10
		Image(int largeur,int hauteur);	//constructeur avec paramètre
		~Image();	//destructeur

		//obtention de la largeur et hauteur
		int getLargeur() const;
		int getHauteur() const;

		void setPixel(int x, int y, Couleur c);	//change la couleur du pixel de cordonnée (x,y)
		Couleur getPixel(int x, int y) const;	//récupère la couleur du pixel de cordonnée (x,y)

		bool save(std::string nom);	//sauvegarde l'image sous le format ppm
};

#endif
