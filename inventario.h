#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

class Inventario {
public:
    std::string pieza;
    int cantidad;
    Inventario(){};
    Inventario(const std::string& piez, int cant) : pieza(piez), cantidad(cant) {}

    static Inventario fromCSV(const std::string& csv) {
        std::istringstream ss(csv);
        std::string pieza;
        std::string cantStr;
        
        std::getline(ss, pieza, ',');
        std::getline(ss, cantStr);
        int cantidad = std::stoi(cantStr);
        
        return Inventario(pieza, cantidad);
    }
    std::string toCSV() const {
        return pieza + "," + std::to_string(cantidad);
    }
    void display() const {
        std::cout << "Item: " << pieza << ", Quantity: " << cantidad << std::endl;
    }
    std::string toString() const {
        std::stringstream ss;
        ss << "Item: " << pieza << ", Quantity: " << cantidad;
        return ss.str();
    }
};

 std::vector<Inventario> readFromCSV(const std::string& csv) {
        std::vector<Inventario> inventario;
        std::ifstream file(csv);
        std::string line;

        if (file.is_open()) {            
            while (std::getline(file, line)) {
                if (!line.empty()) {
                    inventario.push_back(Inventario::fromCSV(line)); // Create Person from CSV line
                }
            }
            file.close();
        } else {
            std::cerr << "Could not open the file for reading." << std::endl;
        }

        return inventario;
}
void writeToCSV(const std::string& csv, const std::vector<Inventario>& inventarios) {
    std::ofstream file(csv, std::ios::app); // Open in append mode
    if (file.is_open()) {
        for (const auto& inventario : inventarios) {
            file << inventario.toCSV() << std::endl; // Write each Inventario to the file
        }
        file.close();
    } else {
        std::cerr << "Could not open the file for writing." << std::endl;
    }
}