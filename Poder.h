#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PODER_H
#define PODER_H
class Poder{
	protected:
		string nombre;
		double poder;
	public:
		Poder(string,double);
		Poder();
		string getNombre();
		void setNombre(string);

		double getPoder();
		void setPoder(double);

};
#endif