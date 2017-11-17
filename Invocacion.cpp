#include "Invocacion.h"

Invocacion::Invocacion(string nombre,double nivel,string Petname,string Especie,string Habilidad,string Tipomascota):Poder(nombre,nivel){
	this->Petname=Petname;
	this->Especie=Especie;
	this->Habilidad=Habilidad;
	this->Tipomascota=Tipomascota;
}
Invocacion::Invocacion(){

}void Invocacion::setPetname(string Petname){
   this-> Petname=Petname;
}
string Invocacion::getPetname(){
   return Petname;
}
void Invocacion::setEspecie(string Especie){
   this-> Especie=Especie;
}
string Invocacion::getEspecie(){
   return Especie;
}
void Invocacion::setHabilidad(string Habilidad){
   this-> Habilidad=Habilidad;
}
string Invocacion::getHabilidad(){
   return Habilidad;
}
void Invocacion::setTipomascota(string Tipomascota){
   this-> Tipomascota=Tipomascota;
}
string Invocacion::getTipomascota(){
   return Tipomascota;
}

