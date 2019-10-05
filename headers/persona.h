#ifndef PERSONA_H
#define PERSONA_h
namespace Personas{
class Persona{
	char* Nombres;
	int Edad;
	public :
		Persona(char*,int);
		char * getNombres();
		int getEdad();
		void  setNombres(char *);
		void  setEdad(int );
		void MostrarInfo();
};	
Persona::Persona(char*Nombres_persona,int Edad_persona){
	Nombres=Nombres_persona;
	Edad=Edad_persona;
}
}
#endif
