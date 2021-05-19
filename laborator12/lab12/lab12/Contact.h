#pragma once

#include "tipContact.h"
#include <iostream>
#include <string>

class Contact {
public:
	std::string nume;
	virtual tipContact getType() = 0;
};