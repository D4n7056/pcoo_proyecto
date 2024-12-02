// alumno: Daniela Iliana Rivera García
// matricula: A07107056
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>

using namespace std;

// Clase Producto base
class Producto {
protected:
    // Atributos protegidos
    int cantidadProducto;
    int tamanoProducto;
    string descripcionProducto;
    float precioUnitario1;
    float precioUnitario2;
    float precioUnitario3;

public:
    // Constructor por defecto
    Producto() {
        cantidadProducto = 1;
        tamanoProducto = 1;
        descripcionProducto = "Producto";
        precioUnitario1 = 5.0;
        precioUnitario2 = 10.0;
        precioUnitario3 = 15.0;
    }

    /**
     * Constructor con parámetros.
     * cantidad del producto.
     * tamano del producto.
     * descripcion del producto.
     * precio1 para tamaño 1.
     * precio2 para tamaño 2.
     * precio3 para tamaño 3.
     */
    Producto(int cantidad, int tamano, string descripcion, float precio1, float precio2, float precio3) {
        cantidadProducto = cantidad;
        tamanoProducto = tamano;
        descripcionProducto = descripcion;
        precioUnitario1 = precio1;
        precioUnitario2 = precio2;
        precioUnitario3 = precio3;
    }

    // Getters
    int getCantidad() {
        return cantidadProducto;
    }
    int getTamano() {
        return tamanoProducto;
    }
    string getDescripcion() {
        return descripcionProducto;
    }
    float getPrecioUnitario1() {
        return precioUnitario1;
    }
    float getPrecioUnitario2() {
        return precioUnitario2;
    }
    float getPrecioUnitario3() {
        return precioUnitario3;
    }

    // Setters
    void setCantidad(int cantidad) {
        cantidadProducto = cantidad;
    }
    void setTamano(int tamano) {
        tamanoProducto = tamano;
    }
    void setDescripcion(string descripcion) {
        descripcionProducto = descripcion;
    }
    void setPrecioUnitario1(float precio1) {
        precioUnitario1 = precio1;
    }
    void setPrecioUnitario2(float precio2) {
        precioUnitario2 = precio2;
    }
    void setPrecioUnitario3(float precio3) {
        precioUnitario3 = precio3;
    }

    /**
     * Calcula el precio total basado en el tamaño y cantidad.
     * return precio total del producto.
     */
    virtual float calcularPrecio() {
        float precio = 0.0;
        if (tamanoProducto == 1) {
            precio = precioUnitario1 * cantidadProducto;
        } else if (tamanoProducto == 2) {
            precio = precioUnitario2 * cantidadProducto;
        } else if (tamanoProducto == 3) {
            precio = precioUnitario3 * cantidadProducto;
        } else {
            cout << "Valor no válido para el tamaño." << endl;
            return 0.0;
        }
        return precio;
    }

    /**
     * Metodo virtual para imprimir los datos del producto.
     */
    virtual void imprimeDatos() {
        cout << "CANTIDAD: " << cantidadProducto << endl;
        cout << "TAMAÑO: " << tamanoProducto << endl;
        cout << "DESCRIPCIÓN: " << descripcionProducto << endl;
        cout << "PRECIO: " << calcularPrecio() << endl;
        cout << "------------------------\n";
    }
};

#endif
