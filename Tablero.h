#ifndef TABLERO_H
#define TABLERO_H

#include "Casilla.h"

class Tablero
{
	public:
		Tablero();
		
		bool marcarCasilla(int,int,char);
		void printTablero();
		
		~Tablero();
	protected:
		//matriz de apuntadores a casillas
		Casilla*** matriz; 
		int size;
};

#endif
