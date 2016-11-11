#include "Tablero.h"
#include <iostream>

using namespace std;

Tablero::Tablero(){
    tablero = new  char*[11];

    for (int i = 0; i < 11; i++) {
      tablero[i] = new char[11];
    }

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            tablero[i][j] = ' ' ;
        }
    }

    tablero[0][0] = '+';
    tablero[0][10]= '#';
    tablero[10][10] = '+';
    tablero[10][0]= '#';

}

void Tablero::imprimir(){

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout <<"[" << tablero[i][j] <<"]";
        }
            cout << endl;
    }

}


void Tablero::mover(int f, int c, bool turn){

        char jugadorActual;
        char jugadorContrincante;

        if(turn == true){
            jugadorActual = '+';
            jugadorContrincante = '#' ;
        }

        if (turn == false){
            jugadorActual = '#';
            jugadorContrincante = '+' ;
        }


        for (int i = 0; i <11 ; i++) {
                for (int j = 0; j < 11; j++) {
                    if(!tablero[i][j]== jugadorActual ){

                            if ( (f >= 0 && c < 11 )) {
                                tablero[f][c] = jugadorActual;
                            }
                            if ( (f - 1 >= 0 && c - 1 >= 0) && tablero[f-1][c-1] == jugadorContrincante) {
                                tablero[f - 1][c - 1] = jugadorActual;
                            }
                            if ((f + 1 < 11 && c + 1 < 11) && tablero[f+1][c+1] == jugadorContrincante) {
                                tablero[f + 1][c + 1] = jugadorActual;
                            }

                            if ( (f + 1 < 11 && c > -1) &&tablero [f+1][c] == jugadorContrincante) {
                                tablero[f + 1][c] = jugadorActual;
                            }
                            if ( (c + 1 < 11 && f > -1 ) && tablero[f][c+1] == jugadorContrincante) {
                            tablero[f][c + 1] = jugadorActual;
                            }

                            if ( (f - 1 > -1 && c < 11) && tablero[f-1][c] == jugadorContrincante) {
                                tablero[f - 1][c] = jugadorActual;
                            }
                            if ((f < 11 && c - 1 > -1) && tablero[f-1][c] == jugadorContrincante)  {
                                tablero[f][c - 1] = jugadorActual;
                            }
                            if ( (f - 1 > -1 && c + 1 < 11 ) && tablero[f-1][c+1] == jugadorContrincante) {
                                tablero[f - 1][c + 1] = jugadorActual;
                            }
                            if ( (c - 1 > -1 && f + 1 < 11) && tablero[f+1][c-1] == jugadorContrincante) {
                                tablero[f + 1][c - 1] = jugadorActual ;
                        }
                    }
                }
            }
        }

;
