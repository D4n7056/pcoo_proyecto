// alumno: Daniela Iliana Rivera García
// matricula: A07107056
#ifndef STICKER_H
#define STICKER_H

#include <iostream>
#include "producto.h"

using namespace std;

/**
 * Clase Sticker que hereda de Producto.
 */
class Sticker : public Producto {
private:
    // Atributo privado
    string estiloSticker;

public:
    /**
     *  Constructor por defecto. 
     * Inicializa con valores predeterminados.
     */
    Sticker() : Producto() {
        estiloSticker = "Tradicional";
    }

    /**
     * Constructor con parámetros.
     * estilo del sticker.
     * cantidad de stickers.
     * tamano del sticker.
     * descripcion del sticker.
     * precio1 precio para tamaño 1.
     * precio2 precio para tamaño 2.
     * precio3 precio para tamaño 3.
     */
    Sticker(string estilo, int cantidad, int tamano, string descripcion, 
            float precio1, float precio2, float precio3) 
        : Producto(cantidad, tamano, descripcion, precio1, precio2, precio3) {
        estiloSticker = estilo;
    }

    /**
     * Obtiene el estilo del sticker.
     * return estilo del sticker.
     */
    string getEstilo() {
        return estiloSticker;
    }

    /**
     * Establece el estilo del sticker.
     * estilo nuevo del sticker.
     */
    void setEstilo(string estilo) {
        estiloSticker = estilo;
    }
};

#endif
