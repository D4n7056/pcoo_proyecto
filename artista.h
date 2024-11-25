#ifndef ARTISTA_H
#define ARTISTA_H

#include <iostream>
#include <vector>
#include "producto.h"
using namespace std;

class Artista{
    private: 
        string nombre;
        string redes;
        vector <Producto> productos;
    public:
        Artista(){
            nombre = "anonimo";
            redes = "@usuario_nuevo";
        }

        Artista(string _nombre, string _redes, vector <Producto> _productos){
            nombre = _nombre;
            redes = _redes;
            productos = _productos;
        }

        bool eliminar_producto(int indice){
            productos.erase(productos.begin() + indice);
            return true;
        }

        Producto agregar_producto(int cantidad,int tamano, string descripcion, float precio_1, float precio_2, float precio_3){
            Producto nuevo(cantidad, tamano, descripcion, precio_1, precio_2, precio_3);
            productos.push_back(nuevo);
            return nuevo;
        }

        void mostrar_informacion() {
        cout << "----------ARTISTA----------" << endl;
        cout << "NOMBRE: " << nombre << endl;
        cout << "REDES: " << redes << endl;
        cout << "" << endl;
        cout << "---------PRODUCTOS---------" << endl;
        for (Producto& producto : productos) {
                producto.imprime_datos();
            }
        cout << "----------------------------\n";
    }

    string get_nombre(){
    return nombre;
    }

    string get_redes(){ 
        return redes; 
    }
    vector<Producto> get_productos(){ 
        return productos; 
    }
};
#endif
