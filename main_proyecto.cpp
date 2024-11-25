#include <iostream>
#include "sticker.h"
#include "dibujos.h"
#include "botones.h"
#include "pines.h"
#include "artista.h"

using namespace std;

int main(){   
    Sticker gato("tradicional", 1, 1, "imagen de gato impresa en papel adhesivo", 5, 10, 15);
    gato.calcular_precio();
    gato.imprime_datos();

    gato.set_cantidad(2);
    gato.set_descripcion("dibujo de un gato adhesivo");
    gato.set_tamano(2);
    gato.calcular_precio();
    gato.imprime_datos();

    Dibujos paisaje("acuarela","tradicional", 1,2,"dibujo de un paisaje", 25, 50, 100);
    paisaje.calcular_precio();
    paisaje.imprime_datos();

    paisaje.set_cantidad(3);
    paisaje.set_descripcion("dibujo de un paisaje");
    paisaje.set_tamano(1);
    paisaje.set_material("lapices de colores");
    paisaje.set_estilo("digital");
    paisaje.calcular_precio();
    paisaje.imprime_datos();
    
    Botones perro("animales", 1, 3, "boton con imagen de perro", 15, 25, 30);
    perro.calcular_precio();
    perro.imprime_datos();

    perro.set_cantidad(2);
    perro.set_descripcion("boton de un perro de felpa");
    perro.set_tamano(2);
    perro.set_tema("juegetes");
    perro.calcular_precio();
    perro.imprime_datos();

    Pines planeta("planetas", 1, 1, "pin de saturno", 10, 25, 40);
    planeta.calcular_precio();
    planeta.imprime_datos(); 
    
    planeta.set_cantidad(3);
    planeta.set_descripcion("pin de un planeta");
    planeta.set_tamano(1);
    planeta.set_tema("universo");
    planeta.calcular_precio();
    planeta.imprime_datos();

    vector <Producto> productos = {
        Sticker("tradicional", 1, 1, "imagen de gato impresa en papel adhesivo", 5, 10, 15),
        Dibujos("acuarela","tradicional", 1,2,"dibujo de un paisaje", 25, 50, 100),
        Botones("animales", 1, 3, "boton con imagen de perro", 15, 25, 30),
        Pines("planetas", 1, 1, "pin de saturno", 10, 25, 40),
        };

    Artista artista("Van Gogh","@VanGogh", productos);
    
    artista.mostrar_informacion();

    artista.agregar_producto(2, 3, "dibujo en carbón", 25, 50, 75);

    artista.mostrar_informacion();

    if (artista.eliminar_producto(1)) {
        cout << "Producto eliminado con éxito.\n";
    } 
    else {
        cout << "Error al eliminar el producto.\n";
    }

    artista.mostrar_informacion();

    return 0;
};















