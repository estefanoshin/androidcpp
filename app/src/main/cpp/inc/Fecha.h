#ifndef ANDROIDWORKSPACE_FECHA_H
#define ANDROIDWORKSPACE_FECHA_H

#include <iostream>

using namespace std;

class Fecha {

protected:
    unsigned char dia;
    unsigned char mes;

    /**
     * Años aC / dC
     */
    int anio;

    bool is_ok;

public:
    Fecha();
    ~Fecha();

    /**
     * Constructor día (1~28/29/30/31), mes (1~12) y un año (aaaa).
     * @param d = dia
     * @param m = mes
     * @param a = anio
     */
    Fecha(unsigned int d, unsigned int m, int a);

    unsigned int getDia(); // devuelve el día
    unsigned int getMes(); // devuelve el mes
    int getAnio(); //Nos devuelve el año

    /**
     * determina la diferencia, en años, entre la fecha recibida y la propia del objeto.
     * @param Fecha = objecto Fecha
     * @return
     */
    int difAnios(const Fecha &);

    /**
     * Muestra por pantalla la fecha en formato d/m/a
     * @return
     */
    string imprimirFecha();

    /**
     * Cambia la fecha, si los datos son válidos
     * @param d = dia
     * @param m = mes
     * @param a = anio
     * @return
     */
    bool cambiarFecha(unsigned int d, unsigned int m, int a);

    /**
     * permite saber si los valor corresponden a una fecha válida
     * @param d = dia
     * @param m = mes
     * @param a = anio
     * @return
     */
    static bool esCorrecta(unsigned int d, unsigned int m, int a);

    /**
     * permite saber si un año es o no bisiesto
     * @param a = anio
     * @return
     */
    static bool esBisiesto(int a);

    /**
     * indica si la fecha almacenada es válida, es decir si el objeto ha sido correctamente inicializado
     * @return
     */
    bool esValida();

    /**
     * Retorna la instancia del objeto
     * @return
     */
    Fecha getFecha();

};

#endif //ANDROIDWORKSPACE_FECHA_H
