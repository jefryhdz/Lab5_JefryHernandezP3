#include <iostream>
#include <string>
#include <vector>
#include "Poder.h"

using namespace std;

#ifndef DEFENSIVO_H
#define DEFENSIVO_H
class Defensivo :public Poder{
	protected:
		double Resistencia;
		double Duracion;
	public:
		Defensivo(string,double,double,double);
		Defensivo();
		double getResistencia();
		void setResistencia(double);

		double getDuracion();
		void setDuracion(double);

};
#endif