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
    tablero[0][1] = '+';

    tablero[0][10]= '#';
    tablero[0][9]=  '#';

    tablero[10][10]= '+';
    tablero[10][9] = '+';

    tablero[10][0]= '#';
    tablero[10][1]= '#';
}

Tablero::~Tablero(){

    for (int i = 0; i < 11; i++) {
        delete[] tablero [i];
        tablero [i] = NULL;
      }
      delete [] tablero;

}



bool Tablero::ValidarRectas(int nuevaPosX, int nuevaPosY, int oldPosX, int oldPosY){

    if ( (nuevaPosX >= 0) && (nuevaPosY < 11 ) ) {

    }

}



void Tablero::imprimir(){

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout <<"[" << tablero[i][j] <<"]";
        }
            cout << endl;
    }
}


bool Tablero::gane(bool turn){
    bool gana = true;
    char verificador = ' ';
    if(turn == true){
        verificador = '+';
    }else{
        verificador = '#';
    }

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            if (tablero[i][j]== '+') {
                if ( tablero[i][j]== verificador) {
                    bool gana = true;
                }else{
                    bool gana = false;
                    break;
                }
            }
        }
    }
    return gana;
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

        if(tablero[f][c]== ' ' ){

        for (int i = 0; i <11 ; i++) {
                for (int j = 0; j < 11; j++) {
                    if( tablero[i][j]== ' ' ){
                        //std::cout << "1" << std::endl;
                            if ( f >= 0 && c < 11 && c > -1  ) {
                                //std::cout << "2" << std::endl;
                                tablero[f][c] = jugadorActual;
                                //std::cout << "2" << std::endl;

                            }
                            if (  (f-1 < 11)  && (f - 1 >= 0) && (c - 1 >= 0) && (c < 11) ) {
                                tablero[f - 1][c - 1] = jugadorActual;
                                //std::cout << "3" << std::endl;

                            }
                            if ( (f + 1 < 11) && ( f + 1 >=0 ) && (c + 1 < 11) && tablero[f+1][c+1] == jugadorContrincante) {
                                //std::cout << "4" << std::endl;
                                tablero[f + 1][c + 1] = jugadorActual;
                            }

                            if ( (f + 1 < 11) && ( f + 1 >=0 ) && (c > -1) &&tablero [f+1][c] == jugadorContrincante) {
                                //std::cout << "5" << std::endl;

                                tablero[f + 1][c] = jugadorActual;

                            }
                            if ( (c + 1 < 11 && f > -1 ) && tablero[f][c+1] == jugadorContrincante) {
                                //std::cout << "6" << std::endl;

                                tablero[f][c + 1] = jugadorActual;

                            }

                            if ( (f - 1 > -1 && c < 11) && tablero[f-1][c] == jugadorContrincante) {
                            //    std::cout << "7" << std::endl;

                                tablero[f - 1][c] = jugadorActual;
                            }
                            if ((f < 11 && c - 1 > -1) && tablero[f][c-1] == jugadorContrincante)  {
                            //    std::cout << "8" << std::endl;

                                tablero[f][c - 1] = jugadorActual;
                            }
                            if ( (f - 1 > -1 && c + 1 < 11 ) && tablero[f-1][c+1] == jugadorContrincante) {
                            //    std::cout << "9" << std::endl;

                                tablero[f - 1][c + 1] = jugadorActual;
                            }
                            if ( (c - 1 > -1 && f + 1 < 11) && tablero[f+1][c-1] == jugadorContrincante) {
                            //    std::cout << "10" << std::endl;
                                tablero[f + 1][c - 1] = jugadorActual ;
                        }
                    }
                }
            }
        }
}
