#pragma once
#include <iostream>

#include <string>
#include "Personne.h"



using namespace std;

class Etudiant :public Personne {
private:
	string numEtu;
	string numGroupe;

public:
	Etudiant();
	void affiche();
	Etudiant(string numE, string numG, string n, string p, string e) :Personne(n, p, e), numEtu(numE), numGroupe(numG) {;}
	

	void setNumEtu(string n) { numEtu = n; }
	void setNumGroupe(string p) { numGroupe = p; }
};