// alumno: Daniela Iliana Rivera García
// matricula: A07107056
#ifndef BOTONES_H
#define BOTONES_H

#include <iostream>
#include "producto.h"

using namespace std;

// Clase Botones heredada de Producto
class Botones : public Producto {
private:
    // Variable privada
    string temaBoton;

public:
    // Constructor por defecto
    Botones() : Producto() {
        temaBoton = "Botanica";
    }

    /**
     * Constructor con parámetros para inicializar un botón.
     * tema es el tema relacionado con el botón.
     * cantidad es la cantidad de botones.
     * tamano para los tipos de tamaño del botón.
     * descripcion es la descripción breve del botón.
     * precioUnitario1 es el precio para el tamaño tipo 1.
     * precioUnitario2 es el precio para el tamaño tipo 2.
     * precioUnitario3 es el precio para el tamaño tipo 3.
     */
    Botones(string tema, int cantidad, int tamano, string descripcion, 
            float precioUnitario1, float precioUnitario2, float precioUnitario3) 
        : Producto(cantidad, tamano, descripcion, precioUnitario1, precioUnitario2, precioUnitario3) {
        temaBoton = tema;
    }

    /**
     * Obtiene el tema del botón.
     * return tema del botón.
     */
    string getTema() {
        return temaBoton;
    }

    /**
     * Establece el tema del botón.
     * return tema asignado.
     */
    void setTema(string tema) {
        temaBoton = tema;
    }
};

#endif
