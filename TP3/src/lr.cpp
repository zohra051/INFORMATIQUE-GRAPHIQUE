// HARRAT Zohra  &  DENIS Jimmy


#include <iostream>
#include "Image.hpp"
#include "Camera.hpp"
#include "Scene.hpp"

int main()
{
	//creation de la caméra
	Camera c;
	//création de la scène
	Scene s;
	//création d'une image de 256*256
	Image i(256,256);
	Couleur *vert=new Couleur(0.0,1.0,0.0);
	/* génère l'image fond bleu avec diago blanche et lance des rayons à chaque pixels*/
	s.setFond(vert);
	s.charger("scene02.txt");
	s.afficher();
	c.genererImage(s,i);
	/* écriture du fichier PPM */
	i.save("fond_bleu_diago_blanche.ppm");
	return 0;
}
