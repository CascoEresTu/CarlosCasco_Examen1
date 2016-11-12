#include "Tablero.h"
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    bool turno =  true;
    cout << "HOLIS" << endl;

    Tablero* prueba = new Tablero();

    int nuevaPosX;
    int nuevaPosY;
    int oldPosX;
    int oldPosY;

    prueba->imprimir();

    while (true) {
        cout << "[X]: " << endl;
        cin >> nuevaPosX;
        cout << "[Y]: " << endl;
        cin >> nuevaPosY;

        prueba->mover(nuevaPosX,nuevaPosY,turno);

        if (turno == true) {
            turno = false;
        }else{
            turno = true;
        }

        prueba->imprimir();


        if (prueba->gane(turno)==true) {
            break;
        }
    }

    prueba->~Tablero();

    return 0;

}
