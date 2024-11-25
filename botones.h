#ifndef BOTONES_H
#define BOTONES_H

#include <iostream>
#include "producto.h"
using namespace std;

class Botones : public Producto {
    private:
        string tema;
    
    public: 
        Botones() : Producto(){
           tema = "botanica";
        }
        Botones(string _tema, int _cantidad, int _tamano, string _descripcion, float _precio_unitario_1, float _precio_unitario_2, float _precio_unitario_3 ) :  Producto( _cantidad, _tamano, _descripcion, _precio_unitario_1, _precio_unitario_2, _precio_unitario_3){
            tema = _tema;
        }

        string get_tema(){
            return tema;
        }

        void set_tema(string _tema){
            tema = _tema;
        }
};
#endif
