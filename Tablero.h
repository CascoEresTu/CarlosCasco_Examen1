#include <iostream>

class Tablero{

    protected:
        char** tablero ;
        bool jugador;
    public:
        Tablero();
        ~Tablero();
        void limpiar();
        void imprimir();
        bool gane(bool);
        bool Validar(int ,int );
        void mover(int , int, bool);

};
