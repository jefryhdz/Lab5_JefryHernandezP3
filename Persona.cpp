#include "Persona.h"

Persona::Persona(int edad,string nombre,string nacion,string sexo){
	this->edad=edad;
	this->nombre=nombre;
	this->nacion=nacion;
	this->sexo=sexo;
	t
}
Persona::Persona(){

}void Persona::setEdad(int edad){
   this-> edad=edad;
}
int Persona::getEdad(){
   return edad;
}
void Persona::setNombre(string nombre){
   this-> nombre=nombre;
}
string Persona::getNombre(){
   return nombre;
}
void Persona::setNacion(string nacion){
   this-> nacion=nacion;
}
string Persona::getNacion(){
   return nacion;
}
void Persona::setSexo(string sexo){
   this-> sexo=sexo;
}
string Persona::getSexo(){
   return sexo;
}
