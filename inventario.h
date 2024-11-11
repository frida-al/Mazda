/*
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 08 de noviembre 2024
*/
/**
 * Esta clase es la que permite la lectura y escritura de objetos por parte de un archivo .csv externo.
 * Además, los objetos de la clase se utilizan para la estructura linked list y se pueden tanto crear nuevos objetos como
 * eliminar los que ya están en la lista.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

class Inventario {
//Atributos y métodos públicos
public:
    std::string pieza;
    int cantidad;
    /**
     * Constructor por default
     * 
     * @param
     * @return Objeto Inventario
     */
    Inventario(){};
    /**
     * Constructor
     * 
     * @param pieza, cantidad
     * @return Objeto Mazda
     */
    Inventario(const std::string& piez, int cant) : pieza(piez), cantidad(cant) {}

    /**
     * Función fromCSV
     * Da formato al objeto cuando este se lee del archivo .csv
     * 
     * @param
     * @return objeto Inventario
     */
    static Inventario fromCSV(const std::string& csv) {
        std::istringstream ss(csv);
        std::string pieza;
        std::string cantStr;
        
        std::getline(ss, pieza, ',');
        std::getline(ss, cantStr);
        int cantidad = std::stoi(cantStr);
        
        return Inventario(pieza, cantidad);
    }
    
    /**
     * Función toCSV
     * Da formato al objeto cuando este se escribe en el archivo .csv
     * 
     * @param
     * @return stringstream
     */
    std::string toCSV() const {
        return pieza + "," + std::to_string(cantidad);
    }

    /**
     * Función toString
     * Para imprimir la lista
     * 
     * @param
     * @return stringstream
     */
    std::string toString() const {
        std::stringstream ss;
        ss << "Item: " << pieza << ", Quantity: " << cantidad;
        return ss.str();
    }
};
    /**
     * Función readFromCSV
     * Lee el objeto del archivo .csv
     * 
     * @param
     * @return vector de objetos Inventario
     */
 std::vector<Inventario> readFromCSV(const std::string& csv) {
        std::vector<Inventario> inventario;
        std::ifstream file(csv);
        std::string line;

        if (file.is_open()) {            
            while (std::getline(file, line)) {
                if (!line.empty()) {
                    inventario.push_back(Inventario::fromCSV(line)); 
                }
            }
            file.close();
        } else {
            std::cerr << "Could not open the file for reading." << std::endl;
        }

        return inventario;
}

    /**
     * Función writeToCSV
     * Escribe el objeto en el archivo .csv
     * 
     * @param
     * @return objeto Inventario
     */
void writeToCSV(const std::string& csv, const std::vector<Inventario>& inventarios) {
    std::ofstream file(csv, std::ios::app); 
    if (file.is_open()) {
        for (const auto& inventario : inventarios) {
            file << inventario.toCSV() << std::endl; 
        }
        file.close();
    } else {
        std::cerr << "Could not open the file for writing." << std::endl;
    }
}