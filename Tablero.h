#include <iostream>

class Tablero{

    private:
        char** tablero ;
        bool jugador;
    public:
        Tablero();
        ~Tablero();
        void limpiar();
        void imprimir();
        bool gane(bool);
        bool ValidarRectas(int ,int ,int ,int);
        bool ValidarDiagonales(int, int , int , int );
        void mover(int , int, bool);

};
