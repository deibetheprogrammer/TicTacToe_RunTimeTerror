#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>

using namespace std;

class Jugador{

	public:
		
		Jugador();
		string getNombre();
		void setNombre(string);

		int getPuntos();
		void setPuntos(int);
		
		char getMarca();
		void setMarca(char);
		virtual void elegirCasilla() =0 ; //Método Virtual Puro
		void RealizarJugada();

	protected:
		string nombre;
		int puntos;
		char marca;
};
#endif