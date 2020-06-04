#include "Juego.h"

using std::cout;

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
int Juego::validarGanador() {
	
	int winner = 2;
	
	Jugador* j1 = jugadores[0];
	Jugador* j2 = jugadores[1];
	
	//Validar si J1 ganó
	
	//horizontales
	if(tablero[0][0] == j1->getMarca() && tablero[0][1] == j1->getMarca() && tablero[0][2] == j1->getMarca())
		winner = 0;
	
	if(tablero[1][0] == j1->getMarca() && tablero[1][1] == j1->getMarca() && tablero[1][2] == j1->getMarca())
		winner = 0;
	
	if(tablero[2][0] == j1->getMarca() && tablero[2][1] == j1->getMarca() && tablero[2][2] == j1->getMarca())
		winner = 0;
	
	//verticales
	if(tablero[0][0] == j1->getMarca() && tablero[1][0] == j1->getMarca() && tablero[2][0] == j1->getMarca())
		winner = 0;
	
	if(tablero[0][1] == j1->getMarca() && tablero[1][1] == j1->getMarca() && tablero[2][1] == j1->getMarca())
		winner = 0;
	
	if(tablero[0][2] == j1->getMarca() && tablero[1][2] == j1->getMarca() && tablero[2][2] == j1->getMarca())
		winner = 0;
	
	//diagonales
	if(tablero[0][0] == j1->getMarca() && tablero[1][1] == j1->getMarca() && tablero[2][2] == j1->getMarca())
		winner = 0;
		
	if(tablero[0][2] == j1->getMarca() && tablero[1][1] == j1->getMarca() && tablero[2][0] == j1->getMarca())
		winner = 0;
	
	//Validar si J2 ganó
	
	//horizontales
	if(tablero[0][0] == j2->getMarca() && tablero[0][1] == j2->getMarca() && tablero[0][2] == j2->getMarca())
		winner = 1;
	
	if(tablero[1][0] == j2->getMarca() && tablero[1][1] == j2->getMarca() && tablero[1][2] == j2->getMarca())
		winner = 1;
	
	if(tablero[2][0] == j2->getMarca() && tablero[2][1] == j2->getMarca() && tablero[2][2] == j2->getMarca())
		winner = 1;
	
	//verticales
	if(tablero[0][0] == j2->getMarca() && tablero[1][0] == j2->getMarca() && tablero[2][0] == j2->getMarca())
		winner = 1;
	
	if(tablero[0][1] == j2->getMarca() && tablero[1][1] == j2->getMarca() && tablero[2][1] == j2->getMarca())
		winner = 1;
	
	if(tablero[0][2] == j2->getMarca() && tablero[1][2] == j2->getMarca() && tablero[2][2] == j2->getMarca())
		winner = 1;
	
	//diagonales
	if(tablero[0][0] == j2->getMarca() && tablero[1][1] == j2->getMarca() && tablero[2][2] == j2->getMarca())
		winner = 1;
		
	if(tablero[0][2] == j2->getMarca() && tablero[1][1] == j2->getMarca() && tablero[2][0] == j2->getMarca())
		winner = 1;
		
	delete j1;
	delete j2;
	
	return winner;
		
}

int Juego::elegirGanador() {
	
	if(jugadores[0]->getPuntos() > jugadores[1]->getPuntos()) {
		cout << "\n\n"
			 << jugadores[0]->getNombre() << " gana !"
			 << "\n";
		
	} else {
		cout << "\n\n"
			 << jugadores[1]->getNombre() << " gana !"
			 << "\n";
	}
	
	return 0;
}

void Juego::mostrarPuntuaciones() {
	
	cout << "\n\n"
		 << "Puntos Jugador 1: " << jugadores[0]->getPuntos()
		 << " | "
		 << "Puntos Jugador 2: " << jugadores[1]->getPuntos();
}

void Juego::imprimirJugadores() {
	
	cout << "\n\n"
		 << "Jugador 1: " << jugadores[0]->getNombre()
		 << " | "
		 << "Jugador 2: " << jugadores[1]->getNombre();
}

//DESTRUCTOR
Juego::~Juego()
{
	tablero.~Tablero();
		
}
