#include "../headers/persona.h"
#include <iostream>

using namespace std;
using namespace Modelo;

void Persona::MostrarInfo()
{
	cout<<"Nombre: "<<Persona::get_nombres()<<endl;
	cout<<"Edad: "<<Persona::get_edad()<<endl;
}
string Persona::get_nombres()
{
	return nombres;
}
int Persona::get_edad()
{
	return edad;
}
void Persona::set_edad(int edad_persona)
{
	edad=edad_persona;
}
void Persona::set_nombres(string nombres_persona)
{
	nombres=nombres_persona;
}
