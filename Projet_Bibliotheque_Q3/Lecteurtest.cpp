#include<iostream>
#include "Lecteur.h"


int main(){
	Lecteur L(1,"Dginhac","DOM","Ginhac");
	std::string name = L.fullname();
	/*for (int i=1; i<=3; i++){
	std::cout << "Entrer l'ISBN du livre: L" +i << std::endl;
	int isbn;
	std::cin >> isbn;
	L.ISBNlivres.push_back(25044);
	L.ISBNlivres.push_back(20045);
	L.ISBNlivres.push_back(20864);*/
	std::vector<int> liste;
	

	std::cout << name << ", à empreinter les livres d'ISBN:" << std :: endl;
	L.display();
	/*L.display();<< ", à empreinter les livres d'ISBN:"*/ 
return 0;
}