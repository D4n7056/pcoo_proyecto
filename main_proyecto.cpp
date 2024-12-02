#include <iostream>
#include "sticker.h"
#include "dibujos.h"
#include "botones.h"
#include "pines.h"
#include "artista.h"


using namespace std;

/**
 * Función main para probar las clases de productos y la clase Artista.
 */
int main() {   
    // Crear y usar metodos con un objeto Sticker
    Sticker stickerGato("Tradicional", 1, 1, "Imagen de gato impresa en papel adhesivo", 5, 10, 15);
    stickerGato.calcularPrecio();
    stickerGato.imprimeDatos();

    stickerGato.setCantidad(2);
    stickerGato.setDescripcion("Dibujo de un gato adhesivo");
    stickerGato.setTamano(2);
    stickerGato.calcularPrecio();
    stickerGato.imprimeDatos();

    // Crear y usar metodos con un objeto Dibujos
    Dibujos dibujoPaisaje("Acuarela", "Tradicional", 1, 2, "Dibujo de un paisaje", 25, 50, 100);
    dibujoPaisaje.calcularPrecio();
    dibujoPaisaje.imprimeDatos();

    dibujoPaisaje.setCantidad(3);
    dibujoPaisaje.setDescripcion("Dibujo de un paisaje");
    dibujoPaisaje.setTamano(1);
    dibujoPaisaje.setMaterial("Lápices de colores");
    dibujoPaisaje.setEstilo("Digital");
    dibujoPaisaje.calcularPrecio();
    dibujoPaisaje.imprimeDatos();
    
    // Crear y usar metodos con un objeto Botones
    Botones botonPerro("Animales", 1, 3, "Botón con imagen de perro", 15, 25, 30);
    botonPerro.calcularPrecio();
    botonPerro.imprimeDatos();

    botonPerro.setCantidad(2);
    botonPerro.setDescripcion("Botón de un perro de felpa");
    botonPerro.setTamano(2);
    botonPerro.setTema("Juguetes");
    botonPerro.calcularPrecio();
    botonPerro.imprimeDatos();

    // Crear y usar metodos con un objeto Pines
    Pines pinPlaneta("Planetas", 1, 1, "Pin de Saturno", 10, 25, 40);
    pinPlaneta.calcularPrecio();
    pinPlaneta.imprimeDatos(); 
    
    pinPlaneta.setCantidad(3);
    pinPlaneta.setDescripcion("Pin de un planeta");
    pinPlaneta.setTamano(1);
    pinPlaneta.setTema("Universo");
    pinPlaneta.calcularPrecio();
    pinPlaneta.imprimeDatos();

    // Crear un vector de productos
    vector<Producto> listaProductos = {
        Sticker("Tradicional", 1, 1, "Imagen de gato impresa en papel adhesivo", 5, 10, 15),
        Dibujos("Acuarela", "Tradicional", 1, 2, "Dibujo de un paisaje", 25, 50, 100),
        Botones("Animales", 1, 3, "Botón con imagen de perro", 15, 25, 30),
        Pines("Planetas", 1, 1, "Pin de Saturno", 10, 25, 40),
    };

    // Crear y usar metodos con un objeto Artista
    Artista artista("Van Gogh", "@VanGogh", listaProductos);
    
    artista.mostrarInformacion();

    artista.agregarProducto(2, 3, "Dibujo en carbón", 25, 50, 75);

    artista.mostrarInformacion();

    if (artista.eliminarProducto(1)) {
        cout << "Producto eliminado con éxito.\n";
    } else {
        cout << "Error al eliminar el producto.\n";
    }

    artista.mostrarInformacion();

    return 0;
}
