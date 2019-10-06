#include "../headers/lista_enlazada.h"
#include "../headers/nodo.h"
#include <iostream>

using namespace std;

template <class T>
void Lista::Lista_Enlazada<T>::add_inicio(T objeto)
{
    Nodo_Dato<T> nodo_dato = this->instanciar_nodo_dato(objeto);
    if (this->esta_vacia())
    {
        this->insetar_en_lista_vacia();
    }
    else
    {
        nodo_dato->siguiente = this->inicio;
        this->inicio = nodo_dato;
    }
}

template <class T>
bool Lista::Lista_Enlazada<T>::esta_vacia()
{
    return (this->inicio == NULL && this->fin == NULL);
}

template <class T>
void Lista::Lista_Enlazada<T>::mostrar_lista()
{
    Nodo_Dato<T> nodo_temporal = this->inicio;
    while (nodo_temporal != NULL)
    {
        cout << "asd " << endl;
    }
}

template <class T>
void Lista::Lista_Enlazada<T>::insertar_dato_en_lista_vacia(Nodo_Dato<T> objeto)
{
    objeto->siguiente = NULL;
    this->inicio = objeto;
    this->fin = objeto;
}

template <class T>
void Lista::Lista_Enlazada<T>::add_final(T objeto)
{
}

template <class T>
Nodo_Dato<T> Lista::Lista_Enlazada<T>::instanciar_nodo_dato(T dato)
{
    Nodo_Dato<T> nodo_dato;
    nodo_dato->objeto = dato;
    nodo_dato->siguiente = NULL;
    return nodo_dato;
}