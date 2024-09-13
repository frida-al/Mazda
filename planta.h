/**
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 09 de septiembre 2024
*/

#ifndef PLANTA_H
#define PLANTA_H

#include "mazda.h"
#include <iostream>
#include <string>
#include <sstream>

//Declaración de clase Planta
class Planta{

    // Atributos públicos
    public:
    Mazda * marca[200]; // Apuntador tipo Mazda para usar polimorfismo
    int cont;

    /**
     * Constructor por default
     * 
     * @param 
     * @return Objeto Planta
     */
    Planta():cont(0){};
    //Métodos miembro de la clase
    void agrega(Mazda *);
    void imprime();
};

    /**
     * Función agrega
     * Agrega objetos de cada una de las clases en la memoria dinámica para el correcto funcionamiento del polimorfismo
     *
     * @param Apuntador tipo mazda
     * @return 
     */
void Planta::agrega(Mazda * objeto){
    if (cont < 200){
        marca[cont] = objeto;
        cont++;
    }
}

    /**
     * Función imprime
     * Se encarga de imprimir los atributos
     * 
     * @param
     * @return 
     */
void Planta::imprime(){
    for (int i = 0; i < cont; i++){
        marca[i] -> imprime_atributos();
    }
}
#endif