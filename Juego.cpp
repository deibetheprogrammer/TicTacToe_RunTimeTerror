#include "Juego.h"

//CONSTRUCTORS
Juego::Juego()
{
}

Juego::Juego(Tablero tablero, Jugador jugador1, Jugador jugador2) {
	
	this->tablero = tablero;
	this->jugadores[0] = jugador1;
	this->jugadores[1] = jugador2;
}

//GETTERS
Tablero getTablero() {
	return tablero;
}
		
Jugador* getJugadores() {
	return jugadores;
}
		
//SETTERS
void setTablero(Tablero tablero) {
	this->tablero = tablero;
}
		
void setJugadores(Jugador* jugadores) {
	this->jugadores = jugadores;
}

//FUNCIONES
Juego::validarGanador() {
	
}

Juego::elegirGanador() {
	
}

Juego::mostrarPuntuaciones() {
	
}

Juego::imprimirJugadores() {
	
}

//DESTRUCTOR
Juego::~Juego()
{
	
}
