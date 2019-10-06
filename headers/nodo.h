#ifndef NODO_H
#define NODO_H

template <class T>
struct Nodo
{
    T objeto;
    Nodo *siguiente;
};
template <class T>
using Nodo_Dato = Nodo<T> *;
#endif