#pragma once
#include<iostream>
#include<vector>
#include "Date.h"
#include "Livre.h"
#include "Auteur.h"
#include "Emprunt.h"
#include "Lecteur.h"

class Bibliotheq{
public:
	Bibliotheq(std::vector<Livre> livres, std::vector<Lecteur> lecteurs,
		std::vector<Auteur> auteurs,std::vector<Emprunt> emprunts);
	std::vector<Livre> livres();
	std::vector<Auteur> auteurs();
	std::vector<Lecteur> lecteurs();
	std::vector<Emprunt> emprunts();

	void add_livres(Livre livre);
	void add_auteurs(Auteur auteur);
	void add_lecteurs(Lecteur lecteur);
	void add_emprunts(Emprunt emprunt);

	void update_livres(Livre livre);
   	void update_lecteurs(Lecteur lecteur);
   	void update_emprunts(Emprunt emprunt);

   	void emprunt(Livre& l, Lecteur& lect, Date d);
   	void restitution(Livre l, Lecteur lect);


private:

	std::vector<Livre> _livres;
	std::vector<Lecteur> _lecteurs;
	std::vector<Auteur> _auteurs;
	std::vector<Emprunt> _emprunts;
};