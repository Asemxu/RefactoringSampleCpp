#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

namespace Collections
{
template <class T>
class Lista
{
protected:
    Nodo<T> inicio;
    Nodo<T> fin;

public:
    Lista();
    ~Lista();
    virtual void add_inicio(T objeto);
    virtual void add_final(T objeto);
    Nodo<T> get_nodo_inicio();
    Nodo<T> get_nodo_final();
};
} // namespace Collections
#endif