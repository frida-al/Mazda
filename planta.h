/**
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 12 de octubre 2024
*/
#ifndef PLANTA_H
#define PLANTA_H
#include "mazda.h"
#include <iostream>
#include <string>
#include <sstream>
int contador = 0;
//Declaración de clase Planta
class Planta{
    // Atributos públicos
    public:
    Mazda * marca[200]; // Apuntador tipo Mazda para usar polimorfismo
    std::vector <int> cantidad;
    std::vector <int> year;
    int cont;
    /**
     * Constructor por default
     * 
     * @param 
     * @return Objeto Planta
     */
    Planta(): cont(0){};
    //Métodos miembro de la clase
    void agrega(Mazda *);
    void imprime(int);
};
    /**
     * Función agrega
     * Agrega objetos de cada una de las clases en la memoria dinámica para el correcto funcionamiento del polimorfismo
     *
     * @param Apuntador tipo mazda
     * @return 
     */
void Planta::agrega(Mazda * objeto){
    if (contador < 200){
        marca[contador] = objeto;
        cantidad.push_back(objeto->get_cantidad());
        year.push_back(objeto->get_modelo());
        contador++;
    }
}
    /**
     * Función imprime
     * Se encarga de imprimir los atributos
     * 
     * @param
     * @return 
     */
void Planta::imprime(int res6){
    for (int i = 0; i < res6; i++){
        marca[i] -> imprime_atributos();
    }
}
#endif