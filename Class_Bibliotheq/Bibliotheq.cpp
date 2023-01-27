#include "Bibliotheq.h"
#include "Date.h"
#include "Lecteur.h"
#include "Livre.h"
#include "Auteur.h"
#include <cassert>
#include <vector>


Bibliotheq::Bibliotheq(std::vector<Livre> livres,std::vector<Lecteur> lecteurs,
	std::vector<Auteur> auteurs,std::vector<Emprunt> emprunts){
	_livres = livres;
	_auteurs = auteurs;
	_lecteurs = lecteurs;
	_emprunts = emprunts;
}


std::vector<Livre> Bibliotheq::livres(){
	return _livres;
}

std::vector<Auteur> Bibliotheq::auteurs(){
	return _auteurs;
}

std::vector<Lecteur> Bibliotheq::lecteurs(){
	return _lecteurs;
}

std::vector<Emprunt> Bibliotheq::emprunts() {
	return _emprunts;
}

void Bibliotheq::add_livres(Livre Livre){
	_livres.push_back(Livre);
}

void Bibliotheq::add_auteurs(Auteur Auteur){
	_auteurs.push_back(Auteur);
}

void Bibliotheq::add_lecteurs(Lecteur Lecteur){
	_lecteurs.push_back(Lecteur);
}

void Bibliotheq::add_emprunts(Emprunt emprunt){
	_emprunts.push_back(emprunt);

}

void Bibliotheq::emprunt(Livre& l, Lecteur& lect, Date d){

	if(l.status() == true){
		lect.update_emprunte(lect.emprunte());
		lect.emprunte().push_back(l);
		l.update_status(false);
		// Créer et ajouter un emprunt 
		Emprunt emprunt1(l, lect, d);
		add_emprunts(emprunt1);
		
	}
	else{
		std::cout<< "ce livre n'est pas disponible" << std::endl;
	}
}
