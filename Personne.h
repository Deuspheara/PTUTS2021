#pragma once
#include <string>
using namespace std;

class Personne {
private:
	string nom;
	string prenom;
	string email;

public:
	Personne();
	Personne(string n, string p, string e);
	void affiche();


	string getNom() { return nom; }
	string getPrenom() { return prenom; }
	string getEmail() { return email; }
	void setNom(string n) { nom = n; }
	void setPrenom(string p) { prenom = p; }
	void setEmail(string e) { email = e; }

};


