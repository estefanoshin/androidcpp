#include "../inc/Persona.h"

Persona::Persona() {
    this->fNac = Fecha();
}

Persona::Persona(string sNom, string sApe, bool genero) : Fecha::Fecha() {
    this->sNom = sNom;
    this->sApe = sApe;
    this->genero = genero;
    this->fNac = getFecha();
}

Persona::Persona(const Persona &pers) : Fecha::Fecha() {
    this->sNom = pers.sNom;
    this->sApe = pers.sApe;
    this->genero = pers.genero;
    this->fNac = pers.fNac;
}

Persona::~Persona() {

}