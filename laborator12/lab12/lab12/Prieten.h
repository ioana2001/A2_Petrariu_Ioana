#pragma once

#include "tipContact.h"
#include "Contact.h"

class Prieten : public Contact {
protected:
	std::string data;
	std::string tel;
	std::string adresa;
public:
	Prieten() {
		nume = "Andrei";
		data = "1.1.2000";
		tel = "0678";
		adresa = "strada 21";
	}
	tipContact getType() {
		return prieten;
	}
};