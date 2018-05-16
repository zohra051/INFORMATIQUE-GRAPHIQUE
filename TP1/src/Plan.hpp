// HARRAT Zohra  &  DENIS Jimmy


#ifndef PLAN_HPP
#define PLAN_HPP
#include <iostream>
#include "Objet.hpp"
#include "Materiau.hpp"
class Plan:public Objet
{
	private:
		//constante de l'équation
		float a;
		float b;
		float c;
		float d;
	public:
		Plan();	//constructeur par défaut, plan horizontal passant par O
		Plan(Materiau m,float a, float b, float c, float d);	//constructeur par paramètre
		float getA() const;
		float getB() const;
		float getC() const;
		float getD() const;
		bool intersection() const; //routine d'intersection, @Objet
		void afficher() const;	//permet d'afficher lorsque l'on passe par pointeur, @Objet
		friend std::ostream& operator<<(std::ostream& os,const Plan& p);
		friend std::istream& operator>>(std::istream& is,Plan& p);
};



#endif
