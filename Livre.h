
#include <string>
#pragma once

class Livre {
	public :
		Livre(std::string titre, std::string auteur, std::string editeur);


/*
std::string gettitre();
std::string getauteur();
std::string getediteur();
std::string getFullPresentation(std::string titre, std::string auteur, std::string editeur);
bool statutlivre();

*/

	private :

		std::string _titre;
		std::string _auteur;
		std::string _editeur;
		bool _statutlivre;
//Le statut du livre doit apparaitre si il est empruntable ou pas
};


