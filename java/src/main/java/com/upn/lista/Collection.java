package com.upn.lista;

import com.upn.lista.data.Nodo;

public abstract class Collection {
    protected Nodo inicio;
    protected Nodo fin;

    public Collection() {
        inicio = null;
        fin = null;
    }
    public abstract void mostrarDatos();
}
