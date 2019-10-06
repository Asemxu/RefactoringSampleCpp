#include "../headers/lista_enlazada.h"
#include <iostream>

using namespace Lista;
using namespace std;

template <class T>
void Lista_Enlazada<T>::add_inicio(Nodo<T> objeto)
{
    this->configurar_si_lista_vacia();
    objeto->siguiente = inicio;
    inicio = objeto;
}

template <class T>
bool Lista_Enlazada<T>::esta_vacia()
{
    return (inicio == NULL && fin == NULL);
}

template <class T>
void Lista_Enlazada<T>::mostrar_lista()
{
    Nodo<T> nodo_temporal = this->inicio;

    while (nodo_temporal != NULL)
    {
        cout << "asd " << endl;
    }
}

template <class T>
void Lista_Enlazada<T>::configurar_si_lista_vacia(Nodo<T> objeto)
{
    if (this->esta_vacia())
    {
        objeto->siguiente = NULL;
        this->inicio = objeto;
        this->fin = objeto;
    }
}