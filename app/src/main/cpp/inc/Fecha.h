#ifndef ANDROIDWORKSPACE_FECHA_H
#define ANDROIDWORKSPACE_FECHA_H

#include <iostream>

using namespace std;

class Fecha {

protected:
    unsigned char dia;
    unsigned char mes;
    int anio; //Años aC / dC
    bool is_ok;

public:
    //Constructor día (1~28/29/30/31), mes (1~12) y un año (aaaa).
    Fecha(unsigned int d, unsigned int m, int a);

    unsigned int getDia(); // devuelve el día
    unsigned int getMes(); // devuelve el mes
    int getAnio(); //Nos devuelve el año

    //determina la diferencia, en años, entre la fecha recibida y la propia del objeto.
    // fecha recibida -
    int difAnios(const Fecha &);

    //Muestra por pantalla la fecha en formato d/m/a
    string imprimirFecha();

    //Cambia la fecha, si los datos son válidos
    bool cambiarFecha(unsigned int d, unsigned int m, int a);

    // permite saber si los valor corresponden a una fecha válida
    static bool esCorrecta(unsigned int d, unsigned int m, int a);

    // permite saber si un año es o no bisiesto
    static bool esBisiesto(int a);

    // indica si la fecha almacenada es válida, es decir si el objeto ha sido correctamente inicializado
    bool esValida();

};

#endif //ANDROIDWORKSPACE_FECHA_H
