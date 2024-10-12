/**
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 12 de octubre 2024
*/


#ifndef MAZDA_H
#define MAZDA_H

#include <string>

//Declaración de clase Mazda que es abstracta
class Mazda{

    //Declaro las variables protegidas
    protected:
    int modelo;

    //Atributos públicos
    public:
    int cantidad;
    /**
     * Constructor por default
     * 
     * @param
     * @return Objeto Mazda
     */
    Mazda(): cantidad(0), modelo(0){};

    /**
     * Constructor
     * 
     * @param cant, model
     * @return Objeto Mazda
     * 
     */
    Mazda(int cant, int model): cantidad(cant), modelo(model){};
    //Métodos miembro de la clase
    int get_cantidad();
    int get_modelo();
    virtual void imprime_atributos() = 0; //Método abstracto que será sobreescrito
};

int Mazda::get_cantidad(){
    return cantidad;
}

int Mazda::get_modelo(){
    return modelo;
}
//Declaración de la clase CX 3 que hereda de la clase Mazda
class Cx3:public Mazda{

    //Declaro las variables privadas 
    private: 
    float motor;
    int potencia;
    int torque;
    bool sport;
    std::string marca = "Cx 3";

    //Atributos públicos
    public:
    /**
     * Constructor por default
     * 
     * @param 
     * @return Objeto Cx3
     */
    Cx3(): Mazda(), motor(0), potencia(0), torque(0), sport(false){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, poten, torq, spor
     * @return Objeto Cx3
     */
    Cx3(int cant, int model, float mot, int poten, int torq, bool spor):Mazda(cant, model), motor(mot), potencia(poten), torque(torq), sport(spor){};
    //Métodos miembro de la clase 
    void imprime_atributos();
    void set_motor(float);
    float get_motor();
    void set_potencia(int);
    int get_potencia();
    void set_torque(int);
    int get_torque();
    void set_sport(bool);
    bool get_sport();
};
/**
 * Función imprime_atributos
 * Imprime los atributos de la clase, para usar polimorfismo
 * 
 * @param 
 * @return
 */
void Cx3::imprime_atributos(){
    std::cout << marca << std::endl;
    std::cout << "Quantity: "<< cantidad << std::endl;
    std::cout << "Year: " << modelo << std::endl;
    std::cout << "Motor: " << motor << std::endl;
    std::cout << "Power: " << potencia << std::endl;
    std::cout << "Torque: " << torque << std::endl;
    std::cout << "Sport: " << sport << std::endl;
    std::cout << std::endl;
}
/**
 * setter de variable motor
 * Asigna a la variable un float que recibe del Objeto
 * 
 * @param mot
 * @return
 */
void Cx3::set_motor(float mot){ 
    motor = mot;
}
/**
 * getter de variable motor
 * regresa motor
 * 
 * @param
 * @return motor
*/
float Cx3::get_motor(){ 
    return motor;
}
/**
 * setter de variable potencia
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param poten
 * @return
 */
void Cx3::set_potencia(int poten){ 
    potencia = poten;
}
/**
 * getter de variable potencia
 * regresa potencia
 * 
 * @param
 * @return potencia
*/
int Cx3::get_potencia(){ 
    return potencia;
}
/**
 * setter de variable torque
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param torque
 * @return
 */
void Cx3::set_torque(int torq){ 
    torque = torq;
}
/**
 * getter de variable torque
 * regresa torque
 * 
 * @param
 * @return torque
*/
int Cx3::get_torque(){ 
    return torque;
}
/**
 * setter de variable sport
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param sport
 * @return
 */
void Cx3::set_sport(bool spor){ 
    sport = spor;
}
/**
 * getter de variable sport
 * regresa sport
 * 
 * @param
 * @return sport
*/
bool Cx3::get_sport(){ 
    return sport;
}
//Declaración de la clase CX 30 que hereda de la clase Mazda
class Cx30:public Mazda{

    //Declaro las variables privadas 
    private: 
    float motor;
    int potencia;
    int torque;
    bool sport;
    bool grandTouring;
    bool signature;
    bool turbo;
    std::string marca = "Cx 30";

