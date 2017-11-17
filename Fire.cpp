#include "Fire.h"

Fire::Fire(int edad,string nombre,string nacion,string sexo,int Cicatrices,Poder* poder,int Victoria):Persona(edad,nombre,nacion,sexo){
	this->Cicatrices=Cicatrices;
	this->poder=poder;
	this->Victoria=Victoria;
}
Fire::Fire(){

}void Fire::setCicatrices(int Cicatrices){
   this-> Cicatrices=Cicatrices;
}
int Fire::getCicatrices(){
   return Cicatrices;
}
void Fire::setPoder(Poder* poder){
   this-> poder=poder;
}
Poder* Fire::getPoder(){
   return poder;
}
void Fire::setVictoria(int Victoria){
   this-> Victoria=Victoria;
}
int Fire::getVictoria(){
   return Victoria;
}
