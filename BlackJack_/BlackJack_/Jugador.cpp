#include "Jugador.h"
#include <sstream>
using std::stringstream;

Jugador::Jugador(string _nombre) : nombre(_nombre), cantMonedas(500)
{
}

void Jugador::ganador(int _cant)
{
	cantMonedas = cantMonedas + _cant;
}

bool Jugador::hacerApuesta(int _cant)
{
	if (cantMonedas >= _cant) {
		cantMonedas = cantMonedas - _cant;
		return true;
	}
	else
		return false;
}

string Jugador::getNombre()
{
	return nombre;
}

string Jugador::toString()
{
	stringstream s;
	s << " Nombre: " << nombre << "\n";
	s << " Cantidad de Monedas: " << cantMonedas << "\n";
	return s.str();
}
