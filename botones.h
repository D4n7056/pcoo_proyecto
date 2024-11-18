#include <iostream>
using namespace std;

#ifndef BOTONES_H
#define BOTONES_H
class Botones {
    private:
        int cantidad; 
        int tamano; 
        string descripcion;
        string tema;
    
    public: 
        Botones(){
           cantidad = 5;
           tamano = 1;
           descripcion = "boton";
           tema = "botanica";
        }
        Botones(int _cantidad, int _tamano, string _descripcion, string _tema){
            cantidad = _cantidad;
            tamano = _tamano;
            descripcion = _descripcion;
            tema = _tema;
        }

        void imprime_datos(){
            cout << "CANTIDAD: " << cantidad << endl;
            cout << "TAMAÑO: " << tamano << endl;
            cout << "DESCRIPCION: " << descripcion << endl;
            cout << "TEMA: " << tema << endl;
            cout << "-----------------------\n";
        }

        void calcular_precio(int cantidad, int tamano){
            float precio;
            if (tamano = 1){
                precio = 15*cantidad;
            }
            else{
                if (tamano = 2){
                    precio = 25*cantidad;
                }
                else{
                    if (tamano = 3){
                        precio = 30*cantidad;
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
        string get_tema(){
            return tema;
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
        void set_tema(string _tema){
            tema = _tema;
        }
};
#endif
