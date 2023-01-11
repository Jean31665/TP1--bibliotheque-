#include "Lecteur.h"
//#include "Livre.h"

Lecteur::Lecteur(int g, std::string id, std::string f,std::string l){
	_gender=g;
	_id=id;
	_firstname=f;
	_lastname=l;
	
}

std::string Lecteur::fullname(){
	std::string gender;
	if(_gender==1){
		gender = "Mr";
	}
	else{
		gender = "Mme";
	}
	return gender + " " + _id + " (" + _firstname + " " + _lastname +")";
	// a empreinté des livres de numéro d'ISBN:" ISBNlivres.display();
}


void Lecteur:: display()
{
std::vector<int> liste;
liste.push_back(96);
	liste.push_back(85);
    std::cout << liste << std::endl;

}
/*std::string Lecteur::display(){
	std::cout << 
}*/
