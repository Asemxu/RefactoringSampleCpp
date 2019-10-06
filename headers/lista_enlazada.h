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
    void add_inicio(T objeto);
    void add_final(T objeto);
    bool esta_vacia();
    void mostrar_lista();

private:
    void insertar_dato_en_lista_vacia(Nodo_Dato<T> objeto);
    Nodo_Dato<T> instanciar_nodo_dato(T dato);
};
} 

#endif