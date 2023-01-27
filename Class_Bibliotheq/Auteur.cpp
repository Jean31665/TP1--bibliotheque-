#include "Auteur.h"
#include "Date.h"
#include <cassert>


Auteur::Auteur(std::string id_num,std::string nom,std::string prenom,Date dat_nais){
	_nom = nom;
	_prenom = prenom;
	_id_num = id_num;
	_dat_nais = dat_nais;
}

std::string Auteur::nom() const{
	return _nom;
}

std::string Auteur::prenom() const{
	return _prenom;
}

std::string Auteur::id_num() const{
	return _id_num;
}

Date Auteur::dat_nais() const{
	return _dat_nais;
}

std::string Nom(Auteur auteur) {
    return(auteur.nom() + " " + auteur.prenom());
}

std::ostream& operator << (std::ostream &out, Auteur  &auteur){
	out << auteur.nom() << " " << auteur.prenom() << " " <<
	 auteur.id_num() << " " << toString(auteur.dat_nais()) << std::endl;
	return out;
}
