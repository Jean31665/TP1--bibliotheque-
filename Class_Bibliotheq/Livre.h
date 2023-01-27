#pragma once
#include<iostream>
#include <string>
#include "Date.h"
#include "Auteur.h"
#include <vector>


class Livre {
	public :
		Livre(std::string titre,Auteur auteur,std::string langue, std::string genre,
			Date dat_public,std::string editeur, int isbn, bool status);
		std::string titre() const;
		Auteur auteur() const;
		std::string langue() const;
		std::string genre() const;
		Date dat_public() const;
		std::string editeur() const;
		int isbn();
		void id_lecteur();
		bool status();
		std::string statut();

		void update_titre(std::string titre);
		void update_auteur(Auteur auteur);
		void update_langue(std::string langue);
   		void update_genre(std::string genre);
   		void update_isbn(int isbn);
   		void update_dat_public(Date dat_public);
   		void update_status(bool status);
	

	private :

		std::string _titre;
		Auteur _auteur;
		std::string _langue;
		std::string _genre;
		Date _dat_public;
		std::string _editeur;
		int _isbn;
		bool _status;
		std::vector<int> _id_lecteur;
		
		//Le statut du livre doit apparaitre
		//si il est empruntable ou pas
};

std::string Liste(Livre l);
std::string Affichage(Livre d);
bool operator==(Livre const& l1, Livre const& l2);

std::ostream& operator <<(std::ostream& os, Livre& l1);
