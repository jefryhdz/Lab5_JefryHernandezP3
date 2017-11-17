#include "Defensivo.h"

Defensivo::Defensivo(double Resistencia,double Duracion){
	this->Resistencia=Resistencia;
	this->Duracion=Duracion;
}
Defensivo::Defensivo(){

}void Defensivo::setResistencia(double Resistencia){
   this-> Resistencia=Resistencia;
}
double Defensivo::getResistencia(){
   return Resistencia;
}
void Defensivo::setDuracion(double Duracion){
   this-> Duracion=Duracion;
}
double Defensivo::getDuracion(){
   return Duracion;
}
