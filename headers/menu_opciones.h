#ifndef MENU_OPCIONES
#define MENU_OPCIONES
#include "../headers/persona.h"

using namespace Modelo;
namespace Menu
{
class MenuOpciones
{
    int opcion ;
	int cantidad_personas;
	public :
		void set_opcion(int);
		int get_opcion();
		void set_cantidad_personas(int);
		int get_cantidad_personas();
		int menu_principal();
		int ingresar_cantidad_personas();
		void create_personas(int);
		void create_personas_fin(int);
		void mostrar_personas(Persona&);
		void borrar_persona(int);
		int ingresar_id();
		void actualizar_persona(Persona&,int id);
		void pasar_persona_temporal(Persona ,Persona[]);
		void ordenar_personas(int,Persona[]);
		//void mostrar_personas(Persona);
};
	
}

#endif
