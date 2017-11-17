#include <iostream>
#include <string>
#include <vector>
#include "Poder.h"

using namespace std;

#ifndef INVOCACION_H
#define INVOCACION_H
class Invocacion : Poder{
	protected:
		string Petname;
		string Especie;
		string Habilidad;
		string Tipomascota;
	public:
		Invocacion(string,string,string,string);
		Invocacion();
		string getPetname();
		void setPetname(string);

		string getEspecie();
		void setEspecie(string);

		string getHabilidad();
		void setHabilidad(string);

		string getTipomascota();
		void setTipomascota(string);


};
#endif