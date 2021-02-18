

#include <iostream>
#include "Professor.h"
using namespace std;



Professor::Professor()
{
}

void Professor::affiche()
{
	cout << "\n-----------------------------------------\n";
	cout << "Nom simplifiee :" << nomSimplifier << endl;
	Personne::affiche();
	cout << "-----------------------------------------\n";
}
