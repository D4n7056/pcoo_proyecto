// alumno: Daniela Iliana Rivera García
// matricula: A07107056
#ifndef ARTISTA_H
#define ARTISTA_H

#include <iostream>
#include <vector>
#include "producto.h"

using namespace std;

// Clase Artista
class Artista {
private:
    // Variables privadas
    string nombreArtista;
    string redesSociales;
    vector<Producto> listaProductos;

public:
    // Constructor por defecto
    Artista() {
        nombreArtista = "Anonimo";
        redesSociales = "@usuarioNuevo";
    }

    // Constructor con parámetros
    Artista(string nombre, string redes, vector<Producto> productos) {
        nombreArtista = nombre;
        redesSociales = redes;
        listaProductos = productos;
    }

    /**
     * Metodo para eliminar un producto de la lista de productos del artista.
     * indice es el indice del producto a eliminar.
     * return true si el producto fue eliminado exitosamente.
     */
    bool eliminarProducto(int indice) {
        if (indice >= 0 && indice < listaProductos.size()) {
            listaProductos.erase(listaProductos.begin() + indice);
            return true;
        }
        return false; // El índice es inválido
    }

    /**
     * Agregar un nuevo producto al inventario del artista.
     * cantidad es la cantidad de productos.
     * tamano es el tamaño del producto.
     * descripcion es la descripción breve del producto.
     * precio1 es el precio para el tamaño tipo 1.
     * precio2 es el precio para el tamaño tipo 2.
     * precio3 es el precio para el tamaño tipo 3.
     * return el objeto del producto recién agregado.
     */
    Producto agregarProducto(int cantidad, int tamano, string descripcion, float precio1, float precio2, float precio3) {
        Producto nuevoProducto(cantidad, tamano, descripcion, precio1, precio2, precio3);
        listaProductos.push_back(nuevoProducto);
        return nuevoProducto;
    }

    /**
     * Metodo que muestra la información completa del artista y sus productos.
     */
    void mostrarInformacion() {
        cout << "---------- ARTISTA ----------" << endl;
        cout << "Nombre: " << nombreArtista << endl;
        cout << "Redes Sociales: " << redesSociales << endl;
        cout << "--------- PRODUCTOS ---------" << endl;

        for (Producto& producto : listaProductos) {
            producto.imprimeDatos();
        }
        cout << "-----------------------------\n";
    }

    // Métodos getter
    string getNombre() {
        return nombreArtista;
    }

    string getRedesSociales() {
        return redesSociales;
    }

    vector<Producto> getListaProductos() {
        return listaProductos;
    }
};

#endif
