#include "Ofensivo.h"

Ofensivo::Ofensivo(string nombre, double nivel, double rango,double fuerza):Poder(nombre,nivel){
	this->rango=rango;
	this->fuerza=fuerza;
}
Ofensivo::Ofensivo(){

}void Ofensivo::setRango(double rango){
   this-> rango=rango;
}
double Ofensivo::getRango(){
   return rango;
}
void Ofensivo::setFuerza(double fuerza){
   this-> fuerza=fuerza;
}
double Ofensivo::getFuerza(){
   return fuerza;
}
