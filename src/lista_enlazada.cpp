#include "../headers/lista_enlazada.h"
#include "../headers/nodo.h"
#include <iostream>

using namespace Lista;
using namespace std;

template <class T>
Nodo_Dato<T> Lista_Enlazada<T>::instanciar_nodo_dato(T dato)
{
    Nodo_Dato nodo_dato;
    nodo_dato->objeto = dato;
    nodo_dato->siguiente = NULL;
    return nodo_dato;
}

template <class T>
void Lista_Enlazada<T>::add_inicio(T objeto)
{
    Nodo_Dato nodo_dato = this->instanciar_nodo_dato(objeto);
    if (this->esta_vacia())
    {
        this->insetar_en_lista_vacia();
    }
    else
    {
        nodo_dato->siguiente = this->inicio;
        inicio = nodo_dato;
    }
}

template <class T>
bool Lista_Enlazada<T>::esta_vacia()
{
    return (this->inicio == NULL && this->fin == NULL);
}

template <class T>
void Lista_Enlazada<T>::mostrar_lista()
{
    Nodo_Dato<T> nodo_temporal = this->inicio;
    while (nodo_temporal != NULL)
    {
        cout << "asd " << endl;
    }
}

template <class T>
void Lista_Enlazada<T>::insetar_en_lista_vacia(Nodo_Dato<T> objeto)
{
    objeto->siguiente = NULL;
    this->inicio = objeto;
    this->fin = objeto;
}