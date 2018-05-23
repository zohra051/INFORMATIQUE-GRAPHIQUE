// HARRAT Zohra  &  DENIS Jimmy


#include "Camera.hpp"

Camera::Camera():
position(Point(0,0,2)),centre(Point(0,0,0)),distance(2)
{}

/*obtention de la position, du centre et de la distance de la caméra */
Point Camera::getPosition() const
{return position;}

Point Camera::getCentre() const
{return centre;}

float Camera::getDistance() const
{return distance;}


//genére une image bleu avec une diagonal blanc, lance des rayons (vecteur normalisé) vers les milieux de chaque pixel de l'image
void Camera::genererImage(const Scene& sc, Image& im)
{
	Couleur bleu(0.0,0.0,1.0);
	Couleur blanc(1.0,1.0,1.0);

	//calcule du milieu du pixel de coordonée (0,0)
	float largeur = 2.0f/(float)im.getLargeur();
	float hauteur = 2.0f/(float)im.getHauteur();
	for(float i=0;i<im.getLargeur();i++)
	{
		for(float j=0;j<im.getHauteur();j++)
		{
			//réalisation de l'image
			if(i == j)
				im.setPixel(i,j,blanc);
			else
				im.setPixel(i,j,bleu);

			//calcule du milieu du pixel de coordonnée (i,j)
			float milieuX = largeur * i + largeur/2.0f;
			float milieuY = hauteur * j + hauteur/2.0f;

			Point p = getPosition();	//définision de l'origine du vecteur, qui est la position de notre caméra
			Vecteur v(milieuX-1,-milieuY+1,-distance);	//définition du vecteur, on s'arrange pour que l'image soit centré à l'origine
			v.normaliser();	//on normalise le vecteur
			Rayon r(p,v);	//création du rayon
			if(i == 0 and j == 0)
				std::cout<<r<<'\n';
			if(i == 12 and j == 7)
				std::cout<<r<<'\n';
			if(i == 101 and j == 200)
				std::cout<<r<<'\n';
		}
	}
}
