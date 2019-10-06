#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

namespace Collections
{
template <typename T>
class Lista
{
protected:
    Nodo_Dato<T> inicio;
    Nodo_Dato<T> fin;

public:
    Lista<T>();
    ~Lista<T>();
    virtual void add_inicio(T objeto);
    virtual void add_final(T objeto);
    virtual bool esta_vacia() = 0;
    Nodo_Dato<T> get_nodo_inicio();
    Nodo_Dato<T> get_nodo_final();
    void set_nodo_inicio(Nodo_Dato<T> nodo);
    void set_nodo_fin(Nodo_Dato<T> nodo);
};

}
#endif