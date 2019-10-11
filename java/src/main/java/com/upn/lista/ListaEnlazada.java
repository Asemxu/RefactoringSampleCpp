package com.upn.lista;

import com.upn.lista.data.Nodo;

public class ListaEnlazada<T> extends Collection<T> implements Lista<T> {

    public ListaEnlazada() {
        super();
    }

    @Override
    public void mostrarDatos() {
        Nodo nodoTemporal = inicio;
        while (nodoTemporal != null){
            System.out.println(nodoTemporal.getDato().toString());
            nodoTemporal = nodoTemporal.getSiguiente();
        }
    }
}
