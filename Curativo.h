#include <iostream>
#include <string>
#include <vector>
#include "Poder.h"

using namespace std;

#ifndef CURATIVO_H
#define CURATIVO_H
class Curativo : Poder{
	protected:
		string Tipo;
	public:
		Curativo(string,double,string);
		Curativo();
		string getTipo();
		void setTipo(string);

};
#endif