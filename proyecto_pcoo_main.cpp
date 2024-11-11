#include <iostream>
using namespace std;

#include "pelicula.h"
#include "series.h"
#include "documental.h"

int main(){
    Pelicula guason("guason","HBO y Amazon Prime Video","su única motivación en la vida es hacer reír a la gente, pero tiene problemas mentales que hacen que la gente le vea como un bicho raro.","película",8,120);
    guason.imprime_datos();
    Serie got("game of trones","HBO","relata las vivencias de un grupo de personajes de distintas casas en el continente de Poniente para tener el control del Trono de Hierro.","serie", 9, 73);
    got.imprime_datos();
    Documental audrie("Audrie y Daisy","Netflix","se nos cuenta la historia de dos adolescentes que sufrieron abusos y acosos vía internet, lo que finalmente terminó en agresiones sexuales.","documental",8,120);
    audrie.imprime_datos();
    return 0;
};
