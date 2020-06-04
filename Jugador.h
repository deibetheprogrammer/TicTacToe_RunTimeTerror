#ifndef JUGADOR_H
#define JUGADOR_H
#include "Tablero.h"
#include <iostream>
#include <string>

using namespace std;

class Jugador{

	public:
		
		Jugador();
		Jugador(string, int, char);
		string getNombre();
		void setNombre(string);

		int getPuntos();
		void setPuntos(int);
		
		char getMarca();
		void setMarca(char);
		virtual bool elegirCasilla(int ,int)=0; //Método Virtual Puro
		virtual void RealizarJugada(Tablero *);

	protected:
		string nombre;
		int puntos;
		char marca;
		int corx;
		int cory;
};
#endif