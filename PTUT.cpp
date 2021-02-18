#include "PTUT.h"
#include "Etudiant.h"

PTUT::PTUT()
{
}

PTUT::PTUT(string s, Professor* p)
{
	sujet = s;
	prof = p;
}

void PTUT::addEtudiant(Etudiant* e)
{
	for (int i = 0; i < 4; i++) {
		if (eListe[i] == nullptr) {
			eListe[i] = e;
			break;
		}
	}
}

void PTUT::affiche() const
{
	cout << "\n_____________________________________________\n";

	std::cout << "Sujet du PTUT :" << sujet << std::endl;
	prof->affiche();

	for (int i = 0; i < 4; i++) {
		if (eListe[i] != nullptr) {
			eListe[i]->affiche();
		}
	}

	cout << "\n_____________________________________________\n";
}

