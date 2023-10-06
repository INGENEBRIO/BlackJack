#pragma once
#include "Jugador.h"
#include <list>

class ConjuntoJugadores
{
public:
	ConjuntoJugadores();
	virtual ~ConjuntoJugadores();
	void agregar(Jugador*);
	Jugador* recuperar(string);
	string toString();
private:
	list<Jugador> jugadores;
	list<Jugador>::iterator it;
};

