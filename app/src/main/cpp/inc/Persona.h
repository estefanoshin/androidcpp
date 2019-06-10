#ifndef ANDROIDWORKSPACE_PERSONA_H
#define ANDROIDWORKSPACE_PERSONA_H

#include <iostream>
#include "Fecha.h"

using namespace std;

class Persona : public Fecha {
protected:
    string sNom;
    string sApe;
    bool genero;
    short tipoDoc;
    long numDoc;
    Fecha fNac;

public:
    Persona();

    Persona(string nom, string ape, bool gen);

    Persona(const Persona &);

    ~Persona();
};


#endif //ANDROIDWORKSPACE_PERSONA_H
