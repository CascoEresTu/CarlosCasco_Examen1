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
        bool Validar(int ,int ,int ,int);
        void mover(int , int, bool);

};
