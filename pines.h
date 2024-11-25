#ifndef PINES_H
#define PINES_H

#include <iostream>
#include "producto.h"
using namespace std;

class Pines : public Producto{
    private:
        string tema;
    
    public: 
        Pines() : Producto(){
           tema = "botanica";
        }

        Pines(string _tema, int _cantidad, int _tamano, string _descripcion, float _precio_unitario_1, float _precio_unitario_2, float _precio_unitario_3 ) :  Producto( _cantidad, _tamano, _descripcion, _precio_unitario_1, _precio_unitario_2, _precio_unitario_3){
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
