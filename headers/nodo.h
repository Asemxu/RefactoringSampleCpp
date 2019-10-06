#ifndef NODO_H
#define NODO_H

template <typename T>
struct Nodo
{
    T objeto;
    Nodo *siguiente;
};
template <typename T>
using Nodo_Dato = Nodo<T> *;
#endif