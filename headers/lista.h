#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

namespace Collections
{
class Lista
{
protected:
    Nodo inicio;
    Nodo fin;

public:
    Lista();
    ~Lista();
    virtual void add_inicio(T objeto);
    virtual void add_final(T objeto);
    Nodo get_nodo_inicio();
    Nodo get_nodo_final();
};
} 
#endif