#include <iostream>
#include "headers/fachada.h"
#include "headers/persona.h"
#include "headers/lista_enlazada.h"
#include "headers/nodo.h"

using namespace std;
using namespace Fachada;
using namespace Modelo;
using namespace Lista;

int main()
{
	Lista_Enlazada<Persona> personas;

	Persona persona = persona.Instanciar();
	persona.set_nombres("test");
	persona.set_edad(16);
	persona.MostrarInfo();
	cin.ignore();

	Nodo<Persona> nodo;
	nodo.siguiente = NULL;
	nodo.objeto = persona;

	personas.add_inicio(nodo);

	personas.mostrar_lista();

	return 0;
}
