#ifndef PERSONA_H
#define PERSONA_h
namespace Persona{
class Persona_class{
	char* Nombres;
	int Edad;
	public :
		char * getNombres();
		int getEdad();
		void  setNombres(char * Nombre_persona);
		void  setEdad(int Edad);
};	

char * Persona_class::getNombres(){return Nombres;}
int Persona_class::getEdad(){return Edad;}
void Persona_class::setNombres(char* Nombre_persona){Nombres=Nombre_persona;}
void Persona_class::setEdad(int Edad){Edad=Edad;}
}
#endif
