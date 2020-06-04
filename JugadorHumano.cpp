#include "JugadorHumano.h"
#include "string"


JugadorHumano::JugadorHumano()
{
}

JugadorHumano::~JugadorHumano()
{
}

JugadorHumano::JugadorHumano(string pnombre, int ppuntos, char pmarca){
	nombre=pnombre;
	puntos=ppuntos;
	marca=pmarca;
}

string JugadorHumano::getNombre(){
	return nombre;
}

void JugadorHumano::setNombre(string pnombre){
	nombre=pnombre;
}

int JugadorHumano::getPuntos(){
	return puntos;	
}

void JugadorHumano::setPuntos(int ppuntos){
	puntos=ppuntos;
}

char JugadorHumano::getMarca(){
	return marca;
}

void JugadorHumano::setMarca(char pmarca){
	marca=pmarca;
}

void JugadorHumano::elegirCasilla(int x, int y){
	corx=x;
	cory=y;
} //Método Virtual Puro

void Jugador::RealizarJugada(){
	
}