    //Atributos públicos
    public:
    /**
     * Constructor por default
     * 
     * @param 
     * @return Objeto Cx30
     */
    Cx30(): Mazda(), motor(0), potencia(0), torque(0), sport(false), grandTouring(false), signature(false){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, poten, torq, spor, gt, sig
     * @return Objeto Cx30
     */
    Cx30(int cant, int model, float mot, int poten, int torq, bool spor, bool gt, bool sig):Mazda(cant, model), motor(mot), potencia(poten), torque(torq), sport(spor),
    grandTouring(gt), signature(sig){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, turb, poten, torq, spor, gt, sig
     * @return Objeto Cx30
     */
    Cx30(int cant, int model, float mot, bool turb, int poten, int torq, bool spor, bool gt, bool sig):Mazda(cant, model), motor(mot), turbo(turb), potencia(poten), torque(torq), sport(spor),
    grandTouring(gt), signature(sig){};
    //Métodos miembro de la clase 
    void imprime_atributos();
    void set_motor(float);
    float get_motor();
    void set_turbo(bool);
    bool get_turbo();
    void set_potencia(int);
    int get_potencia();
    void set_torque(int);
    int get_torque();
    void set_sport(bool);
    bool get_sport();
    void set_grandTouring(bool);
    bool get_grandTouring();
    void set_signature(bool);
    bool get_signature();
};
/**
 * Función imprime_atributos
 * Imprime los atributos de la clase, para usar polimorfismo
 * 
 * @param 
 * @return
 */
void Cx30::imprime_atributos(){
    std::cout << marca << std::endl;
    std::cout << "Quantity: " << cantidad << std::endl;
    std::cout << "Year: " << modelo << std::endl;
    std::cout << "Motor: " << motor << std::endl;
    std::cout << "Power: " << potencia << std::endl;
    std::cout << "Torque: " << torque << std::endl;
    std::cout << "Sport: " << sport << std::endl;
    std::cout << "Grand Touring: " << grandTouring << std::endl;
    std::cout << "Signature: " << signature << std::endl;
    std::cout << std::endl;
}
/**
 * setter de variable motor
 * Asigna a la variable un float que recibe del Objeto
 * 
 * @param mot
 * @return
 */
void Cx30::set_motor(float mot){ 
    motor = mot;
}
/**
 * getter de variable motor
 * regresa motor
 * 
 * @param
 * @return motor
*/
float Cx30::get_motor(){ 
    return motor;
}
/**
 * setter de variable turbo
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param turb
 * @return
 */
void Cx30::set_turbo(bool turb){ 
    turbo = turb;
}
/**
 * getter de variable turbo
 * regresa turbo
 * 
 * @param
 * @return turbo
*/
bool Cx30::get_turbo(){ 
    return turbo;
}
/**
 * setter de variable potencia
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param poten
 * @return
 */
void Cx30::set_potencia(int poten){ 
    potencia = poten;
}
/**
 * getter de variable potencia
 * regresa potencia
 * 
 * @param
 * @return potencia
*/
int Cx30::get_potencia(){ 
    return potencia;
}
/**
 * setter de variable torque
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param torque
 * @return
 */
void Cx30::set_torque(int torq){ 
    torque = torq;
}
/**
 * getter de variable torque
 * regresa torque
 * 
 * @param
 * @return torque
*/
int Cx30::get_torque(){ 
    return torque;
}
/**
 * setter de variable sport
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param sport
 * @return
 */
void Cx30::set_sport(bool spor){ 
    sport = spor;
}
/**
 * getter de variable sport
 * regresa sport
 * 
 * @param
 * @return sport
*/
bool Cx30::get_sport(){ 
    return sport;
}
/**
 * setter de variable grandTouring
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param grandTouring
 * @return
 */
void Cx30::set_grandTouring(bool gt){ 
    grandTouring = gt;
}
/**
 * getter de variable grandTouring
 * regresa grandTouring
 * 
 * @param
 * @return grandTouring
*/
bool Cx30::get_grandTouring(){ 
    return grandTouring;
}
/**
 * setter de variable signature
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param signature
 * @return
 */
void Cx30::set_signature(bool sig){ 
    signature = sig;
}
/**
 * getter de variable signature
 * regresa signature
 * 
 * @param
 * @return signature
*/
bool Cx30::get_signature(){ 
    return signature;
}
//Declaración de la clase CX 5 que hereda de la clase Mazda
class Cx5:public Mazda{

    //Declaro las variables privadas 
    private: 
    float motor;
    int potencia;
    int torque;
    bool sport;
    bool grandTouring;
    bool signature;
    bool turbo;
    std::string marca = "Cx 5";

    //Atributos públicos
    public:
    /**
     * Constructor por default
     * 
     * @param 
     * @return Objeto Cx5
     */
    Cx5(): Mazda(), motor(0), potencia(0), torque(0), sport(false), grandTouring(false), signature(false){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, poten, torq, spor, gt, sig
     * @return Objeto Cx5
     */
    Cx5(int cant, int model, float mot, int poten, int torq, bool spor, bool gt, bool sig):Mazda(cant, model), motor(mot), potencia(poten), torque(torq), sport(spor),
    grandTouring(gt), signature(sig){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, turb, poten, torq, spor, gt, sig
     * @return Objeto Cx5
     */
    Cx5(int cant, int model, float mot, bool turb, int poten, int torq, bool spor, bool gt, bool sig):Mazda(cant, model), motor(mot), turbo(turb), potencia(poten), torque(torq), sport(spor),
    grandTouring(gt), signature(sig){};
    //Métodos miembro de la clase 
    void imprime_atributos();
    void set_motor(float);
    float get_motor();
    void set_turbo(bool);
    bool get_turbo();
    void set_potencia(int);
    int get_potencia();
    void set_torque(int);
    int get_torque();
    void set_sport(bool);
    bool get_sport();
    void set_grandTouring(bool);
    bool get_grandTouring();
    void set_signature(bool);
    bool get_signature();
};
/**
 * Función imprime_atributos
 * Imprime los atributos de la clase, para usar polimorfismo
 * 
 * @param 
 * @return
 */
void Cx5::imprime_atributos(){
    std::cout << marca << std::endl;
    std::cout << "Quantity: " << cantidad << std::endl;
    std::cout << "Year: " << modelo << std::endl;
    std::cout << "Motor: " << motor << std::endl;
    std::cout << "Power: " << potencia << std::endl;
    std::cout << "Torque: " << torque << std::endl;
    std::cout << "Sport: " << sport << std::endl;
    std::cout << "Grand Touring: " << grandTouring << std::endl;
    std::cout << "Signature: " << signature << std::endl;
    std::cout << std::endl;
}
/**
 * setter de variable motor
 * Asigna a la variable un float que recibe del Objeto
 * 
 * @param mot
 * @return
 */
void Cx5::set_motor(float mot){ 
    motor = mot;
}
/**
 * getter de variable motor
 * regresa motor
 * 
 * @param
 * @return motor
*/
float Cx5::get_motor(){ 
    return motor;
}
/**
 * setter de variable turbo
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param turb
 * @return
 */
void Cx5::set_turbo(bool turb){ 
    turbo = turb;
}
/**
 * getter de variable turbo
 * regresa turbo
 * 
 * @param
 * @return turbo
*/
bool Cx5::get_turbo(){ 
    return turbo;
}
/**
 * setter de variable potencia
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param poten
 * @return
 */
void Cx5::set_potencia(int poten){ 
    potencia = poten;
}
/**
 * getter de variable potencia
 * regresa potencia
 * 
 * @param
 * @return potencia
*/
int Cx5::get_potencia(){ 
    return potencia;
}
/**
 * setter de variable torque
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param torque
 * @return
 */
void Cx5::set_torque(int torq){ 
    torque = torq;
}
/**
 * getter de variable torque
 * regresa torque
 * 
 * @param
 * @return torque
*/
int Cx5::get_torque(){ 
    return torque;
}
/**
 * setter de variable sport
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param sport
 * @return
 */
void Cx5::set_sport(bool spor){ 
    sport = spor;
}
/**
 * getter de variable sport
 * regresa sport
 * 
 * @param
 * @return sport
*/
bool Cx5::get_sport(){ 
    return sport;
}
/**
 * setter de variable grandTouring
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param grandTouring
 * @return
 */
void Cx5::set_grandTouring(bool gt){ 
    grandTouring = gt;
}
/**
 * getter de variable grandTouring
 * regresa grandTouring
 * 
 * @param
 * @return grandTouring
*/
bool Cx5::get_grandTouring(){ 
    return grandTouring;
}
/**
 * setter de variable signature
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param signature
 * @return
 */
void Cx5::set_signature(bool sig){ 
    signature = sig;
}
/**
 * getter de variable signature
 * regresa signature
 * 
 * @param
 * @return signature
*/
bool Cx5::get_signature(){ 
    return signature;
}
//Declaración de la clase CX 50 que hereda de la clase Mazda
class Cx50:public Mazda{

    //Declaro las variables privadas 
    private: 
    float motor;
    int potencia;
    int torque;
    bool turbo;
    std::string marca = "Cx 50";

    //Atributos públicos
    public:
    /**
     * Constructor por default
     * 
     * @param 
     * @return Objeto Cx50
     */
    Cx50(): Mazda(), motor(0), potencia(0), torque(0) {};
    /**
     * Constructor
     * 
     * @param cant, model, mot, poten, torq
     * @return Objeto Cx50
     */
    Cx50(int cant, int model, float mot, int poten, int torq):Mazda(cant, model), motor(mot), potencia(poten), torque(torq){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, turb, poten, torq
     * @return Objeto Cx50
     */
    Cx50(int cant, int model, float mot, bool turb, int poten, int torq):Mazda(cant, model), motor(mot), turbo(turb), potencia(poten), torque(torq){};
    //Métodos miembro de la clase 
    void imprime_atributos();
    void set_motor(float);
    float get_motor();
    void set_turbo(bool);
    bool get_turbo();
    void set_potencia(int);
    int get_potencia();
    void set_torque(int);
    int get_torque();
    
};
/**
 * Función imprime_atributos
 * Imprime los atributos de la clase, para usar polimorfismo
 * 
 * @param 
 * @return
 */
void Cx50::imprime_atributos(){
    std::cout << marca << std::endl;
    std::cout << "Quantity: " << cantidad << std::endl;
    std::cout << "Year: " << modelo << std::endl;
    std::cout << "Motor: " << motor << std::endl;
    std::cout << "Power: " << potencia << std::endl;
    std::cout << "Torque: " << torque << std::endl;
    std::cout << std::endl;
}
/**
 * setter de variable motor
 * Asigna a la variable un float que recibe del Objeto
 * 
 * @param mot
 * @return
 */
void Cx50::set_motor(float mot){ 
    motor = mot;
}
/**
 * getter de variable motor
 * regresa motor
 * 
 * @param
 * @return motor
*/
float Cx50::get_motor(){ 
    return motor;
}
/**
 * setter de variable turbo
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param turb
 * @return
 */
void Cx50::set_turbo(bool turb){ 
    turbo = turb;
}
/**
 * getter de variable turbo
 * regresa turbo
 * 
 * @param
 * @return turbo
*/
bool Cx50::get_turbo(){ 
    return turbo;
}
/**
 * setter de variable potencia
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param poten
 * @return
 */
void Cx50::set_potencia(int poten){ 
    potencia = poten;
}
/**
 * getter de variable potencia
 * regresa potencia
 * 
 * @param
 * @return potencia
*/
int Cx50::get_potencia(){ 
    return potencia;
}
/**
 * setter de variable torque
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param torque
 * @return
 */
void Cx50::set_torque(int torq){ 
    torque = torq;
}
/**
 * getter de variable torque
 * regresa torque
 * 
 * @param
 * @return torque
*/
int Cx50::get_torque(){ 
    return torque;
}
//Declaración de la clase CX 70 que hereda de la clase Mazda
class Cx70:public Mazda{

    //Declaro las variables privadas 
    private: 
    float motor;
    int potencia;
    int torque;
    bool grandTouring;
    bool turbo;
    std::string marca = "Cx 70";

    //Atributos públicos
    public:
    /**
     * Constructor por default
     * 
     * @param 
     * @return Objeto Cx70
     */
    Cx70(): Mazda(), motor(0), potencia(0), torque(0), grandTouring(false){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, poten, torq, gt
     * @return Objeto Cx70
     */
    Cx70(int cant, int model, float mot, int poten, int torq, bool gt):Mazda(cant, model), motor(mot), potencia(poten), torque(torq), grandTouring(gt){};
    /**
     * Constructor
     * 
     * @param cant, model, mot, turb, poten, torq, gt
     * @return Objeto Cx70
     */
    Cx70(int cant, int model, float mot, bool turb, int poten, int torq, bool gt):Mazda(cant, model), motor(mot), turbo(turb), potencia(poten), torque(torq), grandTouring(gt){};
    //Métodos miembro de la clase 
    void imprime_atributos();
    void set_motor(float);
    float get_motor();
    void set_turbo(bool);
    bool get_turbo();
    void set_potencia(int);
    int get_potencia();
    void set_torque(int);
    int get_torque();
    void set_grandTouring(bool);
    bool get_grandTouring();
};
/**
 * Función imprime_atributos
 * Imprime los atributos de la clase, para usar polimorfismo
 * 
 * @param 
 * @return
 */
void Cx70::imprime_atributos(){
    std::cout << marca << std::endl;
    std::cout << "Quantity: " << cantidad << std::endl;
    std::cout << "Year: " << modelo << std::endl;
    std::cout << "Motor: " << motor << std::endl;
    std::cout << "Power: " << potencia << std::endl;
    std::cout << "Torque: " << torque << std::endl;
    std::cout << "Grand Touring: " << grandTouring << std::endl;
    std::cout << std::endl;
}
/**
 * setter de variable motor
 * Asigna a la variable un float que recibe del Objeto
 * 
 * @param mot
 * @return
 */
void Cx70::set_motor(float mot){ 
    motor = mot;
}
/**
 * getter de variable motor
 * regresa motor
 * 
 * @param
 * @return motor
*/
float Cx70::get_motor(){ 
    return motor;
}
/**
 * setter de variable turbo
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param turb
 * @return
 */
void Cx70::set_turbo(bool turb){ 
    turbo = turb;
}
/**
 * getter de variable turbo
 * regresa turbo
 * 
 * @param
 * @return turbo
*/
bool Cx70::get_turbo(){ 
    return turbo;
}
/**
 * setter de variable potencia
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param poten
 * @return
 */
void Cx70::set_potencia(int poten){ 
    potencia = poten;
}
/**
 * getter de variable potencia
 * regresa potencia
 * 
 * @param
 * @return potencia
*/
int Cx70::get_potencia(){ 
    return potencia;
}
/**
 * setter de variable torque
 * Asigna a la variable un int que recibe del Objeto
 * 
 * @param torque
 * @return
 */
void Cx70::set_torque(int torq){ 
    torque = torq;
}
/**
 * getter de variable torque
 * regresa torque
 * 
 * @param
 * @return torque
*/
int Cx70::get_torque(){ 
    return torque;
}
/**
 * setter de variable grandTouring
 * Asigna a la variable un bool que recibe del Objeto
 * 
 * @param grandTouring
 * @return
 */
void Cx70::set_grandTouring(bool gt){ 
    grandTouring = gt;
}
/**
 * getter de variable grandTouring
 * regresa grandTouring
 * 
 * @param
 * @return grandTouring
*/
bool Cx70::get_grandTouring(){ 
    return grandTouring;
}


#endif // MAZDA_H
