// alumno: Daniela Iliana Rivera García
// matricula: A07107056
#ifndef DIBUJOS_H
#define DIBUJOS_H

#include <iostream>
#include "producto.h"

using namespace std;

// Clase Dibujos heredada de Producto
class Dibujos : public Producto {
private:
    // Variables privadas
    string materialDibujo;
    string estiloDibujo;

public:
    // Constructor por defecto
    Dibujos() : Producto() {
        materialDibujo = "Acuarela";
        estiloDibujo = "Tradicional";
    }

    /**
     * Constructor con parámetros para inicializar un dibujo.
     * material es el material utilizado para el dibujo.
     * estilo etilo en el que se relizara el dibujo.
     * cantidad es la cantidad de dibujos.
     * tamano es el tamaño del dibujo.
     * descripcion es una breve descripción del dibujo.
     * precioUnitario1 es el precio para el tamaño tipo 1.
     * precioUnitario2 es el precio para el tamaño tipo 2.
     * precioUnitario3 es el precio para el tamaño tipo 3.
     */
    Dibujos(string material, string estilo, int cantidad, int tamano, string descripcion, 
            float precioUnitario1, float precioUnitario2, float precioUnitario3) 
        : Producto(cantidad, tamano, descripcion, precioUnitario1, precioUnitario2, precioUnitario3) {
        materialDibujo = material;
        estiloDibujo = estilo;
    }

    /**
     * Obtiene el material utilizado para el dibujo.
     * return material utilizado en el dibujo.
     */
    string getMaterial() {
        return materialDibujo;
    }

    /**
     * Obtiene el estilo del dibujo.
     * return estilo del dibujo.
     */
    string getEstilo() {
        return estiloDibujo;
    }

    /**
     * Establece el material del dibujo.
     * establece el material del dibujo.
     */
    void setMaterial(string material) {
        materialDibujo = material;
    }

    /**
     * Establece el estilo del dibujo.
     * establece el estilo del dibujo.
     */
    void setEstilo(string estilo) {
        estiloDibujo = estilo;
    }
};

#endif
