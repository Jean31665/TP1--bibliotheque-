#include<iostream>
#include "Date.h"
#include "Livre.h"
#include "Auteur.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheq.h"

int main(){
	Date d(05, 06, 2022);
	Auteur JK("Rowling","Joanne","01", d);
	Date d2(05, 06, 1892);
	Auteur JRR("Tolkien","John","02", d2);
	Date d3(05, 06, 1905);
	Auteur WS("William","Shakespeare","03", d3);
	Date NaissanceSA(5,31,1948);
	Auteur SA("Svetlana","Alexievitch","04", NaissanceSA);
	Date NaissanceM(1,1,1622);
	Auteur M("Jean","Molière","05", NaissanceM);
	Date dRC(05, 05, 1965);
	Auteur RC("Rob","Cohen","06", dRC);
	Date dLM(02, 21, 1983);
	Auteur LM("Rob","Cohen","07", dLM);

	Date date(05, 02, 2023);

	Date Dff(11,29,2011);
	Livre FF5("Fast and Furious 5",RC, "Anglais", "Action/course", Dff, "Ailes du griffon" ,01, false);
	Date Dhp(12,12,2003);
	Livre HP2("Harry Potter 2",JK, "Français", "Magie", Dhp, "La cle" ,02, true);
	Date Publi(7,8,2020);
	Livre HP3("Harry Potter 3",JK, "Français", "Magie", Publi, "L'harmattan" ,03, true);
	Date Dr(9,13,2020);
	Livre ROB("La robotique pour les nuls",JRR, "Français", "Magie", Dr, "Ailes de griffon" ,04, true);
	Date Djr(12,12,2020);
	Livre LOTR1("The Lord Of The Rings 1",JRR, "Anglais", "Aventure", Publi, "La cle" ,05, true);
	Date Dj(12,12,2005);
	Livre LOTR2("The Lord Of The Rings 2",JRR, "Anglais", "Aventure", Dj, "L'harmattan" ,06, true);
	Livre LOTR3("The Lord Of The Rings 3",JRR, "Anglais", "Aventure", Publi, "La cle" ,07, true);
	Livre HAM("Hamlet",WS, "Anglais", "Théâtre", Publi, "L'ESIREM" ,8, true);
	Livre SUP("La Supplication",SA, "Russe", "Essai", Publi, "L'ESIREM" ,9, false);
	Livre MI("Le Malade imaginaire",M, "Français", "Comédie", Publi, "L'ESIREM" ,10, false);
	std::vector<Livre> livres = {FF5, HP2, HP3, ROB, LOTR1, LOTR2, LOTR3, HAM, SUP, MI};

	std::vector<Livre> emprunte= {SUP, FF5};
	Lecteur CD("78436", "Durupt", "Clemence",emprunte);
	std::vector<Livre> emprunte2= {MI,LOTR3};
	Lecteur CS("46163", "casen", "simo",emprunte2);
	std::vector<Lecteur> lecteurs = {CD, CS};

	Emprunt E1(FF5, CD, date);
	Emprunt E2(SUP, CD,date);
	Emprunt E3(ROB, CS, date);
	Emprunt E4(MI, CS, date);
	std::vector<Emprunt> emprunts= {E1, E2, E3, E4};
	std::vector<Auteur> auteurs= {LM, SA, JK, WS};

	Bibliotheq Biblio(livres, lecteurs, auteurs, emprunts);

// Vérification
	Date da(05, 06, 2022);
	std::cout << HP2 << JK << CD << std::endl;
	Biblio.emprunt(HP2, CD,da);
	std::cout << HP2 << JK << CD << std::endl;

	return 0;
}