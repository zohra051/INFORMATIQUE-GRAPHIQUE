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
	/* génère l'image fond bleu avec diago blanche et lance des rayons à chaque pixels*/
	c.genererImage(s,i);
	/* écriture du fichier PPM */
	i.save("fond_bleu_diago_blanche.ppm");
	return 0;
}
