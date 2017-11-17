#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Poder.h"

using namespace std;

#ifndef FIRE_H
#define FIRE_H
class Fire : public Persona{
	private:
		int Cicatrices;
		Poder* poder;
		int Victoria;
	public:
		Fire(int,string,string,string,int,Poder*,int);
		Fire();
		//Persona();
		int getCicatrices();
		void setCicatrices(int);
		//Persona(int,string,string,string);
		Poder* getPoder();
		void setPoder(Poder*);

		int getVictoria();
		void setVictoria(int);

};
#endif