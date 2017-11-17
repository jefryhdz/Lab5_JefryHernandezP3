#include <iostream>
#include <string>
#include <vector>
#include "Poder.h"

using namespace std;

#ifndef OFENSIVO_H
#define OFENSIVO_H
class Ofensivo : Poder{
	protected:
		double rango;
		double fuerza;
	public:
		Ofensivo(double,double);
		Ofensivo();
		double getRango();
		void setRango(double);

		double getFuerza();
		void setFuerza(double);

};
#endif