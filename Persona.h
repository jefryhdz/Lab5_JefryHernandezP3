#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
class Persona{
	private:
		int edad;
		string nombre;
		string nacion;
		string sexo;
		
	public:
		Persona(int,string,string,string);
		Persona();
		int getEdad();
		void setEdad(int);

		string getNombre();
		void setNombre(string);

		string getNacion();
		void setNacion(string);

		string getSexo();
		void setSexo(string);

		

};
#endif