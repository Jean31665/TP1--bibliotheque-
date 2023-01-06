#include<iostream>
#include<vector>
#include "Livre.h"
#include "Auteur.h"
#include "Lecteur.h"

class Bibliotheq{
public:
	Bibliotheq(Livre livre, Auteur auteur, Lecteur lecteur);
	void livres();
	void auteur();
	void lecteur();

	void add_livres();
	void add_auteur();
	void add_lecteur();

private:
	Livre _livres;
	Auteur _auteurs;
	Lecteur _lecteurs;
	std::vector<Livre> list_livres;
	std::vector<Auteur> list_auteurs;
	std::vector<Lecteur> list_lecteurs;

};