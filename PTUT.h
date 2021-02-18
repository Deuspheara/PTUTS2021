#pragma once
#include <iostream>
#include "Professor.h"
#include "Etudiant.h"
using namespace std;

class PTUT {
private:
	string sujet;
	Professor* prof;
	Etudiant* eListe[4] = { nullptr };



public:

	PTUT();
	PTUT(string s, Professor* p);
	void addEtudiant(Etudiant*);
	void affiche()const;
};