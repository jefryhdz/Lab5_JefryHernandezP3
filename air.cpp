#include "air.h"

air::air(int edad,string nombre,string nacion,string sexo,int Cabello,string Color,Poder* poder):Persona(edad,nombre,nacion,sexo){
	this->Cabello=Cabello;
	this->Color=Color;
	this->poder=poder;
}
air::air(){

}void air::setCabello(int Cabello){
   this-> Cabello=Cabello;
}
int air::getCabello(){
   return Cabello;
}
void air::setColor(string Color){
   this-> Color=Color;
}
string air::getColor(){
   return Color;
}
void air::setPoder(Poder* poder){
   this-> poder=poder;
}
Poder* air::getPoder(){
   return poder;
}
