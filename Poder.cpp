#include "Poder.h"

Poder::Poder(string nombre,double poder){
	this->nombre=nombre;
	this->poder=poder;
}
Poder::Poder(){

}void Poder::setNombre(string nombre){
   this-> nombre=nombre;
}
string Poder::getNombre(){
   return nombre;
}
void Poder::setPoder(double poder){
   this-> poder=poder;
}
double Poder::getPoder(){
   return poder;
}
