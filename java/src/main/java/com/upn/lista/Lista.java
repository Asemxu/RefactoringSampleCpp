package com.upn.lista;

import java.util.Comparator;

public interface Lista<T> {
    void agregarDatoInicio(T dato);

    void agregarDatoFinal(T dato);

    void mostrarDatos();

    boolean estaVacia();

    int getCantidadDatos();

    void ordenarDatos(Comparator comparator);
}
