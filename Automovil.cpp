//
// Created by el_me on 11/01/2018.
//

#include "Automovil.h"

Automovil::Automovil(){
    this->modelo = "";
    this->marca = "";
    this->color = "";
    this->precio = "";
    this->ocupantes = "";

}
Automovil::Automovil(std::string marca, std::string modelo, std::string color, std::string precio, std::string ocupantes){
    this->modelo = modelo;
    this->marca = marca;
    this->color = color;
    this->precio = precio;
    this->ocupantes = ocupantes;
}
std::string Automovil::muestraAuto() {
    return "Modelo: " + this->modelo + " Marca: " + this->marca + " Color: " + this->color + " Ocupantes: " + this->ocupantes + " Precio: " + this->precio;
}
void Automovil::setModelo(std::string modelo){
    this->modelo = modelo;
}

void Automovil::setMarca(std::string marca) {
    this->marca = marca;
}
void Automovil::setColor(std::string color) {
    this->color = color;
}
void Automovil::setPrecio(std::string precio) {
    this->precio = precio;
}
void Automovil::setOcupantes(std::string ocupantes) {
    this->ocupantes = ocupantes;
}

std::string &Automovil::getModelo() {
    return this->modelo;
}

std::string &Automovil::getMarca() {
    return this->marca;
}
std::string &Automovil::getColor() {
    return this->color;
}
std::string Automovil::getPrecio() {
    return this->precio;
}
std::string Automovil::getOcupantes() {
    return this->ocupantes;
}
