
#include <string>
#include "Livre.h"
#include <iostream>


int main(){

std::cout << "Hello" << std::endl;

Livre l1("Le manufacturier", "Mattias Köping", "Ring");
std::string fullpresentation1 = l1.getFullPresentation();
std::cout << fullpresentation1 << std::endl;

std::string titre = l1.gettitre();
std::cout << titre << std::endl;

std::string auteur = l1.getauteur();
std::cout << auteur << std::endl;

std::string editeur = l1.getediteur();
std::cout << editeur << std::endl;


std::string statutlivre = l1.getstatutlivre();
std::cout << statutlivre << std::endl;




/*
bool statut = l1.getstatut()
std::string statutString = tostring(statut)
std::cout << "Le livre est " << statutString << std::endl;

bool statut = l1.getstatut()
std::string statutString = l1.getstatut()
std::cout << "Le livre est " << statutString << std::endl;

*/

Livre l2("Guerilla 2", "L.O", "Magnus");
std::string fullpresentation2 = l2.getFullPresentation();
std::cout << fullpresentation2 << std::endl;


return 0;


};

