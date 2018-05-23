// HARRAT Zohra  &  DENIS Jimmy


#include "Objet.hpp"

//constructeur par défaut, matériau par défaut
Objet::Objet():
materiau(Materiau())
{}

//constructeur par paramètre
Objet::Objet(Materiau materiau):
materiau(materiau)
{}

Materiau Objet::getMateriau() const
{return materiau;}

