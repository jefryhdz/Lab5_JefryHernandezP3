#include "Earth.h"

Earth::Earth(int edad, string nombre,string nacion,string sexo,double Durabilidad,double Graduacion,Poder* poder):Persona(edad,nombre,nacion,sexo){
	this->Durabilidad=Durabilidad;
	this->Graduacion=Graduacion;
	this->poder=poder;
}
Earth::Earth(){

}void Earth::setDurabilidad(double Durabilidad){
   this-> Durabilidad=Durabilidad;
}
double Earth::getDurabilidad(){
   return Durabilidad;
}
void Earth::setGraduacion(double Graduacion){
   this-> Graduacion=Graduacion;
}
double Earth::getGraduacion(){
   return Graduacion;
}
void Earth::setPoder(Poder* poder){
	this->poder=poder;
}
Poder* Earth::getPoder(){
	return poder;
}
