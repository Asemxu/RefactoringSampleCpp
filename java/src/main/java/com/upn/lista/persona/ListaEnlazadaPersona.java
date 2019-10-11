package com.upn.lista.persona;

import com.upn.lista.Collection;
import com.upn.lista.data.Nodo;
import com.upn.models.Persona;

public class ListaEnlazadaPersona extends Collection implements ListaPersona {

    public ListaEnlazadaPersona() {
        super();
    }

    @Override
    public void mostrarDatos() {
        Nodo nodoTemporal = inicio;
        while (nodoTemporal != null) {
            System.out.println(nodoTemporal.getDato().toString());
            nodoTemporal = nodoTemporal.getSiguiente();
        }
    }

    @Override
    public Persona encontrarPersona(int idPersona) {
        Nodo<Persona> nodoTemporal = inicio;
        while (nodoTemporal != null) {
            if (nodoTemporal.getDato().getId() == idPersona)
                return nodoTemporal.getDato();
            nodoTemporal = nodoTemporal.getSiguiente();
        }
        return new Persona();
    }

    @Override
    public void actualizarPersona(int idPersona, Persona nuevaPersona) {
        if (!estaVacia())
            actualizaPersona(idPersona, nuevaPersona);
    }

    @Override
    public void eliminarPersona(int idPersona) {
        if (!estaVacia())
            eliminaPersona(idPersona);
    }

    @Override
    public String toString() {
        StringBuilder edades = new StringBuilder();
        Nodo<Persona> nodoTemporal = inicio;
        while (nodoTemporal != null) {
            edades.append(nodoTemporal.getDato().getEdad());
            nodoTemporal = nodoTemporal.getSiguiente();
        }
        return edades.toString();
    }

    private void eliminaPersona(int idPersona) {
        Nodo<Persona> nodoActual = inicio;
        if (getCantidadDatos() == 1)
            evaluaYEliminaAlInicio(nodoActual, idPersona);
        else if (nodoActual.getDato().getId() == idPersona)
            eliminarNodoInicio(nodoActual);
        else
            evaluaYEliminaEnLosDemas(nodoActual, idPersona);
    }

    private void eliminarNodoInicio(Nodo<Persona> nodoActual) {
        inicio = inicio.getSiguiente();
        nodoActual.setSiguiente(null);
    }

    private void evaluaYEliminaEnLosDemas(Nodo<Persona> nodoActual, int idPersona) {
        while (nodoActual != null) {
            Nodo<Persona> nodoSiguiente = nodoActual.getSiguiente();
            if (nodoSiguiente.getDato().getId() == idPersona) {
                eliminarNodo(nodoActual, nodoSiguiente);
                break;
            }
            nodoActual = nodoActual.getSiguiente();
        }
    }

    private void evaluaYEliminaAlInicio(Nodo<Persona> nodoActual, int idPersona) {
        if (nodoActual.getDato().getId() == idPersona) {
            inicio = null;
            fin = null;
        }
    }

    private void actualizaPersona(int idPersona, Persona nuevaPersona) {
        Nodo<Persona> nodoTemporal = inicio;
        while (nodoTemporal != null) {
            if (nodoTemporal.getDato().getId() == idPersona) {
                nodoTemporal.setDato(nuevaPersona);
                break;
            }
            nodoTemporal = nodoTemporal.getSiguiente();
        }
    }

    private void eliminarNodo(Nodo<Persona> nodoActual, Nodo<Persona> nodoSiguiente) {
        if (nodoActual.equals(fin))
            eliminarNodoFinal(nodoActual, nodoSiguiente);
        else {
            nodoActual.setSiguiente(nodoSiguiente.getSiguiente());
            nodoSiguiente.setSiguiente(null);
        }
    }

    private void eliminarNodoFinal(Nodo<Persona> nodoActual, Nodo<Persona> nodoSiguiente) {
        fin = nodoActual;
        nodoActual.setSiguiente(null);
        nodoSiguiente.setSiguiente(null);
    }
}
