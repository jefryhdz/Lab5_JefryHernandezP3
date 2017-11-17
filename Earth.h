#include <iostream>
#include <string>
#include <vector>
#include "Poder.h"
#include "Persona.h"

using namespace std;

#ifndef EARTH_H
#define EARTH_H
class Earth : public Persona{
	protected:
		double Durabilidad;
		double Graduacion;
		Poder* poder;
	public:
		Earth(int,string,string,string,double,double);
		Earth();
		//Persona(int,string,string,string);
		double getDurabilidad();
		void setDurabilidad(double);

		double getGraduacion();
		void setGraduacion(double);

};
#endif