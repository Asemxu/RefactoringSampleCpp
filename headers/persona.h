#ifndef PERSONA_H
#define PERSONA_h
#include <iostream>
#include <string>
#include <cstddef>

using namespace std;
namespace Modelo{
class Persona
{
	string nombres;
	int edad;
	private:
		static Persona persona_instancia;
	public :
		string get_nombres();
		int get_edad();
		void  set_nombres(string);
		void  set_edad(int );
		void MostrarInfo();
		static Persona& Instanciar()
		{
			static Persona persona_instancia;
			return persona_instancia;
		}
		
};	
}
#endif
