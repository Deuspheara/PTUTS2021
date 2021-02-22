#include <iostream>
#include <string>

#include "Etudiant.h"
#include "Professor.h"
#include "PTUT.h"

using namespace std;



int main() {



	Etudiant* etudiant = new Etudiant("1","01254879","Quentin", "Gaillardet","quentin.gaillardet@etu.univ-lyon1.fr");
	Etudiant* etudiant2 = new Etudiant("2", "34343434", "Macron", "Giscard", "marcron@etu.univ-lyon1.fr");
	Etudiant* etudiant3 = new Etudiant("3", "01254879", "Marine", "Lepen", "Marine.Lepen@etu.univ-lyon1.fr");	
	Etudiant* etudiant4 = new Etudiant("4", "23232323", "Jean", "Castex", "Jean.Castex@etu.univ-lyon1.fr");

	etudiant->setNote(18.7);
	etudiant2->setNote(14.7);
	etudiant3->setNote(16.3);
	etudiant4->setNote(19.9);

	Professor professor = Professor("Bte", "Bruno", "tellez", "bruno.tellez@etu.univ-lyon1.fr");
	etudiant->affiche();
	professor.affiche();

	PTUT ptut = PTUT("lego logo", &professor);
	ptut.setNoteRapport(15);

	ptut.addEtudiant(etudiant);
	ptut.addEtudiant(etudiant2);
	ptut.addEtudiant(etudiant3);
	ptut.addEtudiant(etudiant4);

	ptut.affiche();
}