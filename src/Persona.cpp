#include "../headers/persona.h"
#include <iostream>

using namespace std;
using namespace Personal;

void Persona::MostrarInfo(){
	cout<<"Nombre: "<<Persona::getNombres()<<endl;
	cout<<"Edad: "<<Persona::getEdad()<<endl;
	
}
string Persona::getNombres(){
	return nombres;
}
int Persona::getEdad(){
	return edad;
}
void Persona::setEdad(int edad_persona){
	edad=edad_persona;
}
void Persona::setNombres(string nombres_persona)
{
	nombres=nombres_persona;
}
