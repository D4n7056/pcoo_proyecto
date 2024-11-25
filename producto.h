#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto{
    //atributos
    protected: 
        int cantidad;
        int tamano;
        string descripcion;
        float precio_unitario_1;
        float precio_unitario_2;
        float precio_unitario_3;
    
    //metodos
    public:
        //consturctor por omision
        Producto (){
            cantidad = 1;
            tamano = 1;
            descripcion = "producto";
            precio_unitario_1 = 5;
            precio_unitario_2 = 10;
            precio_unitario_3 = 15;
        }

        //constructor por parametros 
        Producto(int _cantidad, int _tamano, string _descripcion, float _precio_unitario_1,float _precio_unitario_2, float _precio_unitario_3){
            cantidad = _cantidad;
            tamano = _tamano;
            descripcion = _descripcion;
            precio_unitario_1 = _precio_unitario_1;
            precio_unitario_2 = _precio_unitario_2;
            precio_unitario_3 = _precio_unitario_3; 
        }

        //getters
        int get_cantidad(){
            return cantidad;
        }
        int get_tamano(){
            return tamano;
        }
        string get_descripcion(){
            return descripcion;
        }
        float get_precio_unitario_1(){
            return precio_unitario_1;
        }
        float get_precio_unitario_2(){
            return precio_unitario_2;
        }
        float get_precio_unitario_3(){
            return precio_unitario_3;
        }

        //setters
        void set_cantidad(int _cantidad){
            cantidad = _cantidad;
        }
        void set_tamano(int _tamano){
            tamano = _tamano;
        }
        void set_descripcion(string _descripcion){
            descripcion = _descripcion;
        }
        void set_precio_unitario_1(float _precio_unitario_1){
            precio_unitario_1 = _precio_unitario_1;
        }
        void set_precio_unitario_2(float _precio_unitario_2){
            precio_unitario_2 = _precio_unitario_2;
        }
        void set_precio_unitario_3(float _precio_unitario_3){
            precio_unitario_3 = _precio_unitario_3;
        }

        //metodo virtual para calcular el precio total
        virtual float calcular_precio(){
                float precio = 0;
                if (tamano == 1){
                    precio = precio_unitario_1 * cantidad;
                    }

                else if (tamano == 2){
                        precio = precio_unitario_2 * cantidad;
                    }

                else if (tamano == 3){
                            precio = precio_unitario_3 * cantidad;
                    }
                else{
                    cout << "valor no valido" << endl;
                    return 0;
                    }
                return precio;
                }
        virtual void imprime_datos(){
            cout << "CANTIDAD: " << cantidad << endl;
            cout << "TAMAÑO: " << tamano << endl;
            cout << "DESCRIPCION: " << descripcion << endl;
            cout << "PRECIO: " << calcular_precio() << endl;
            cout << "------------------------\n";
            cout << "" << endl;            
        }
        
};

#endif
