#pragma once
#include <iostream>
#include <string>
#include "Date.h"


class Auteur {
public:
	Auteur (std::string nom,std::string id_num, std::string prenom, Date dat_nais);
		std::string nom() const;
		std::string prenom() const;
		std::string id_num() const;
		Date dat_nais() const;

private:
		std::string _id_num;
		std::string _nom;
		std::string _prenom;
		Date _dat_nais;
};

std::string Nom(Auteur auteur);
std::ostream &operator << (std::ostream &out, Auteur &auteur);