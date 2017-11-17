#include "Water.h"

Water::Water(int edad, string nombre,string nacion,string sexo,string Tribu,string Arma,Poder* poder):Persona(edad,nombre,nacion,sexo){
	this->Tribu=Tribu;
	this->Arma=Arma;
	this->poder=poder;
}
Water::Water(){

}void Water::setTribu(string Tribu){
   this-> Tribu=Tribu;
}
string Water::getTribu(){
   return Tribu;
}
void Water::setArma(string Arma){
   this-> Arma=Arma;
}
string Water::getArma(){
   return Arma;
}
void Water::setPoder(Poder* poder){
   this-> poder=poder;
}
Poder* Water::getPoder(){
   return poder;
}
