#include "Tablero.h"
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    bool turno =  true;
    std::cout << "HOLIS" << std::endl;

    Tablero* prueba = new Tablero();

    int nuevaPosX;
    int nuevaPosY;
    int oldPosX;
    int oldPosY;


    prueba->imprimir();
    while (true) {
        std::cout << "[X]: " << std::endl;
        std::cin >> nuevaPosX;
        std::cout << "[Y]: " << std::endl;
        std::cin >> nuevaPosY;

        prueba->mover(nuevaPosX,nuevaPosY,turno);
        prueba->imprimir();
        if (turno == true) {
            turno = false;
        }else{
            turno = true;
        }

    }


    return 0;

}
