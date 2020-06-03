#ifndef JUGADOHUMANO_H
#define JUGADOHUMANO_H
#include <string.h>

#include "Jugador.h"

class JugadoHumano : public Jugador
{
	public:
		
		Jugadohumano();
		Jugadohumano(string,int,char);
		
		string getNombre();
		void setNombre(string);

		int getPuntos();
		void setPuntos(int);
		
		char getMarca();
		void setMarca(char);
		
		virtual void elegirCasilla()=0;
		void RealizarJugada();
		
	protected:
		
		
};

#endif
