#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"

using namespace std;

#ifndef NONBENDER_H
#define NONBENDER_H
class nonbender : public Persona{
	protected:
		double Fuerza;
		double velocidad;
	public:
		nonbender(int,string,string,string,double,double);
		nonbender();
		double getFuerza();
		void setFuerza(double);
		//Persona(int,string,string,string);
		double getVelocidad();
		void setVelocidad(double);

};
#endif