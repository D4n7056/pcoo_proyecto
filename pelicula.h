#include <iostream>
using namespace std;

#ifndef PELICULA_H
#define PELICULA_H

class Pelicula {
    private:
        string nombre;
        string plataforma;
        string descripcion;
        string tipo;
        float calificacion;
        float duracion;

    public:
        Pelicula(string _nombre, string _plataforma, string _descripción, string _tipo, float _calificacion, float _duracion){
            nombre = _nombre;
            plataforma = _plataforma;
            descripcion = _descripción;
            duracion = _duracion;
            tipo = _tipo;
            calificacion = _calificacion;
        }

        void calificar(float calificacion_usuario){
            calificacion = calificacion_usuario;
        }

        void imprime_datos(){
            cout << "NOMBRE: " << nombre << endl;
            cout << "PLATAFORMA: " << plataforma << endl;
            cout << "DESCRIPCIÓN: " << descripcion << endl;
            cout << "TIPO: " << tipo << endl;
            cout << "CALIFICACIÓN: " << calificacion << endl;
            cout << "DURACIÓN: " << duracion << " minutos" << endl;
            cout << "-----------------------\n";
        }

        string get_nombre(){
            return nombre;
        }
        string get_plataforma(){
            return plataforma;
        }
        string get_descripcion(){
            return descripcion;
        }
        float get_calificación(){
            return calificacion;
        }
        float get_duracion(){
            return duracion;
        }

        void set_nombre(string _nombre){
            nombre = _nombre;
        }
        void set_plataforma(string _plataforma){
            plataforma = _plataforma;
        }
        void set_descripcion(string _descripcion){
            descripcion = _descripcion;
        }
        void set_calificacion(float _calificacion){
            calificacion = _calificacion;
        }
        void set_duracion(float _duracion){
            duracion = _duracion;
        }
    };
#endif
