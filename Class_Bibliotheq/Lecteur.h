#pragma once
#include<iostream>
#include<string>
#include "Livre.h"
#include "Date.h"
#include<vector>




class Lecteur{
public:
	Lecteur(std::string id, std::string firstname,
		std::string lastname,std::vector<Livre> emprunte);

	std::string firstname() const;
	std::string lastname() const;
	std::string id() const;
	std::vector<Livre> emprunte() const;
   	void update_emprunte(std::vector<Livre> emprunte);
   	std::string ajout_emprunt(Livre l);
   	std::string emp();
	

private:
	std::string _id;
	std::string _firstname;
	std::string _lastname;
	std::string _emp;
	std::vector<Livre> _emprunte;
};

std::ostream &operator << (std::ostream &os, Lecteur  &l1);
