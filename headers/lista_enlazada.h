#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "lista.h"
#include "nodo.h"

namespace Lista
{

template <class T>
class Lista_Enlazada : public Collections::Lista<T>
{
public:
    ~Lista_Enlazada();
    Lista_Enlazada()
    {
        set_nodo_inicio(NULL);
        set_nodo_fin(NULL);
    }
    void add_inicio(Nodo<T> objeto);
    void add_final(Nodo<T> objeto);
    void mostrar_lista();
    bool esta_vacia();

private:
    void configurar_si_lista_vacia(Nodo<T> objeto);
};
}

#endif