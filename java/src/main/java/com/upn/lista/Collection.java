package com.upn.lista;

import com.upn.lista.data.Nodo;
import java.util.Comparator;

public abstract class Collection<T> implements Lista<T> {
    protected Nodo<T> inicio;
    protected Nodo<T> fin;

    public Collection() {
        inicio = null;
        fin = null;
    }

    @Override
    public void agregarDatoInicio(T dato) {
        if (estaVacia())
            insetarDatoListaVacia(dato);
        else
            agregarAlInicio(dato);
    }

    @Override
    public void agregarDatoFinal(T dato) {
        if (estaVacia())
            insetarDatoListaVacia(dato);
        else
            agregarAlFinal(dato);
    }

    @Override
    public boolean estaVacia() {
        return inicio == null && fin == null;
    }

    @Override
    public int getCantidadDatos() {
        if (estaVacia())
            return 0;
        else
            return contarNodos();
    }

    @Override
    public void ordenarDatos(Comparator comparator) {
        if (!estaVacia())
            ordenaDatos(comparator);
    }


    private void ordenaDatos(Comparator comparator) {
        Nodo i = inicio;
        Nodo j;
        while (i != null) {
            j = i.getSiguiente();
            while (j != null) {
                boolean elPrimerDatoEsMayor = comparator.compare(i.getDato(), j.getDato()) == 1;
                if (elPrimerDatoEsMayor)
                    intercambiaDatos(i, j);
                j = j.getSiguiente();
            }
            i = i.getSiguiente();
        }
    }

    private void intercambiaDatos(Nodo<T> i, Nodo<T> j) {
        T temp =  i.getDato();
        i.setDato(j.getDato());
        j.setDato(temp);
    }

    private int contarNodos() {
        Nodo nodoTemporal = inicio;
        int cant = 0;
        while (nodoTemporal != null) {
            nodoTemporal = nodoTemporal.getSiguiente();
            cant++;
        }
        return cant;
    }

    private void agregarAlFinal(T dato) {
        Nodo<T> nodoInsetar = new Nodo<>(dato);
        fin.setSiguiente(nodoInsetar);
        fin = nodoInsetar;
    }

    private void agregarAlInicio(T dato) {
        Nodo<T> nodoInsertar = new Nodo<>(dato);
        nodoInsertar.setSiguiente(inicio);
        inicio = nodoInsertar;
    }

    private void insetarDatoListaVacia(T dato) {
        Nodo<T> nodoInsertar = new Nodo<>(dato);
        inicio = nodoInsertar;
        fin = nodoInsertar;
    }

    public Object getPrimerDato() {
        return inicio.getDato();
    }

    public Object getUltimoDato() {
        return fin.getDato();
    }
}
