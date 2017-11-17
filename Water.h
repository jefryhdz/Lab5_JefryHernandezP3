#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Poder.h"

using namespace std;

#ifndef WATER_H
#define WATER_H
class Water : public Persona{
	private:
		string Tribu;
		string Arma;
		Poder* poder;
	public:
		Water(int,string,string,string,string,string,Poder*);
		Water();
		string getTribu();
		void setTribu(string);

		string getArma();
		void setArma(string);

		//Persona(int,string,string,string);
		Poder* getPoder();
		void setPoder(Poder*);

};
#endif