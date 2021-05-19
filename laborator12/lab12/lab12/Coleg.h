#pragma once

#include "tipContact.h"
#include "Contact.h"

class Coleg : public Contact {
protected:
	std::string tel;
	std::string firma;
	std::string adresa;
public:
	Coleg() {
		nume = "Ana";
		firma = "amazon";
		adresa = "strada 5";
	}
	tipContact getType() {
		return coleg;
	}
};