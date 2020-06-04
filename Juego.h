#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Jugador.h"

class Juego
{
	public:
		//CONSTRUCTORES
		Juego();
		
		Juego(Tablero tablero, Jugador jugador1, Jugador jugador2);
		
		//FUNCIONES
		int validarGanador();
		int elegirGanador();
		void mostrarPuntuaciones();
		void imprimirJugadores();
		
		//GETTERS
		Tablero getTablero();
		
		Jugador* getJugadores();
		
		//SETTERS
		void setTablero(Tablero tablero);
		
		void setJugadores(Jugador* jugadores);
		
		//DESTRUCTORES
		~Juego();
	protected:
		
		//ATRIBUTOS
		Tablero tablero;
		Jugador* jugadores[2];
		
};

#endif
