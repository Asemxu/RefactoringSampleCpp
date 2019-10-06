#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "lista.h"
#include "nodo.h"

namespace Lista
{

template <typename T>
class Lista_Enlazada : public Collections::Lista<T>
{
public:
    ~Lista_Enlazada<T>();
    Lista_Enlazada<T>()
    {
        set_nodo_inicio(NULL);
        set_nodo_fin(NULL);
    }
    void add_inicio(T objeto);
    void add_final(T objeto);
    void mostrar_lista();
    bool esta_vacia();

private:
    void insetar_en_lista_vacia(Nodo_Dato<T> objeto);
    Nodo_Dato<T> instanciar_nodo_dato(T dato);
};
} 

#endif