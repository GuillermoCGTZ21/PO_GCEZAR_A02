//
// Created by el_me on 11/01/2018.
//

#ifndef PO_GCEZAR_A02_AUTOMOVIL_H
#define PO_GCEZAR_A02_AUTOMOVIL_H


#include <iostream>

class Automovil {
//atributos
private:
    std::string marca;
    std::string modelo;
    std::string color;
    std::string precio;
    std::string ocupantes;
    int kilometraje;
//constructores
public:
    Automovil();
    Automovil(std::string marca, std::string modelo, std::string color, std::string precio, std::string ocupantes);
//mostrar info
std::string muestraAuto();

//getters and setters
void setMarca (std::string marca);
void setModelo (std::string modelo);
void setColor (std::string color);
void setPrecio (std::string precio);
void setOcupantes (std::string  ocupantes);
std::string &getMarca();
std::string &getModelo();
std::string &getColor();
std::string getPrecio();
std::string getOcupantes();


};


#endif //PO_GCEZAR_A02_AUTOMOVIL_H
