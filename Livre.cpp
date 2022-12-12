#include <string>
#include "Livre.h"

Livre::Livre(std::string titre, std::string auteur, std::string editeur) :
_titre(titre), _auteur(auteur), _editeur(editeur), _statutlivre(statutlivre) {
};

/*
 statutlivre() {
if (statutlivre = emprunté)
	return  false
	else
	return  true

};
*/



std::string Livre::getstatut() {
	return _statut;
};



std::string Livre::gettitre() {
	return _titre;
};

std::string Livre::getauteur() {
	return _auteur;
};

std::string Livre::getediteur() {
	return _editeur;
};

std::string Livre::getFullPresentation() {
	return _titre + " " + _auteur + " " + _editeur;
};



