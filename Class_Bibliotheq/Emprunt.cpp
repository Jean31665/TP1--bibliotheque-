#include <iostream>
#include <cassert>
#include "Emprunt.h"


Emprunt::Emprunt(Livre livre, Lecteur lecteur, Date date){
	_livre=livre.isbn();
	_lecteur=lecteur.id();
	_dat_emprunt=date;
}

double Emprunt::livre() const{
	return _livre;
}

std::string Emprunt::lecteur() const{
	return _lecteur;
}

Date Emprunt::dat_emprunt() const{
	return _dat_emprunt;
}

void Emprunt::update_id(std::string id_lecteur) {
    _lecteur = id_lecteur;
}
void Emprunt::update_date(Date date) {
    _dat_emprunt = date;
}

std::string Affichage_emprunt(Emprunt emprunt) {
    return(toString(emprunt.dat_emprunt()) + " " + std::to_string(emprunt.livre()) + " " + emprunt.lecteur());
}