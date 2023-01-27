#include <string>
#include<iostream>
#include "Livre.h"
#include <cassert>

Livre::Livre(std::string titre, Auteur auteur, std::string langue, std::string genre,
	 Date dat_public ,std::string editeur, int isbn ,bool status) :
_titre(titre), _auteur(auteur), _langue(langue), _genre(genre), _dat_public(dat_public),
_editeur(editeur),_isbn(isbn) ,_status(status) {
};



std::string Livre::titre() const {
	return _titre;
};

Auteur Livre::auteur() const{
	return _auteur;
};

std::string Livre::langue() const{
	return _langue;
}

std::string Livre::genre() const{
	return _genre;
}

Date Livre::dat_public() const{
	return _dat_public;
}

std::string Livre::editeur() const{
	return _editeur;
};

int Livre::isbn(){
	return _isbn;
}

bool Livre::status(){
	return _status;
}

void Livre::update_titre(std::string titre) {
    _titre = titre;
}

void Livre::update_genre(std::string genre) {
    _genre = genre;
}

void Livre::update_auteur(Auteur auteur) {
    _auteur = auteur;
}

void Livre::update_langue(std::string langue) {
    _langue = langue;
}

void Livre::update_isbn(int isbn) {
    _isbn = isbn;
}

void Livre::update_dat_public(Date dat_public) {
    _dat_public = dat_public;
}

void Livre::update_status(bool status) {
    _status = status;
}


std::string Liste(std::vector<std::string> l){
   std::string liste_complete("");
   std::vector<std::string>::const_iterator it;
   it = l.begin();
   while(it != l.end()) {
     liste_complete.append(*it);
     liste_complete.append(" ");
     it++;
  }
  return liste_complete;
}

std::string Affichage(Livre li) {
    return(li.titre() + " " + Nom(li.auteur()) + " " + li.langue() + " " 
    	+ li.genre() + " " + toString(li.dat_public()) + " " + std::to_string(li.isbn()));
}


bool operator == (Livre& l1, Livre& l2){
	if (l1.isbn() == l2.isbn()){
		return true;
	}
	else{
		return false;
	}
}

std::ostream& operator << (std::ostream &os, Livre  &l1){
	os << l1.titre() << " " << Nom(l1.auteur()) << " " << l1.langue() << " " 
	<< l1.genre() << " " << toString(l1.dat_public()) << " " << l1.isbn() << " "
	<< " " << l1.status() << std::endl;
	return os;
}
