/*
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 11 de noviembre 2024
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
#include <vector> //para usar vectores
#include "mazda.h"
#include "planta.h"
#include "sorts.h"
#include "stack.h"
#include "list.h"
#include "inventario.h"

//Función menú
void menu(){
    //Imprime las opciones que va a tener el programa
    std::cout << "\nMenu: " << std::endl;
    std::cout << "1) Get all" << std::endl;
    std::cout << "2) Add" << std::endl;
    std::cout << "3) Search" << std::endl;
    std::cout << "4) Delete" << std::endl;
    std::cout << "5) Delete from inventory" << std::endl;
    std::cout << "6) Exit" <<std::endl;
}
//Función instrucciones
//Complejidad espacial O(1) 
//Complejidad temporal O(1) porque solo se ejecuta una vez, al inicio del programa
void instrucciones(){
    std::cout << "\nINSTRUCTIONS" << std::endl;
    std::cout << "This program runs in English, and it mainly asks you to select a number to choose an option from the menu. ";
    std::cout << "When you select option two 'Add', it will ask you to introduce certain information, but each will tell what input it takes. ";
    std::cout << "If it asks you to insert numbers, please do not insert letters, and the other way around" << std::endl;
}
int main(){
    //Declaración de variables
    std::string pieza;
    int res6 = 13;
    int cantidad, cantidad2, modelo, potencia, torque, res, res2, res3, res4, res5; // variables tipo entero
    float motor; // variables tipo float
    bool sport, grandTouring, signature, turbo; // variables bool
    bool continua = true;
    Planta planta;
    Sorts<int> sorts;
    Sorts<int> sortsYear;
    List<Inventario> listInv;
    StackVector<Mazda*> quantityStack(18);
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
    //Stack
    //La inserción en el stack tiene una complejidad temporal de O(1)
    quantityStack.push(marca_1);
    quantityStack.push(marca_2);
    quantityStack.push(marca_3);
    quantityStack.push(marca_4);
    quantityStack.push(marca_5);
    quantityStack.push(marca_6);
    quantityStack.push(marca_7);
    quantityStack.push(marca_8);
    quantityStack.push(marca_9);
    quantityStack.push(marca_10);
    quantityStack.push(marca_11);
    quantityStack.push(marca_12);
    quantityStack.push(marca_13);
 
    std::vector <int> q = sorts.ordenaBurbuja(planta.cantidad);
    std::vector <int> y = sortsYear.ordenaBurbuja(planta.year);
    std::vector<Inventario> inventario = readFromCSV("inventario.csv");
    // Complejidad temporal O(n)
    //Comlejidad espacial O(n)
    for (const auto& inventario : inventario) {
        listInv.insertion(inventario);
    }
    
    //Impresión de instrucciones
    instrucciones();
    //Ciclo para que el sistema siga corriendo mientras no se elija la opción "Exit"
    // Complejidad temporal O(n) se repite n veces cuando corres el programa
    //Complejidad espacial O(n) porque no hay una variable fija que indique específicamente cuántas veces se repite
    while (continua == true)
    {    
        //Impresión del menu
        menu(); 
         // Guardar la opción seleccionada del menu
        std::cin >> res; 
        if(res == 1){
            planta.imprime(res6);
            std::cout << listInv.toString();
            continua = true;
        }
        else if (res == 2){
            std::cout << std::endl << "1) Add Cx3" << std::endl << "2) Add Cx5" << std:: endl << 
            "3) Add Cx30" << std::endl << "4) Add Cx50" << std::endl << "5) Add Cx70" << std::endl << "6) Add items to inventory" << std::endl;
            std::cin >> res2;
            switch (res2){
            case 1:
                {std::cout << "Enter the quantity (int): ";
                std::cin >> cantidad;
                std::cout << "Enter the year (int): ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity (float): ";
                std::cin >> motor;
                std::cout << "Enter the horse power (int): ";
                std::cin >> potencia;
                std::cout << "Enter torque (int): ";
                std::cin >> torque;
                std::cout << "Does it have a sport version? (pick 1 for true and 0 for false) ";
                std::cin >> sport;
                Mazda * marca_14 = new Cx3(cantidad, modelo, motor, potencia, torque, sport);
                planta.agrega(marca_14);
                quantityStack.push(marca_14);
                res6 += 1;}
                break;
            case 2:
                {std::cout << "Enter the quantity (int): ";
                std::cin >> cantidad;
                std::cout << "Enter the year (int): ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity (float): ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? (pick 1 for true and 0 for false)";
                std::cin >> turbo;
                std::cout << "Enter the horse power (int): ";
                std::cin >> potencia;
                std::cout << "Enter torque (int): ";
                std::cin >> torque;
                std::cout << "Does it have a sport version? (pick 1 for true and 0 for false)";
                std::cin >> sport;
                std::cout << "Does it have a Grand Touring version? (pick 1 for true and 0 for false) ";
                std::cin >> grandTouring;
                std::cout << "Does it have a Signature version? (pick 1 for true and 0 for false) ";
                std::cin >> signature;
                Mazda * marca_15 = new Cx5(cantidad, modelo, motor, turbo, potencia, torque, sport, grandTouring, signature);
                planta.agrega(marca_15);
                quantityStack.push(marca_15);
                res6 += 1;}
                break;
            case 3:
                {std::cout << "Enter the quantity (int): ";
                std::cin >> cantidad;
                std::cout << "Enter the year (int): ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity (float): ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? (pick 1 for true and 0 for false) ";
                std::cin >> turbo;
                std::cout << "Enter the horse power (int): ";
                std::cin >> potencia;
                std::cout << "Enter torque (int): ";
                std::cin >> torque;
                std::cout << "Does it have a sport version? (pick 1 for true and 0 for false) ";
                std::cin >> sport;
                std::cout << "Does it have a Grand Touring version? (pick 1 for true and 0 for false) ";
                std::cin >> grandTouring;
                std::cout << "Does it have a Signature version? (pick 1 for true and 0 for false) ";
                std::cin >> signature;
                Mazda * marca_16 = new Cx30(cantidad, modelo, motor, turbo, potencia, torque, sport, grandTouring, signature);
                planta.agrega(marca_16);
                quantityStack.push(marca_16);
                res6 += 1;}
                break;
            case 4:
                {std::cout << "Enter the quantity (int): ";
                std::cin >> cantidad;
                std::cout << "Enter the year (int): ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity (float): ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? (pick 1 for true and 0 for false) ";
                std::cin >> turbo;
                std::cout << "Enter the horse power (int): ";
                std::cin >> potencia;
                std::cout << "Enter torque (int): ";
                std::cin >> torque;
                Mazda * marca_18 = new Cx50(cantidad, modelo, motor, turbo, potencia, torque);
                planta.agrega(marca_18);
                quantityStack.push(marca_18);
                res6 += 1;}
                break;
            case 5:
                {std::cout << "Enter the quantity (int): ";
                std::cin >> cantidad;
                std::cout << "Enter the year (int): ";
                std::cin >> modelo;
                std::cout << "Enter the engine capacity (float): ";
                std::cin >> motor;
                std::cout << "Does the motor have a turbo version? (pick 1 for true and 0 for false) ";
                std::cin >> turbo;
                std::cout << "Enter the horse power (int): ";
                std::cin >> potencia;
                std::cout << "Enter torque (int): ";
                std::cin >> torque;
                std::cout << "Does it have a Grand Touring version? (pick 1 for true and 0 for false) ";
                std::cin >> grandTouring;
                Mazda * marca_17 = new Cx70(cantidad, modelo, motor, turbo, potencia, torque, grandTouring);
                planta.agrega(marca_17);
                quantityStack.push(marca_17);
                res6 += 1;}
                break;
            case 6:
                {std::cout << "Enter the item (string): ";
                std::cin >> pieza;
                std::cout << "Enter the amount (int): ";
                std::cin >> cantidad2;
                Inventario newItem(pieza, cantidad2);
                writeToCSV("Inventario.csv", {newItem});}
                break;
            }
        }
        else if(res == 3){
            std::cout << std::endl << "1) Search per quantity" << std::endl << "2) Search per year" << std:: endl;
            std::cin >> res3;
            switch (res3){
                case 1:
                    // Complejidad temporal de ambos ciclos O(n^2)
                    //Complejidad espacial de ambos ciclos O(1)
                    for(int i = 0; i < q.size(); i++)
                        for(int j = 0; j < contador; j++)
                            if(q[i - 1] != q[i] && q[i] == planta.marca[j]->get_cantidad())
                                planta.marca[j]->imprime_atributos();
                    break;
                case 2:
                    // Complejidad temporal de ambos ciclos O(n^2)
                    //Complejidad espacial de ambos ciclos O(1)
                    for(int i = 0; i < y.size(); i++)
                        for(int j = 0; j < contador; j++)
                            if(y[i - 1] != y[i] && y[i] == planta.marca[j]->get_modelo())
                                planta.marca[j]->imprime_atributos();
                    break;
            }
        }
        else if(res == 4)    {
            std::cout << std::endl << "How many elements do you want to delete? Pick a number from 1 to 13" << std::endl;
            std::cin >> res4;
            if (res4 < 1 || res4 > 13) {
                std::cout << "Invalid number of elements to delete." << std::endl;
            }
            std::cout << "Initial stack: " << quantityStack.toString() << std::endl;
            //Complejidad temporal O(n)
            //Complejidad espacial O(1)
            for (int i = 0; i < res4; i++) {
                Mazda* topElement = quantityStack.top();
                quantityStack.pop();
                delete topElement; 
            }
            std::cout << "Final stack: " << quantityStack.toString() << std::endl;
            res6 -= res4;
        }
        else if(res == 5) {
            std::cout << std::endl << "Which item do you want to delete?" << std::endl;
            std::cin >> res5;
            listInv.deleteAt(res5);
        }
        else if (res == 6){ // Opción "Exit"
            //Complejidad temporal O(n)
            //Complejidad espacial O(1)
            for(int i = 0; i < planta.cont; i++){
                delete planta.marca[i];
                }
            std::cout << "Good bye" << std::endl;
            continua = false;
        }
    }
    return 0;
}