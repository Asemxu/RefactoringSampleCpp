#include <iostream>
#include "headers/fachada.h"
#include "headers/persona.h"
using namespace std;
using namespace Fachada;
using namespace Modelo;
int main()
{
    Fachada_Menu facade_Menu;
	facade_Menu.show();
	Persona persona=persona.Instanciar();
	persona.setNombres("Piero");
	persona.setEdad(16);
	persona.MostrarInfo();
	
    cin.ignore();
    return 0;
}
