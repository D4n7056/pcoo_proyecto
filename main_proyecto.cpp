#include <iostream>
#include "sticker.h"
#include "dibujos.h"
#include "botones.h"
#include "pines.h"

using namespace std;

int main(){
    Sticker gato(1,1, "imagen de gato impresa en papel adhesivo");
    gato.imprime_datos();
    gato.set_cantidad(2);
    gato.set_descripcion("dibujo de un gato adhesivo");
    gato.set_tamano(2);
    gato.imprime_datos();
    gato.calcular_precio(2, 2);
    Dibujos paisaje(1,2,"dibujo de un paisaje","acuarela","tradicional");
    paisaje.imprime_datos();
    paisaje.set_cantidad(3);
    paisaje.set_descripcion("dibujo de un paisaje");
    paisaje.set_tamano(1);
    paisaje.set_material("lapices de colores");
    paisaje.set_estilo("digital");
    paisaje.imprime_datos();
    paisaje.calcular_precio(3,1);
    Botones perro(1,3, "boton con imagen de perro","animales");
    perro.imprime_datos();
    perro.set_cantidad(2);
    perro.set_descripcion("boton de un perro de felpa");
    perro.set_tamano(2);
    perro.set_tema("juegetes");
    perro.imprime_datos();
    perro.calcular_precio(2,2);
    Pines planeta(1,1, "pin de saturno", "planetas");
    planeta.imprime_datos(); 
    planeta.set_cantidad(3);
    planeta.set_descripcion("pin de un planeta");
    planeta.set_tamano(1);
    planeta.set_tema("universo");
    planeta.imprime_datos();
    planeta.calcular_precio(3,1);
};
