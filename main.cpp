#include <iostream>
#include "headers/fachada.h"
#include "headers/persona.h"
#include "headers/menu_opciones.h"
#include <cstdlib>
using namespace std;
using namespace Fachada;
using namespace Modelo;
using namespace Menu;
int main()
{
    Fachada_Menu facade_Menu;
	facade_Menu.show();
	//Persona persona=persona.Instanciar();
	//persona.set_nombres("Piero");
	//persona.set_edad(16);
	//persona.MostrarInfo();
	MenuOpciones menu;
	menu.set_opcion(menu.MenuPrincipal());
	cout<<"Opcion: "<<menu.get_opcion()<<endl;
	system("PAUSE");
    cin.ignore();
    return 0;
}
