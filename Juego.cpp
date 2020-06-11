#include "Juego.h"

using std::cout;

//CONSTRUCTORS
Juego::Juego()
{
}

Juego::Juego(Tablero tablero, Jugador* jugador1, Jugador* jugador2) {
	
	this->tablero = tablero;
	this->jugadores[0] = jugador1;
	this->jugadores[1] = jugador2;
}

//GETTERS
Tablero Juego::getTablero() {
	return tablero;
}
		
Jugador* Juego::getJugadores() {
	return *jugadores;
}
		
//SETTERS
void Juego::setTablero(Tablero tablero) {
	this->tablero = tablero;
}

//FUNCIONES
int Juego::validarGanador() {
	
	int winner = 2;
	
	Jugador* j1 = jugadores[0];
	Jugador* j2 = jugadores[1];
	
	//Validar si J1 ganó
	
	//horizontales
	if(tablero.matriz[0][0]->getValue() == j1->getMarca() && tablero.matriz[0][1]->getValue() == j1->getMarca() && tablero.matriz[0][2]->getValue() == j1->getMarca())
		winner = 0;
	
	if(tablero.matriz[1][0]->getValue() == j1->getMarca() && tablero.matriz[1][1]->getValue() == j1->getMarca() && tablero.matriz[1][2]->getValue() == j1->getMarca())
		winner = 0;
	
	if(tablero.matriz[2][0]->getValue() == j1->getMarca() && tablero.matriz[2][1]->getValue() == j1->getMarca() && tablero.matriz[2][2]->getValue() == j1->getMarca())
		winner = 0;
	
	//verticales
	if(tablero.matriz[0][0]->getValue() == j1->getMarca() && tablero.matriz[1][0]->getValue() == j1->getMarca() && tablero.matriz[2][0]->getValue() == j1->getMarca())
		winner = 0;
	
	if(tablero.matriz[0][1]->getValue() == j1->getMarca() && tablero.matriz[1][1]->getValue() == j1->getMarca() && tablero.matriz[2][1]->getValue() == j1->getMarca())
		winner = 0;
	
	if(tablero.matriz[0][2]->getValue() == j1->getMarca() && tablero.matriz[1][2]->getValue() == j1->getMarca() && tablero.matriz[2][2]->getValue() == j1->getMarca())
		winner = 0;
	
	//diagonales
	if(tablero.matriz[0][0]->getValue() == j1->getMarca() && tablero.matriz[1][1]->getValue() == j1->getMarca() && tablero.matriz[2][2]->getValue() == j1->getMarca())
		winner = 0;
		
	if(tablero.matriz[0][2]->getValue() == j1->getMarca() && tablero.matriz[1][1]->getValue() == j1->getMarca() && tablero.matriz[2][0]->getValue() == j1->getMarca())
		winner = 0;
	
	//Validar si J2 ganó
	
	//horizontales
	if(tablero.matriz[0][0]->getValue() == j2->getMarca() && tablero.matriz[0][1]->getValue() == j2->getMarca() && tablero.matriz[0][2]->getValue() == j2->getMarca())
		winner = 1;
	
	if(tablero.matriz[1][0]->getValue() == j2->getMarca() && tablero.matriz[1][1]->getValue() == j2->getMarca() && tablero.matriz[1][2]->getValue() == j2->getMarca())
		winner = 1;
	
	if(tablero.matriz[2][0]->getValue() == j2->getMarca() && tablero.matriz[2][1]->getValue() == j2->getMarca() && tablero.matriz[2][2]->getValue() == j2->getMarca())
		winner = 1;
	
	//verticales
	if(tablero.matriz[0][0]->getValue() == j2->getMarca() && tablero.matriz[1][0]->getValue() == j2->getMarca() && tablero.matriz[2][0]->getValue() == j2->getMarca())
		winner = 1;
	
	if(tablero.matriz[0][1]->getValue() == j2->getMarca() && tablero.matriz[1][1]->getValue() == j2->getMarca() && tablero.matriz[2][1]->getValue() == j2->getMarca())
		winner = 1;
	
	if(tablero.matriz[0][2]->getValue() == j2->getMarca() && tablero.matriz[1][2]->getValue() == j2->getMarca() && tablero.matriz[2][2]->getValue() == j2->getMarca())
		winner = 1;
	
	//diagonales
	if(tablero.matriz[0][0]->getValue() == j2->getMarca() && tablero.matriz[1][1]->getValue() == j2->getMarca() && tablero.matriz[2][2]->getValue() == j2->getMarca())
		winner = 1;
		
	if(tablero.matriz[0][2]->getValue() == j2->getMarca() && tablero.matriz[1][1]->getValue() == j2->getMarca() && tablero.matriz[2][0]->getValue() == j2->getMarca())
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
