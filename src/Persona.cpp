#include "../headers/persona.h"
#include <iostream>

using namespace std;
using namespace Personas;

char * Persona::getNombres(){return Nombres;}
int Persona::getEdad(){return Edad;}
void Personas::Persona::setNombres(char* Nombre_persona){Nombres=Nombre_persona;}
void Persona::setEdad(int Edad){Edad=Edad;}
void Persona::MostrarInfo(){
	cout<<"Persona "<<endl;
	cout<<"Nombre: "<<Persona::getNombres();
	cout<<"Edad: "<<Persona::getEdad();
}

