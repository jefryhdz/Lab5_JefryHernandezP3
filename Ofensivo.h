#include <iostream>
#include <string>
#include <vector>
#include "Poder.h"

using namespace std;

#ifndef OFENSIVO_H
#define OFENSIVO_H
class Ofensivo :public Poder{
	protected:
		double rango;
		double fuerza;
	public:
		Ofensivo(string,double,double,double);
		Ofensivo();
		double getRango();
		void setRango(double);

		double getFuerza();
		void setFuerza(double);

};
#endif