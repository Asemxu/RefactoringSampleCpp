package com.upn.lista;

public interface Lista<T> {
    void agregarDatoInicio(T dato);

    void agregarDatoFinal(T dato);

    void mostrarDatos();

    boolean estaVacia();

    int getCantidadDatos();
}
