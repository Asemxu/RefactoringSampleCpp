#include "../headers/fachada.h"
#include <iostream>
#include "../headers/menu_opciones.h"
#include <cstdlib>
#include <cstddef>
using namespace Fachada;
using namespace std;
using namespace Menu;
using namespace Modelo;
void Fachada_Menu::showMenu()
{
	MenuOpciones menu;
	Persona lista;
	Persona temporal[50];
	do{
		system("cls");
		menu.set_opcion(menu.menu_principal());	
		switch(menu.get_opcion()){
		case 1:
			system("cls");
			menu.create_personas(menu.ingresar_cantidad_personas());
			
			break;
		case 2:
			system("cls");
			menu.create_personas_fin(menu.ingresar_cantidad_personas());
			break;
		case 3:
			system("cls");
			menu.mostrar_personas(lista);
			break;
		case 4:
			system("cls");
			menu.actualizar_persona(lista,menu.ingresar_id());
			break;
		case 5:
			system("cls");
			menu.borrar_persona(menu.ingresar_id());
			break;
		case 6:
			system("cls");
			menu.pasar_persona_temporal(lista,temporal);
			menu.ordenar_personas(menu.get_cantidad_personas(),temporal);
			break;
		default:
			cout<<"Opcion No existe"<<endl;
			break;
		};
	} while(menu.get_opcion()<7);

}
