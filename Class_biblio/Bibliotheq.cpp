#include "Bibliotheq.h"

Bibliotheq::Bibliotheq(Livre livres, Auteur auteurs, Lecteur lecteur){
	_livres = livres;
	_auteurs = auteurs;
	_lecteurs = lecteurs;
}


void Bibliotheq::livres(){
	return _livres;
}


void Bibliotheq::auteurs(){
	return _auteurs;
}


void Bibliotheq::lecteurs(){
	return _lecteurs;
}

void Bibliotheq::add_livres(Livre a){
	list_livres.push.back(a);
}