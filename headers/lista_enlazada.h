#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "lista.h"
#include "nodo.h"
#include <cstddef>

namespace Lista
{

template <class T>
class Lista_Enlazada : public Collections::Lista<T>
{
public:
    ~Lista_Enlazada<T>();
    Lista_Enlazada<T>()
    {
        this->inicio = NULL;
        this->fin = NULL;
    }
    void add_inicio(T objeto);
    void add_final(T objeto);
    void mostrar_lista();
    bool esta_vacia();

private:
    void insertar_dato_en_lista_vacia(Nodo_Dato<T> objeto);
    Nodo_Dato<T> instanciar_nodo_dato(T dato);
};
} 

#endif