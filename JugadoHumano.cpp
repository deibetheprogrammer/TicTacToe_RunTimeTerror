#include "JugadoHumano.h"



JugadoHumano::Jugador(string nombre, int puntos,char marca){
	this->nombre=nombre;
	this->puntos=puntos;
	this->marca=marca;
}

string JugadoHumano::getNombre(){
	return nombre;
}

void JugadoHumano::setNombre(string pnombre){
	nombre=pnombre;
}

int JugadoHumano::getPuntos(){
	return puntos;	
}

void JugadoHumano::setPuntos(int ppuntos){
	puntos=ppuntos;
}

char JugadoHumano::getMarca(){
	return marca;
}

void JugadoHumano::setMarca(char pmarca){
	marca=pmarca;
}

void JugadoHumano::elegirCasilla(){

}

void JugadoHumano::RealizarJugada(){
	
}
