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
 void add_inicio(T) {

 }
    void add_final(T) {

    }
    bool esta_vacia(){ return 1;}
    void mostrar_lista();
    Lista_Enlazada(){
        this->inicio = NULL;
        this->fin = NULL;
    }

  


private:
    void insertar_dato_en_lista_vacia(Nodo_Dato<T> objeto);
    Nodo_Dato<T> instanciar_nodo_dato(T dato);
};
} // namespace Lista

#endif