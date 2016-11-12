#include "Tablero.h"
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    bool turno =  true;
    cout << "HOLIS" << endl;

    Tablero* prueba = new Tablero();

    int cont =  0 ;

    int nuevaPosX;
    int nuevaPosY;
    int oldPosX;
    int oldPosY;

    prueba->imprimir();


    while (true) {

        if (cont>0) {
            oldPosX= nuevaPosX;
            oldPosY= nuevaPosY;
        }

        cout << "[X]: " << endl;
        cin >> nuevaPosX;
        cout << "[Y]: " << endl;
        cin >> nuevaPosY;

        if (cont>0) {
            oldPosX= nuevaPosX;
            oldPosY= nuevaPosY;
        }

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
        cont++;
    }

    prueba->~Tablero();

    return 0;

}
