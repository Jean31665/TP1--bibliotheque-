

#include "Auteur.h"
#include <iostream>

Auteur::Auteur(int identifiantnumerique, std::string nom,
std::string prenom, std::string datedenaissance) :

_identifiantnumerique(identifiantnumerique),
_nom(nom), _prenom(prenom), _datedenaissance(datedenaissance) {
};


int Auteur::getIdentifiantNumerique() {
        return {_identifiantnumerique};
};

std::string Auteur::getnom() {
	return {_nom};
};

std::string Auteur::getprenom() {
        return {_prenom};
};

std::string Auteur::getDatedeNaissance() {
        return {_datedenaissance};
};

std::string Auteur::getFullPresentation() {
        return "Auteur : " + std::to_string(_identifiantnumerique)
+ " " + _nom + " " + _prenom + " " + _datedenaissance;

};

