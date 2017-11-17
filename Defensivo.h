#include <iostream>
#include <string>
#include <vector>
#include "Poder.h"

using namespace std;

#ifndef DEFENSIVO_H
#define DEFENSIVO_H
class Defensivo : Poder{
	protected:
		double Resistencia;
		double Duracion;
	public:
		Defensivo(double,double);
		Defensivo();
		double getResistencia();
		void setResistencia(double);

		double getDuracion();
		void setDuracion(double);

};
#endif