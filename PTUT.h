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
	float noteRapport;


public:

	PTUT();
	PTUT(string s, Professor* p);
	void addEtudiant(Etudiant*);
	void affiche()const;
	void setNoteRapport(float note);

	float moyenne(float noteRapport, float noteIndividuelle)const;

};