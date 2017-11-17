#include "Curativo.h"

Curativo::Curativo(string nombre,double nivel,string Tipo):Poder(nombre,nivel){
	this->Tipo=Tipo;
}
Curativo::Curativo(){

}void Curativo::setTipo(string Tipo){
   this-> Tipo=Tipo;
}
string Curativo::getTipo(){
   return Tipo;
}
