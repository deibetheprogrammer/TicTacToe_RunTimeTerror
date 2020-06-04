#include "Jugador.h"

Jugador::Jugador(){
	nombre="";
	puntos=0;
	marca=' ';
	corx=0;
	cory=0;
}

Jugador::Jugador(string pnombre, int ppuntos, char pmarca){
	nombre=pnombre;
	puntos=ppuntos;
	marca=pmarca;
}

string Jugador::getNombre(){
	return nombre;
}

void Jugador::setNombre(string pnombre){
	nombre=pnombre;
}

int Jugador::getPuntos(){
	return puntos;	
}

void Jugador::setPuntos(int ppuntos){
	puntos=ppuntos;
}

char Jugador::getMarca(){
	return marca;
}

void Jugador::setMarca(char pmarca){
	marca=pmarca;
}

bool Jugador::elegirCasilla(int x, int y){
	return false;
} //Método Virtual Puro

void Jugador::RealizarJugada(Tablero* tab){
	
}