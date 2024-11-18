#include <iostream>
using namespace std;

#ifndef DIBUJOS_H
#define DIBUJOS_H

class Dibujos {
    private:
        int cantidad; 
        int tamano; 
        string descripcion;
        string material;
        string estilo;
    
    public: 
        Dibujos(){
           cantidad = 5;
           tamano = 1;
           descripcion = "dibujo";
           material = "acuarela";
           estilo = "tradicional";
        }
        
        Dibujos(int _cantidad, int _tamano, string _descripcion, string _material, string _estilo){
            cantidad = _cantidad;
            tamano = _tamano;
            descripcion = _descripcion;
            material = _material;
            estilo = _estilo;
        }

        void imprime_datos(){
            cout << "CANTIDAD: " << cantidad << endl;
            cout << "TAMAÑO: " << tamano << endl;
            cout << "DESCRIPCION: " << descripcion << endl;
            cout << "MATERIAL: " << material << endl;
            cout << "ESTILO: " << estilo << endl;
            cout << "-----------------------\n";
        }

        void calcular_precio(int cantidad, int tamano){
            float precio;
            if (tamano = 1){
                precio = 25*cantidad;
            }
            else{
                if (tamano = 2){
                    precio = 50*cantidad;
                }
                else{
                    if (tamano = 3){
                        precio = 100*cantidad;
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
        string get_material(){
            return material;
        }
        string get_estilo(){
            return estilo;
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
        void set_material(string _material){
            material = _material;
        }
        void set_estilo(string _estilo){
            estilo = _estilo;
        }
};
#endif 
