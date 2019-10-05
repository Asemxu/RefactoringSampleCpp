#include "../headers/lista.h"
#include "../headers/nodo.h"

using namespace Collections;

template <class T>
Nodo<T> Lista<T>::get_nodo_inicio()
{
    return inicio;
}

template <class T>
Nodo<T> Lista<T>::get_nodo_final()
{
    return fin;
}