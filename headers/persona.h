#ifndef PERSONA_H
#define PERSONA_h
#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
namespace Personal{
class Persona{
	string nombres;
	int edad;
	private:
		static Persona persona_instancia;
	public :
		string getNombres();
		int getEdad();
		void  setNombres(string);
		void  setEdad(int );
		void MostrarInfo();
		static Persona& Instanciar(){
			static Persona persona_instancia;
			return persona_instancia;
		}
		
};	

}
#endif
