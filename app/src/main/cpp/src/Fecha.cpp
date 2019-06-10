#include "../inc/Fecha.h"
#include <jni.h>

Fecha::Fecha() {

}

Fecha::Fecha(unsigned int d, unsigned int m, int a) {
    dia = d;
    mes = m;
    anio = a;

    is_ok = esCorrecta(d, m, a);
}

bool Fecha::esValida() {
    return is_ok;
}

unsigned int Fecha::getDia() {
    return dia;
}

unsigned int Fecha::getMes() {
    return mes;
}

int Fecha::getAnio() {
    return anio;
}

int Fecha::difAnios(const Fecha &ff) {
    int diff = ff.anio - anio;

    if (ff.mes < mes || (ff.mes == mes && ff.dia < dia))
        diff--;

    return diff;
}

string Fecha::imprimirFecha() {
    cout << "\n" << int(dia) << "/" << int(mes) << "/" << anio;
    return "\n" + to_string(dia) + "/" + to_string(dia) + "/" + to_string(anio);
}

bool Fecha::cambiarFecha(unsigned int d, unsigned int m, int a) {
    if (esCorrecta(d, m, a)) {
        dia = d;
        mes = m;
        anio = a;
        is_ok = true;
        return true;
    }
    return false;
}

bool Fecha::esCorrecta(unsigned int d, unsigned int m, int a) {
    unsigned int arrayDiasMes[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // el año cero no exite - se pasa del año 1 dC (+1) al 1 aC (-1)
    if (a == 0) return false;

    if (d <= 0 || d > 31) return false;
    if (m <= 0 || m > 12) return false;
    if (m == 2 && d > 29) return false;
    if (arrayDiasMes[m - 1] < d) return false;

    if (m == 2 && d > 28 && !esBisiesto(a)) return false;
    return true;
}

bool Fecha::esBisiesto(int a) {
    if (((a % 4 == 0) || (a % 400 == 0)) && (a % 100 != 0)) return true;
    else return false;
}
