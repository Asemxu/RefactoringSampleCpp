#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

struct Nodo
{ int Id;
char Nombre[50];
int Edad;	
Nodo *Sgte;
};typedef Nodo * Persona;

void Create(Persona&);
void Create_Orden(Persona&);
void Read(Persona);
void Update(Persona&,int);
void Delete(Persona&,int);

void Paso(Persona,Persona[]);
void Ordenar_Burbuja(int,Persona []);
void Retornar_Lista(Persona [],Persona&,int);

int main() {
	
	int n;
	int i;
	int opc,Ident;
	Persona Vector[50];	
	Persona Lista;
	
	Lista= NULL;
	
	do{
		cout<<"..:: MENU ::.."<<endl;
		cout<<"1. REGISTRO PERSONAS INICIO DE LA LISTA."<<endl;
		cout<<"2. REGISTRO PERSONAS FINAL DE LA LISTA."<<endl;
		cout<<"3. MOSTRAR PERSONAS."<<endl;
		cout<<"4. ACTUALIZAR PERSONAS."<<endl;
		cout<<"5. BORRAR REGISTROS."<<endl;
		cout<<"6. ORDENAR LISTA"<<endl;
		cout<<"INGRESA OPCION: ";
		cin>>opc;
		
		switch(opc)
		{
		case 1:system("cls");
		cout<<"Ingresa cantidad: ";
		cin>>n;
		cout<<"..:: INGRESAR PERSONAS INICIO ::.."<<endl;
		for(i=0;i<n;i++){
			Create(Lista);}break;
		
		case 2: system("cls");
		cout<<"Ingresa cantidad: ";
		cin>>n;
		cout<<"..:: INGRESAR PERSONAS FINAL ::.."<<endl;
		for(i=0;i<n;i++){
			Create_Orden(Lista);}break;
		
		case 3: system("cls");
		cout<<"..:: MOSTRAR PERSONAS ::.."<<endl;
		Read(Lista);break;	
		
		case 4: system("cls");
		cout<<"Ingrese ID a modificar: ";
		cin>>Ident;
		Update(Lista,Ident);break;
		
		case 5: system("cls");
		cout<<"Ingrese ID a eliminar: ";
		cin>>Ident;
		Delete(Lista,Ident);break;
		
		case 6: system("cls");
		Paso(Lista,Vector);
		Ordenar_Burbuja(n,Vector);
		Lista=NULL;
		for(i=0;i<n;i++)
			Retornar_Lista(Vector,Lista,i);
		cout<<"Ordenando";
		for(i=0;i<3;i++){
			cout<<".";
			Sleep(400);
		}
		cout<<endl<<"Lista ordenada"<<endl;break;
		
		default:system("cls"); 
		cout<<"..::OPCION NO EXISTE ::.."<<endl;
		};	
	}while(opc<7);
}

void Create(Persona &Lista)
{
	Persona p;
	
	p= new Nodo();
	cout<<"Ingresa ID: ";
	cin>>p->Id;
	cin.ignore();
	cout<<"Ingresa Nombre: ";
	cin.getline(p->Nombre,50);
	cout<<"Ingresa Edad: ";
	cin>>p->Edad;
	p->Sgte=Lista;
	Lista=p;
	cout<<"-----------------------"<<endl;
}

void Create_Orden(Persona &Lista)
{
	Persona p;
	Persona Temp;
	Temp=Lista;
	
	p= new Nodo();
	cout<<"Ingresa ID: ";
	cin>>p->Id;
	cin.ignore();
	cout<<"Ingresa Nombre: ";
	cin.getline(p->Nombre,50);
	cout<<"Ingresa Edad: ";
	cin>>p->Edad;
	p->Sgte=NULL;
	
	if(Lista==NULL)
	{
		p->Sgte=Lista;
		Lista=p;
	}
	
	else{
		while(Temp->Sgte!=NULL)
			Temp=Temp->Sgte;
		Temp->Sgte=p;
	}
	cout<<"-----------------------"<<endl;
}

void Read(Persona Lista)
{
	Persona p;
	p=Lista;
	while(p!=NULL){
		cout<<"ID: "<<p->Id<<endl;
		cout<<"Nombre: "<<p->Nombre<<endl;
		cout<<"Edad: "<<p->Edad<<endl;
		p=p->Sgte;
		cout<<"-----------------------"<<endl;
	}
}
void Update(Persona& Lista,int Ident)
{
	Persona p;
	char NN[50];
	p=Lista;
	
	while(p!=NULL)
	{
		if(Ident==p->Id)
		{
			cin.ignore();
			cout<<"Ingresa nuevo Nombre: ";
			cin.getline(NN,50);
			strcpy(p->Nombre,NN);
			cout<<"NOMBRE MODIFICADO...!!!"<<endl;
			return;
		}
		
		p=p->Sgte;
	}
	cout<<"NO SE HALLO EL REGISTRO...!!!"<<endl;
	
}

void Delete(Persona& Lista,int Ident)
{
	Persona p;
	Persona Temp;
	p=Lista;
	
	while(p!=NULL)
	{
		if(Ident==p->Id)
		{
			if(p==Lista)
				Lista=Lista->Sgte;
			else
				Temp->Sgte=p->Sgte;
			delete(p);
			return;
		}
		Temp=p;
		p=p->Sgte;
	}
	
}

void Paso(Persona Lista, Persona ElVector[])
{
	Persona p;
	
	int i=0;
	p=Lista;
	
	while(p!=NULL)
	{
		ElVector[i]=p;
		p=p->Sgte;
		i++;
	}	
}

void Ordenar_Burbuja(int n, Persona Vector[]){
	Persona aux;
	int i,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
		if(strcmp(Vector[j]->Nombre,Vector[j+1]->Nombre)>0)
	{
		aux = Vector[j];
		Vector[j] = Vector[j+1];
		Vector[j+1] = aux;
	}
}

void Retornar_Lista(Persona Vector[],Persona &Lista,int i)
{
	
	Persona p;
	Persona Temp;
	Temp=Lista;
	
	p= new Nodo();
	
	p->Id=Vector[i]->Id;
	strcpy(p->Nombre,Vector[i]->Nombre);
	p->Edad=Vector[i]->Edad;
	p->Sgte=NULL;
	
	if(Lista==NULL)
	{
		p->Sgte=Lista;
		Lista=p;
	}
	
	else{
		while(Temp->Sgte!=NULL)
			Temp=Temp->Sgte;
		Temp->Sgte=p;
	}
	
}



// Example program
#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout << "What is your name? ";
	getline (std::cin, name);
	std::cout << "Hello, " << name << "!\n";
}
