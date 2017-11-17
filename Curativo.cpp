#include "Curativo.h"

Curativo::Curativo(string Tipo){
	this->Tipo=Tipo;
}
Curativo::Curativo(){

}void Curativo::setTipo(string Tipo){
   this-> Tipo=Tipo;
}
string Curativo::getTipo(){
   return Tipo;
}
