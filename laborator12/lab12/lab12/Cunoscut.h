#pragma once

#include "tipContact.h"
#include "Contact.h"

class Cunoscut : public Contact {
protected:
	std::string tel;
public:
	Cunoscut() {
		nume = "Andreea";
		tel = "0123";
	}
	tipContact getType() {
		return cunoscut;
	}
};