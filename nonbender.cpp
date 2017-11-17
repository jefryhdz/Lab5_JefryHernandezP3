#include "nonbender.h"

nonbender::nonbender(int edad,string nombre,string nacion,string sexo,double Fuerza,double velocidad):Persona(edad,nombre,nacion,sexo){
	this->Fuerza=Fuerza;
	this->velocidad=velocidad;
}
nonbender::nonbender(){

}void nonbender::setFuerza(double Fuerza){
   this-> Fuerza=Fuerza;
}
double nonbender::getFuerza(){
   return Fuerza;
}
void nonbender::setVelocidad(double velocidad){
   this-> velocidad=velocidad;
}
double nonbender::getVelocidad(){
   return velocidad;
}
