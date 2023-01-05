#include<iostream>
#include<string>
#include<vector>


class Lecteur{
public:
	Lecteur(int gender, std::string id, std::string firstname, std::string lastname);
	std::string fullname();
	void display();
	

private:
	int _gender;
	std::string _id;
	std::string _firstname;
	std::string _lastname;
	std::vector<int> ISBNlivres;

};