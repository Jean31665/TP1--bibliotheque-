#include <iostream>
#include <ctime>
#include <string>
#pragma once

class Auteur {
	public :
		Auteur(int identifiantnumerique,
std::string nom, std::string prenom, std::string datedenaissance);


int getIdentifiantNumerique();
std::string getnom();
std::string getprenom();
std::string getDatedeNaissance();
std::string getFullPresentation();

	private :

int _identifiantnumerique;
std::string _nom;
std::string _prenom;
std::string _datedenaissance;

};
