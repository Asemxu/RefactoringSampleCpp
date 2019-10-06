#include "../headers/lista.h"
#include "../headers/nodo.h"

using namespace Collections;

template <class T>
Nodo_Dato<T> Lista<T>::get_nodo_inicio()
{
    return this->inicio;
}

template <class T>
Nodo_Dato<T> Lista<T>::get_nodo_final()
{
    return this->fin;
}

template <class T>
void Lista<T>::set_nodo_inicio(Nodo_Dato<T> nodo)
{
    this->inicio = nodo;
}

template <class T>
void Lista<T>::set_nodo_fin(Nodo_Dato<T> nodo)
{
    this->fin = nodo;
}