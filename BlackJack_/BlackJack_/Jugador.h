#pragma once
#include <string>
using namespace std;

class Jugador
{
public:
	Jugador(string);
	void ganador(int);
	bool hacerApuesta(int);
	string getNombre();
	string toString();

private:
	string nombre;
	int cantMonedas;
};

