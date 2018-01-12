#include <iostream>
#include <w32api/wingdi.h>
#include "Automovil.h"
int main() {
    std::string a,b,c,d,e;


    std::cout<<"Escribe la marca"<<"\n";
    std::cin>>a;
    std::cout<<"Escribe el modelo"<<"\n";
    std::cin>>b;
    std::cout<<"Escribe el color"<<"\n";
    std::cin>>c;
    std::cout<<"Escribe el precio"<<"\n";
    std::cin>>d;
    std::cout<<"Escribe la capacidad de ocupantes"<<"\n";
    std::cin>>e;

    Automovil carro = *new Automovil (a,b,c,d,e);

    std::cout<< carro.getMarca()<<"\n";
    std::cout<< carro.getModelo()<<"\n";
    std::cout<< carro.getColor()<<"\n";
    std::cout<< carro.getPrecio()<<"\n";
    std::cout<< carro.getOcupantes()<<"\n";
    return 0;
}