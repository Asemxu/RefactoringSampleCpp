
#include "../headers/menu_opciones.h"
#include <iostream>

#include <cstdlib>
using namespace std;
using namespace Menu;
using namespace Modelo;
void MenuOpciones::set_opcion(int opcion_menu){
	opcion=opcion_menu;
}
int MenuOpciones::get_opcion(){
	return opcion;
}
void MenuOpciones::set_cantidad_personas(int cantidad){
	cantidad_personas=cantidad;
}
int MenuOpciones::get_cantidad_personas(){
	return cantidad_personas;
}
int MenuOpciones::menu_principal(){
	int opcion;
	cout<<"..:: MENU ::.."<<endl;
	cout<<"1. REGISTRO PERSONAS INICIO DE LA LISTA."<<endl;
	cout<<"2. REGISTRO PERSONAS FINAL DE LA LISTA."<<endl;
	cout<<"3. MOSTRAR PERSONAS."<<endl;
	cout<<"4. ACTUALIZAR PERSONAS."<<endl;
	cout<<"5. BORRAR REGISTROS."<<endl;
	cout<<"6. ORDENAR LISTA"<<endl;
	cout<<"INGRESA OPCION: ";
	cin>>opcion;
	return opcion;
}
int MenuOpciones::ingresar_cantidad_personas(){
	cout<<"Ingrese Cantidad de personas a registrar : ";
	int cantidad;
	cin>>cantidad;
	set_cantidad_personas(cantidad);
	return cantidad_personas;
}
void MenuOpciones::create_personas(int cantidad_personas){
	for(int i=0;i<cantidad_personas;i++){
		//logica para crear persona
		
	}
}
void MenuOpciones::create_personas_fin(int cantidad_personas){
	for(int i=0;i<cantidad_personas;i++){
		//logica para crear persona al final
		
	}
}
void MenuOpciones::mostrar_personas(Persona &lista){
	cout<<"Registro de Personas "<<endl;
	//logica para MostrarPersonas persona al final
}
void MenuOpciones::actualizar_persona(Persona & lista ,int Ident){
	//Logica para actualizar_persona
}
int MenuOpciones::ingresar_id(){
	int Ident;
	cout<<"Ingrese ID a modificar o Eliminar: ";
	cin>>Ident;
	return Ident;
}
void MenuOpciones::borrar_persona(int id){
	//Logica para borrar_persona
}
void MenuOpciones::pasar_persona_temporal(Persona lista,Persona temporal[]){
	//Logica para pasar personas a un vector temporal;
}
void MenuOpciones::ordenar_personas(int cantidad,Persona temporal[]){
	//Logica para ordenar persona
}
