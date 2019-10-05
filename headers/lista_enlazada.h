#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "lista.h"
namespace Lista
{
template <class T>
class Lista_Enlazada : public Lista
{
    public:
        void add_inicio(T objeto);
        void add_final(T objeto);
};
} // namespace Lista

#endif