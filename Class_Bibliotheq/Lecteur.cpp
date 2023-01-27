#include "Lecteur.h"
#include <cassert>

Lecteur::Lecteur(std::string id, std::string firstname,std::string lastname,std::vector<Livre> emprunte){
	_id=id;
	_firstname=firstname;
	_lastname=lastname;
	_emprunte=emprunte;
	
}

std::string Lecteur::id() const{
	return _id;
}

std::string Lecteur::firstname() const {
	return _firstname;
}

std::string Lecteur::lastname() const {
	return _lastname;
}

std::vector<Livre> Lecteur::emprunte() const {
	return _emprunte;
}

void Lecteur::update_emprunte(std::vector<Livre> emprunte) {
    _emprunte = emprunte;
}

std::string Lecteur::emp(){
	return _emp;
}


std::string Lecteur::ajout_emprunt(Livre l){
	_emp = l.isbn();
	_emprunte.push_back(l);
	/*std::string emprunt;
	for(auto it = lect.emprunte().begin(); it!=lect.emprunte().end(); ++it){
		emprunt = emprunt + (*it).isbn();
		emprunt = emprunt + " ";
	}*/
	return _emp;
}

std::ostream &operator << (std::ostream &os, Lecteur  &l1){
	os << l1.id() << " " <<l1.firstname() << " " << l1.lastname() << " "
    	<< l1.emp() << std::endl;
	return os;
}