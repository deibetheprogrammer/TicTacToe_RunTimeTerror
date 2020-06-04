#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H

#include "Jugador.h"
#include "string"

class JugadorHumano : public Jugador
{
	public:
		JugadorHumano();
		JugadorHumano(string,int,char);
		
		string getNombre();
		void setNombre(string);

		int getPuntos();
		void setPuntos(int);
		
		char getMarca();
		void setMarca(char);
		
		virtual void elegirCasilla(int,int)=0;
		void RealizarJugada();
		
		
		~JugadorHumano();
	protected:
};

#endif
