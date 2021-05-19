#pragma once

#include "tipContact.h"
#include "Contact.h"
#include "Prieten.h"
#include <iostream>
#include <string>
#include <vector>

class Agenda {
private:
	std::vector<Contact*> contacte;
public:
	int CautaContact(std::string name) {
		for (int i = 0; i < contacte.size(); i++) {
			if (name == contacte[i]->nume) {
				return i;
			}
		}
	}
	std::vector<Prieten*> listaPrieteni() {
		std::vector<Prieten*> v;
		for (int i = 0; i < contacte.size(); i++) {
			if (contacte[i]->getType() == prieten)
				v.push_back((Prieten*)contacte[i]);
		}
		return v;
	}
	void stergeContact(std::string name) {
		std::vector<Contact*>::iterator it = contacte.begin();
		for (int i = 0; i < contacte.size(); i++) {
			if (name == contacte[i]->nume) {
				contacte.erase(it);
			}
			it++;
		}
	}
	void adaugaContact(Contact *c) {
		contacte.push_back(c);
	}
	/*void afiseazaAgenda() {
		for (int i = 0; i < contacte.size(); i++)
			std::cout << contacte[i]->nume << std::endl;
	}*/
};