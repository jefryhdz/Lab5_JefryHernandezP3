#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Poder.h"

using namespace std;

#ifndef AIR_H
#define AIR_H
class air : Persona{
	protected:
		int Cabello;
		string Color;
		Poder* poder;
	public:
		air(int,string,string,string,int,string,Poder*);
		air();
		int getCabello();
		void setCabello(int);

		string getColor();
		void setColor(string);

		Poder* getPoder();
		void setPoder(Poder*);

};
#endif