#include <iostream>
#include "Contact.h"
#include "Coleg.h"
#include "Cunoscut.h"
#include "Prieten.h"
#include "Agenda.h"

int main()
{
    Agenda a;
    a.adaugaContact(new Prieten());
    a.adaugaContact(new Coleg());
    a.adaugaContact(new Cunoscut());
    //a.afiseazaAgenda();
    return 0;
}