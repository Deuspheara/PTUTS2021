#include <iostream>
#include "PTUT.h"
#include "Etudiant.h"


using namespace std;



Etudiant::Etudiant()
{

}

void Etudiant::affiche() {
	cout << "\n-----------------------------------------\n";
	cout << "numero etudiant :" << numEtu << endl;
	cout << "numero groupe :" << numGroupe << endl;	
	Personne::affiche();

}


