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
    cout << "TURNO JUGADOR 1: " << endl;
    prueba->imprimir();



    while (true) {
            while(true){
                cout << "[X]: " << endl;
                cin >> nuevaPosX;
                cout << "[Y]: " << endl;
                cin >> nuevaPosY;
                if( (nuevaPosX < 11 && nuevaPosX > -1) && (nuevaPosY < 11 && nuevaPosY > -1) ){
                    break;
                }else{
                    cout << "VALORES INVALIDOS, INGRESE DE NUEVO" << endl;
                }
        }


        prueba->mover(nuevaPosX,nuevaPosY,turno);



        if (turno == true) {
            turno = false;
            std::cout << "TURNO JUGADOR 2 " << std::endl;
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
