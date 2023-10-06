#include "Juego.h"

Juego::Juego()
{
	// pruebas
	Jugador* player;
	cjnJugadores.agregar(player = new Jugador("Felipe"));
	cjnJugadores.agregar(player = new Jugador("Jeremy"));
	cjnJugadores.agregar(player = new Jugador("Irina"));
	cjnJugadores.agregar(player = new Jugador("Gabriel"));
	cjnJugadores.agregar(player = new Jugador("Pablo"));

	cout << cjnJugadores.toString() << endl;

	if (cjnJugadores.recuperar("Pablo") != nullptr) {
		player = cjnJugadores.recuperar("Pablo");

		if (player->hacerApuesta(200)) {
			cout << "Se realizo la apuesta \n";
		}
		else {
			cout << "Esta pobre por que no le alcanzo para la apuesta \n";
		}
	}
	cout << cjnJugadores.toString();
	system("pause");
}
