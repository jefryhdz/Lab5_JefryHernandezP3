#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "air.h"
#include "Poder.h"
#include "Fire.h"
#include "Water.h"
#include "nonbender.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Invocacion.h"
#include "Earth.h"

Poder* poder();
using namespace std;

int main(){
	vector<Persona*> lista;
	string  ans ="s";
	int cicatriz,victoria;
	Poder* p= new Poder();	
     while(ans=="s"){
     	int resp=-1;
     	while(resp<0||resp>5){
	     	cout<<"Creacion de Personas"<<endl;
	     	cout<<"1. Air Bender"<<endl;
	     	cout<<"2. Fire Bender"<<endl;
	     	cout<<"3. Water Bender"<<endl;
	     	cout<<"4. Earth Bender"<<endl;
	     	cout<<"5. Non Bender"<<endl;
     	cin>>resp;
		}string nombre,nacion,sexo,color;			
		int edad,pelo;			
		cout<<"Ingrese el nombre de la persona"<<endl;
		cin>>nombre;
		cout<<"Ingrese la nacion de la persona"<<endl;
		cin>>nacion;
		cout<<"Ingrese el sexo de la persona"<<endl;
		cin>>sexo;
		cout<<"Ingrese la edad de la persona"<<endl;
		cin>>edad;
		if (resp==1)
		{				
			cout<<"Ingrese la cantidad de cabello que tiene el air bender"<<endl;
			cin>>pelo;
			cout<<"Ingrese el color de las flechas"<<endl;
			cin>>color;
			p =poder();
			Persona* aire = new air(edad,nombre,nacion,sexo,pelo,color,p);
			lista.push_back(aire);			
		}if (resp==2)
		{
			cout<<"Ingrese el numero de cicatrices"<<endl;
			cin>>cicatriz;
			cout<<"Ingrese el numero de victorias"<<endl;
			cin>>victoria;
			p =poder();
			Persona* fuego = new Fire(edad,nombre,nacion,sexo,cicatriz,p,victoria);
			lista.push_back(fuego);
		}if (resp==3){
			string tribu,arma;
			cout<<"Ingrese la tribu"<<endl;
			cin>>tribu;
			cout<<"Ingrese el arma"<<endl;
			cin>>arma;
			p= poder();
			Persona* agua = new Water(edad,nombre,nacion,sexo,tribu,arma,p);
			lista.push_back(agua);
		}if (resp==4)
		{
			double durabilidad;
			double graduacion=21;
			cout<<"Ingrese la durabilidad"<<endl;
			cin>>durabilidad;			
			while(graduacion<21&&graduacion<0){
				cout<<"Ingrese la graduacion"<<endl;
				cin>>graduacion;				
			}
			p = poder();
			Persona* tierra= new Earth(edad,nombre,nacion,sexo,durabilidad,graduacion,p);
			lista.push_back(tierra);
		}if (resp==5)
		{
			double fuerza;
			double velocidad;
			cout<<"Ingrese la fuerza"<<endl;
			cin>>fuerza;
			cout<<"Ingrese la velocidad"<<endl;
			cin>>velocidad;
			Persona* nomaestro= new nonbender(edad,nombre,nacion,sexo,fuerza,velocidad);
			lista.push_back(nomaestro);
		}
	
		

     }
     
     return 0;
}
Poder* poder(){
	int resp2=-1;
	Poder* p;
	string  nombrepoder,tipo,petname,especie,habilidad,tipodemascota;
	double nivel,rango,fuerza,resistencia,duracion;
		while(resp2<0||resp2>5){
			cout<<"1. Ofensivo"<<endl;
			cout<<"2. Defensivo"<<endl;
			cout<<"3. Curativo"<<endl;
			cout<<"4. Invocacion"<<endl;
			cin>>resp2;
		}
		cout<<"Ingrese el nombre del poder"<<endl;
		cin>>nombrepoder;
		cout<<"Ingrese el nivel del poder"<<endl;
		cin>>nivel;
		if (resp2==1)
		{
			cout<<"Ingrese el rango del poder"<<endl;
			cin>>rango;
			cout<<"Ingrese la fuerza"<<endl;
			cin>>fuerza;
			p= new Ofensivo(nombrepoder,nivel,rango,fuerza);
		}
		if(resp2==2){				
			cout<<"Ingrese la resistencia"<<endl;
			cin>>resistencia;
			cout<<"Ingrese la duracion"<<endl;
			cin>>duracion;
			p = new Defensivo(nombrepoder,nivel,resistencia,duracion);
		}
		if (resp2==3)
		{				
			cout<<"Ingrese el tipo"<<endl;								
			cin>>tipo;
			p= new Curativo(nombrepoder, nivel,tipo);
		}if (resp2==4)
		{				
			cout<<"Ingrese el nombre de la mascota"<<endl;
			cin>>petname;
			cout<<"Ingrese la especie"<<endl;
			cin>>especie;
			cout<<"Ingrese la Habilidad"<<endl;
			cin>>habilidad;
			cout<<"Escoja tipo de mascota(Domestico/Guerra)"<<endl;
			cin>>tipodemascota;
			p= new Invocacion(nombrepoder,nivel,petname,especie,habilidad,tipodemascota);
		}
		return p;
}