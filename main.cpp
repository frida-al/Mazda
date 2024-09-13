/*
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 09 de septiembre 2024
*/

/*
* Proyecto para Programación de estructuras de datos y algoritmos fundamentales
* Es un programa que simula una base de datos de una planta de autos, en la cual pueden 
* ordenarse los datos y buscarse uno en específico. Los datos con los cuales se trabajaran 
* son cuántos autos se fabrican de cada marca.
*/

//Bibliotecas
#include <iostream> //para imprimir
#include <string> //para usar strings
#include <vector>
#include "mazda.h"
#include "planta.h"
#include "sorts.h"

//Función menú
void menu(){
    //Imprime las opciones que va a tener el programa
    std::cout << "\nMenu: " << std::endl;
    std::cout << "1) Get all" << std::endl;
    std::cout << "2) Add" << std::endl;
    std::cout << "3) Search" <<std::endl;
    std::cout << "4) Exit" <<std::endl;
}

//Función instrucciones
void instrucciones(){
    std::cout << "\nINSTRUCTIONS" << std::endl;
}

int main(){
    int cantidad, modelo, potencia, torque, res, res2, res3; // variables tipo entero
    float motor; // variables tipo float
    bool sport, grandTouring, signature, turbo; // variables bool
    bool continua = true;
    Planta planta;
    Sorts<int> sorts;

    Cx3 cx3_1(500, 2023, 2.0, 148, 144, true);
    Cx3 cx3_2(200, 2024, 2.0, 148, 144, false);
    Cx3 cx3_3(150, 2025, 2.0, 148, 144, true);

    Cx5 cx5_1(450, 2023, 2.5, 188, 186, true, true, false);
    Cx5 cx5_2(350, 2024, 2.5, 228, 310, true, false, true);
    Cx5 cx5_3(100, 2025, 2.5, true, 227, 310, false, true, true);

    Cx30 cx30_1(550, 2023, 2.5, 186, 186, true, true, false);
    Cx30 cx30_2(400, 2024, 2.5, 186, 186, false, true, true);
    Cx30 cx30_3(205, 2025, 2.5, true, 227, 310, true, true, false);

    Cx50 cx50_1(330, 2023, 2.5, 228, 310);
    Cx50 cx50_2(405, 2024, 2.5, 228, 310);
    Cx50 cx50_3(200, 2025, 2.5, true, 228, 310);

    Cx70 cx70_1(100, 2025, 3.3, true, 280, 332, true);

    //Apuntadores
    Mazda * marca_1 = new Cx3(cx3_1);
    Mazda * marca_2 = new Cx3(cx3_2);
    Mazda * marca_3 = new Cx3(cx3_3);
    Mazda * marca_4 = new Cx5(cx5_1);
    Mazda * marca_5 = new Cx5(cx5_2);
    Mazda * marca_6 = new Cx5(cx5_3);
    Mazda * marca_7 = new Cx30(cx30_1);
    Mazda * marca_8 = new Cx30(cx30_2);
    Mazda * marca_9 = new Cx30(cx30_3);
    Mazda * marca_10 = new Cx50(cx50_1);
    Mazda * marca_11 = new Cx50(cx50_2);
    Mazda * marca_12 = new Cx50(cx50_3);
    Mazda * marca_13 = new Cx70(cx70_1);

    planta.agrega(marca_1);
    planta.agrega(marca_2);
    planta.agrega(marca_3);
    planta.agrega(marca_4);
    planta.agrega(marca_5);
    planta.agrega(marca_6);
    planta.agrega(marca_7);
    planta.agrega(marca_8);
    planta.agrega(marca_9);
    planta.agrega(marca_10);
    planta.agrega(marca_11);
    planta.agrega(marca_12);
    planta.agrega(marca_13);
    
    //Impresión de instrucciones
    instrucciones();

    //Ciclo para que el sistema siga corriendo mientras no se elija la opción "Exit"
    while (continua == true)
    {    

        //Impresión del menu
        menu(); 
         // Guardar la opción seleccionada del menu
        std::cin >> res; 

        if(res == 1){
            planta.imprime();
        }
        else if (res == 2){
            std::cout << std::endl << "1) Add Cx3" << std::endl << "2) Add Cx5" << std:: endl << 
            "3) Add Cx30" << std::endl << "4) Add Cx50" << std::endl << "5) Add Cx70" << std::endl;
            std::cin >> res2;
            switch (res2){
            case 1:
                {std::cout << "Enter the quantity: ";
                std::cin >> cantidad;
                std::cout << "Enter the year: ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity: ";
                std::cin >> motor;
                std::cout << "Enter the horse power: ";
                std::cin >> potencia;
                std::cout << "Enter the torque: ";
                std::cin >> torque;
                std::cout << "Does it have a sport version? ";
                std::cin >> sport;
                Mazda * marca_14 = new Cx3(cantidad, modelo, motor, potencia, torque, sport);
                planta.agrega(marca_14);}
                break;
            case 2:
                {std::cout << "Enter the quantity: ";
                std::cin >> cantidad;
                std::cout << "Enter the year: ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity: ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? ";
                std::cin >> turbo;
                std::cout << "Enter the horse power: ";
                std::cin >> potencia;
                std::cout << "Enter the torque: ";
                std::cin >> torque;
                std::cout << "Does it have a sport version? ";
                std::cin >> sport;
                std::cout << "Does it have a Grand Touring version? ";
                std::cin >> grandTouring;
                std::cout << "Does it have a Signature version? ";
                std::cin >> signature;
                Mazda * marca_15 = new Cx5(cantidad, modelo, motor, turbo, potencia, torque, sport, grandTouring, signature);
                planta.agrega(marca_15);}
                break;
            case 3:
                {std::cout << "Enter the quantity: ";
                std::cin >> cantidad;
                std::cout << "Enter the year: ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity: ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? ";
                std::cin >> turbo;
                std::cout << "Enter the horse power: ";
                std::cin >> potencia;
                std::cout << "Enter the torque: ";
                std::cin >> torque;
                std::cout << "Does it have a sport version? ";
                std::cin >> sport;
                std::cout << "Does it have a Grand Touring version? ";
                std::cin >> grandTouring;
                std::cout << "Does it have a Signature version? ";
                std::cin >> signature;
                Mazda * marca_16 = new Cx30(cantidad, modelo, motor, turbo, potencia, torque, sport, grandTouring, signature);
                planta.agrega(marca_16);}
                break;
            case 4:
                {std::cout << "Enter the quantity: ";
                std::cin >> cantidad;
                std::cout << "Enter the year: ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity: ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? ";
                std::cin >> turbo;
                std::cout << "Enter the horse power: ";
                std::cin >> potencia;
                std::cout << "Enter the torque: ";
                std::cin >> torque;
                Mazda * marca_15 = new Cx50(cantidad, modelo, motor, turbo, potencia, torque);
                planta.agrega(marca_15);}
                break;
            case 5:
                {std::cout << "Enter the quantity: ";
                std::cin >> cantidad;
                std::cout << "Enter the year: ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity: ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? ";
                std::cin >> turbo;
                std::cout << "Enter the horse power: ";
                std::cin >> potencia;
                std::cout << "Enter the torque: ";
                std::cin >> torque;
                std::cout << "Does it have a Grand Touring version? ";
                std::cin >> grandTouring;
                Mazda * marca_17 = new Cx70(cantidad, modelo, motor, turbo, potencia, torque, grandTouring);
                planta.agrega(marca_17);}
                break;
            }
        }
        else if(res == 3){
            std::cout << std::endl << "1) Search Cx3" << std::endl << "2) Search Cx5" << std:: endl << 
            "3) Search Cx30" << std::endl << "4) Search Cx50" << std::endl << "5) Search all" << std::endl;
            std::cin >> res3;
            switch (res3){
                case 1:
                    {std::vector<int> arr;
                    for (int i = 0; i < 3; i++){
                        arr.push_back(planta.marca[i]->cantidad);
                    }
                    std::string str;
                    sorts.ordenaBurbuja(arr);
                    for (int i : arr) {
                        str += std::to_string(i) + " ";
                    }
                    std::cout << str << std::endl;}
                    break;
                case 2:
                    {std::vector<int> arr;
                    for (int i = 3; i < 6; i++){
                        arr.push_back(planta.marca[i]->cantidad);
                    }
                    std::string str;
                    sorts.ordenaBurbuja(arr);
                    for (int i : arr) {
                        str += std::to_string(i) + " ";
                    }
                    std::cout << str << std::endl;}
                    break;
                case 3:
                    {std::vector<int> arr;
                    for (int i = 6; i < 9; i++){
                        arr.push_back(planta.marca[i]->cantidad);
                    }
                    std::string str;
                    sorts.ordenaBurbuja(arr);
                    for (int i : arr) {
                        str += std::to_string(i) + " ";
                    }
                    std::cout << str << std::endl;}
                    break;
                case 4:
                    {std::vector<int> arr;
                    for (int i = 9; i < 12; i++){
                        arr.push_back(planta.marca[i]->cantidad);
                    }
                    std::string str;
                    sorts.ordenaBurbuja(arr);
                    for (int i : arr) {
                        str += std::to_string(i) + " ";
                    }
                    std::cout << str << std::endl;}
                    break;
                case 5:
                    {std::vector<int> arr;
                    for (int i = 0; i < planta.cont; i++){
                        arr.push_back(planta.marca[i]->cantidad);
                    }
                    std::string str;
                    sorts.ordenaBurbuja(arr);
                    for (int i : arr) {
                        str += std::to_string(i) + " ";
                    }
                    std::cout << str << std::endl;}
            }
        }
                

        else if (res == 4){ // Opción "Exit"
            for(int i = 0; i < planta.cont; i++){
                delete planta.marca[i];
                }
            std::cout << "Good bye" << std::endl;
            continua = false;
        }
    }
    return 0;
}