#include "Jugador.h"

Jugador::Jugador(){
	nombre="";
	puntos=0;
	marca=' ';
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

void Jugador::elegirCasilla(){

} //Método Virtual Puro

void Jugador::RealizarJugada(){
	
}