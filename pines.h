// alumno: Daniela Iliana Rivera García
// matricula: A07107056
#ifndef PINES_H
#define PINES_H

#include <iostream>
#include "producto.h"

using namespace std;

// Clase Pines heredada de Producto
class Pines : public Producto {
private:
    // Variable privada 
    string temaPines;

public:
    // Constructor por defecto
    Pines() : Producto() {
        temaPines = "Botánica";
    }

    /**
     * Constructor con parámetros para inicializar un pin.
     * tema del pin.
     * cantidad de pines.
     * tamano del pin.
     * descripcion del pin.
     * precioUnitario1 es el precio para el tamaño tipo 1.
     * precioUnitario2 es el precio para el tamaño tipo 2.
     * precioUnitario3 es el precio para el tamaño tipo 3.
     */
    Pines(string tema, int cantidad, int tamano, string descripcion, 
          float precioUnitario1, float precioUnitario2, float precioUnitario3) 
        : Producto(cantidad, tamano, descripcion, precioUnitario1, precioUnitario2, precioUnitario3) {
        temaPines = tema;
    }

    /**
     * Obtiene el tema del pin.
     * return tema del pin.
     */
    string getTema() {
        return temaPines;
    }

    /**
     * Establece el tema del pin.
     * tema asignado al pin.
     */
    void setTema(string tema) {
        temaPines = tema;
    }
};

#endif
