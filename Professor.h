
#pragma once
#include <string>
#include "Personne.h"

using namespace std;

class Professor : public Personne {
private:
	string nomSimplifier;

public:
	Professor();
	Professor(string nomS, string n, string p, string e) :Personne(n, p, e) {
		nomSimplifier = nomS;
	}
	void affiche();
};