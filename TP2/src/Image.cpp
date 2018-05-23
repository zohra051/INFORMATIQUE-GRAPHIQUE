// HARRAT Zohra  &  DENIS Jimmy


#include "Image.hpp"

//constructeur par défaut, 10 sur 10
Image::Image():
hauteur(10),largeur(10)
{
	//création un tableau de pixel de taille hauteur * largeur donnée
	pixel = new Couleur[hauteur*largeur];
}

//constructeur avec paramètre
Image::Image(int largeur, int hauteur):
largeur(largeur),hauteur(hauteur)
{
	//création un tableau de pixel de taille hauteur * largeur passée en paramètre
	pixel = new Couleur[hauteur*largeur];
}

//destructeur
Image::~Image()
{
	delete []pixel;
}

//obtention de la largeur et de la hauteur
int Image::getLargeur() const
{
	return largeur;
}
int Image::getHauteur() const
{
	return hauteur;
}

//change la couleur du pixel de cordonnée (x,y)
void Image::setPixel(int x, int y, Couleur c)
{
	pixel[y*largeur+x] = c;
}

//récupère la couleur du pixel de cordonnée (x,y)
Couleur Image::getPixel(int x, int y) const
{
	return pixel[y*largeur+x];
}

//sauvegarde l'image sous le format ppm
bool Image::save(std::string nom)
{
	std::ofstream fichier(nom,std::ios::out);

	fichier <<	"P3"<<std::endl;
	fichier << largeur << " " << hauteur<<std::endl;
	fichier << "255"<<std::endl;
	for(int i=0;i<largeur*hauteur;i++)
	{
		fichier << pixel[i].r*255 << " " << pixel[i].g*255 << " "<< pixel[i].b*255<<std::endl;
	}

	return true;

}
