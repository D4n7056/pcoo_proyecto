#ifndef STICKER_H
#define STICKER_H

#include <iostream>
#include "producto.h"
using namespace std;

class Sticker : public Producto {
    private:
        string estilo;

    public: 
        Sticker(): Producto() {
            estilo = "tradicional";
        }

        Sticker(string _estilo, int _cantidad, int _tamano, string _descripcion, float _precio_unitario_1, float _precio_unitario_2, float _precio_unitario_3 ) :  Producto( _cantidad, _tamano, _descripcion, _precio_unitario_1, _precio_unitario_2, _precio_unitario_3){
            estilo = _estilo;
        }

        string get_estilo(){
            return estilo;
        }

        void set_estilo (string _estilo){
            estilo = _estilo;
        }

};
#endif
