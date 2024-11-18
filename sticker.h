#include <iostream>
using namespace std;

#ifndef STICKER_H
#define STICKER_H

class Sticker {
    private:
        int cantidad; 
        int tamano; 
        string descripcion;
    
    public: 
        Sticker(){
           cantidad = 5;
           tamano = 1;
           descripcion = "imagen impresa en papel adhesivo";
        }

        Sticker(int _cantidad, int _tamano, string _descripcion){
            cantidad = _cantidad;
            tamano = _tamano;
            descripcion = _descripcion;
        }

        void imprime_datos(){
            cout << "CANTIDAD: " << cantidad << endl;
            cout << "TAMAÑO: " << tamano << endl;
            cout << "DESCRIPCION: " << descripcion << endl;
            cout << "-----------------------\n";
        }
        void calcular_precio(int cantidad, int tamano){
            float precio;
            if (tamano = 1){
                precio = 5*cantidad;
            }
            else{
                if (tamano = 2){
                    precio = 10*cantidad;
                }
                else{
                    if (tamano = 3){
                        precio = 15*cantidad;
                    }
                    else{
                        cout << "valor no valido";
                    }
                }
            }
        cout << "PRECIO: " << precio << endl;
        cout << "----------------------- \n";
        }

        int get_cantidad(){
            return cantidad;
        }
        int get_tamano(){
            return tamano;
        }
        string get_descripcion(){
            return descripcion;
        }

        void set_cantidad(int _cantidad){
            cantidad = _cantidad;
        }
        void set_tamano(int _tamano){
            tamano = _tamano;
        }
        void set_descripcion(string _descripcion){
            descripcion = _descripcion;
        }
};
#endif
