#ifndef DIBUJOS_H
#define DIBUJOS_H

#include <iostream>
#include "producto.h"
using namespace std;

class Dibujos : public Producto {
    private:
        string material;
        string estilo;
    
    public: 
        Dibujos() : Producto(){
           material = "acuarela";
           estilo = "tradicional";
        }
        
        Dibujos(string _material, string _estilo, int _cantidad, int _tamano, string _descripcion, float _precio_unitario_1, float _precio_unitario_2, float _precio_unitario_3 ) :  Producto( _cantidad, _tamano, _descripcion, _precio_unitario_1, _precio_unitario_2, _precio_unitario_3){
            material = _material;
            estilo = _estilo;
        }

        string get_material(){
            return material;
        }
        string get_estilo(){
            return estilo;
        }

        void set_material(string _material){
            material = _material;
        }
        void set_estilo(string _estilo){
            estilo = _estilo;
        }
};
#endif 
