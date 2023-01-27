#pragma once
#include <iostream>
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"


class Emprunt {
	public :
		Emprunt(Livre livre, Lecteur lecteur, Date dat_emprunt);
		double livre() const;
		std::string lecteur()const;
		Date dat_emprunt() const;
		void update_date(Date date);
   		void update_id(std::string id_lecteur);

	private :
		double _livre;
		std::string _lecteur;
		Date _dat_emprunt;
};

std::string Affichage_emprunt(Emprunt emprunt);