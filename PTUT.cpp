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
	cout << "_____________________________________________\n";

	std::cout << "Sujet du PTUT :" << sujet << std::endl;
	std::cout << "Note du groupe pour le rapport: " << noteRapport <<"/20"<< std::endl;
	prof->affiche();

	for (int i = 0; i < 4; i++) {
		if (eListe[i] != nullptr) {
			eListe[i]->affiche();
			cout << "note individuelle: " << eListe[i]->getNote() << endl;
			cout << "Moyenne: " <<moyenne(noteRapport,eListe[i]->getNote())<<"/20"<< endl;
			cout << "-----------------------------------------\n";
		}
	}

	cout << "\n_____________________________________________\n";
	cout << "_____________________________________________\n";
}


void PTUT::setNoteRapport(float note)
{
	noteRapport = note;
}

float PTUT::moyenne(float noteRapport, float noteIndividuelle)const
{
	return (noteRapport * 2 + noteIndividuelle) / 3;
}


