
#include <iostream>
#include "Personne.h"

Personne::Personne()
{
}

Personne::Personne(string n, string p, string e)
{
	nom = n;
	prenom = p;
	email = e;
}

void Personne::affiche()
{
	std::cout<<"Nom :" << nom << std::endl;
	std::cout<<"Prenom :" << prenom << std::endl;
	std::cout<<"Email :" << email << std::endl;
}
