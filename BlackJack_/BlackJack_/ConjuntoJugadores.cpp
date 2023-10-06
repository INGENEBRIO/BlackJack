#include "ConjuntoJugadores.h"
#include <sstream>
using std::stringstream;

ConjuntoJugadores::ConjuntoJugadores()
{
}

ConjuntoJugadores::~ConjuntoJugadores()
{
}

void ConjuntoJugadores::agregar(Jugador* _jugador)
{
    jugadores.push_back(*_jugador);
}

Jugador* ConjuntoJugadores::recuperar(string _nombre)
{
    for (it = jugadores.begin(); it != jugadores.end(); it++) {
        if (it->getNombre() == _nombre) {
            return &*it; // Devuelve el puntero al jugador encontrado
        }
    }
    return nullptr; // Si no se encuentra el jugador, devuelve un puntero nulo
}


string ConjuntoJugadores::toString()
{
    stringstream s;
    for (it = jugadores.begin(); it != jugadores.end(); it++) {
        s << it->toString() << "\n";
    }
    return s.str();
}
