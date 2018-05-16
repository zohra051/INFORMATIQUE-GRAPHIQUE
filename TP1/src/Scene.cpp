// HARRAT Zohra  &  DENIS Jimmy


#include "Scene.hpp"

//constructeur, scène vide couleur de fond noir
Scene::Scene():
fond(new Couleur(0,0,0))
{}

//destructeur
Scene::~Scene()
{
	for(Objet * o:objets)
		delete o;
	for(Source * s:sources)
		delete s;
	delete fond;
}

//change la couleur de fond
void Scene::setFond(Couleur * f)
{
	delete fond;
	fond =f;
}

//ajoute un objet à la scène
void Scene::ajouterObjet(Objet * obj)
{
	objets.push_back(obj);
}

//ajoute une source à la scène
void Scene::ajouterSource(Source * src)
{
	sources.push_back(src);
}

//routine d'intersection
bool Scene::intersection() const
{return false;}

//charge une scène à partir d'un fichier existant (fichier à mettre dans le meme dossier que l'exécutable)
/* syntaxe du fichier:
 * # commentaire de la ligne
 * sphere xc yc zc r
 * plan a b c d
 * source x y z r g b
 * matériau r g b kd ks s
 * fond r g b
 * */
void Scene::charger(std::string nom)
{
	std::ifstream fichier(nom,std::ios::in);	//on charge le fichier
	if(fichier)	//si il s'est bien charger, on passe à la suite
	{
		Materiau m;		//on créer notre matériau, il va marcher par état, c'est à dire que tant qu'on ne le redéfinis pas, tout les objets auront le même matériau
		std::string str;	//création de notre buffer
		do{	//while(!fichier.eof())

			//on utilise un do while, car on veut mettre à jour notre buffer tout à la fin, cela empèche que la dernière ligne de fichier soit lue 2 fois

			if(str == "sphere")	//création d'une sphère
			{
				float xc,yc,zc,r;
				fichier >> xc >> yc >> zc >> r;
				Point p(xc,yc,zc);
				Sphere *s=new Sphere(m,p,r);
				objets.push_back(s);
			}

			if(str =="plan") //création d'un plan
			{
				float a,b,c,d;
				fichier >> a >> b >> c >> d;
				Plan *p=new Plan(m,a,b,c,d);
				objets.push_back(p);
			}

			if(str == "source") //création d'une source
			{
				float x,y,z;
				unsigned int rouge,vert,bleu;
				fichier >> x >> y >> z >> rouge >> vert >> bleu;
				Point p(x,y,z);
				Intensite i(rouge,vert,bleu);
				Source *s= new Source(p,i);
				sources.push_back(s);
			}

			if(str == "materiau") //redéfinition du matériau courant
			{
				float rouge,vert,bleu,kd,ks;
				int s;
				fichier >> rouge >> vert >>bleu >> kd >> ks >>s;
				Couleur c(rouge,vert,bleu);
				m.setAttibut(c,kd,ks,s);
			}

			if(str == "fond")	//définir couleur de fond de la scène
			{
				float rouge,vert,bleu;
				fichier >> rouge >> vert >> bleu;
				Couleur *c=new Couleur(rouge,vert,bleu);
				setFond(c);
			}

			if(str == "#")	//commentaire
			{
				getline(fichier,str);	//permet de passer complétement la ligne
			}

			fichier >> str; // on récupère le 1er mot de la prochaine ligne
		}while(!fichier.eof());
	}
}

//affiche tout les élément de la scène
void Scene::afficher() const
{
	std::cout << "contenu de la scène :\n";
	for (Objet * o:objets)
	{
		o->afficher();	//cout << o;   et cout << *o;   ne fonctionnaient pas, on a créer une fonction intermédiaire
	}
	for (Source * s:sources)
	{
		s->afficher();
	}
	std::cout<<"La couleur de fond est "<<*fond<<'\n';
}

