#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "lista.h"
#include "nodo.h"

namespace Lista
{
template <class T>
class Lista_Enlazada : public Lista
{
public:
    ~Lista_Enlazada();
    Lista_Enlazada()
    {
        inicio = NULL;
        fin = NULL;
    }
    void add_inicio(Nodo<T> objeto);
    void add_final(Nodo<T> objeto);
    void mostrar_lista();
};
} // namespace Lista

#endif