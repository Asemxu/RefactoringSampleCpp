package com.upn.lista.persona;

import com.upn.lista.Collection;
import com.upn.lista.data.Nodo;
import com.upn.models.Persona;

import java.util.Comparator;

public class ListaEnlazadaPersona extends Collection implements ListaPersona {

    public ListaEnlazadaPersona() {
        super();
    }

    @Override
    public void agregarDatoInicio(Persona dato) {
        if (estaVacia())
            insetarDatoListaVacia(dato);
        else
            agregarAlInicio(dato);
    }

    @Override
    public void agregarDatoFinal(Persona dato) {
        if (estaVacia())
            insetarDatoListaVacia(dato);
        else
            agregarAlFinal(dato);
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
    public Persona encontrarPersona(int id) {
        Nodo<Persona> nodoTemporal = inicio;
        while (nodoTemporal != null) {
            if (nodoTemporal.getDato().getId() == id)
                return nodoTemporal.getDato();
            nodoTemporal = nodoTemporal.getSiguiente();
        }
        return new Persona();
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
    public void ordenarPersonas(Comparator comparator) {
        if (!estaVacia())
            ordenaPersonas(comparator);
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

    private int contarNodos() {
        Nodo<Persona> nodoTemporal = inicio;
        int cant = 0;
        while (nodoTemporal != null) {
            nodoTemporal = nodoTemporal.getSiguiente();
            cant++;
        }
        return cant;
    }

    private void eliminaPersona(int idPersona) {
        Nodo<Persona> nodoActual = inicio;
        while (nodoActual != null) {
            Nodo<Persona> nodoSiguiente = nodoActual.getSiguiente();
            if (nodoSiguiente.getDato().getId() == idPersona) {
                eliminarNodo(nodoActual, nodoSiguiente);
                break;
            }
            nodoActual = nodoActual.getSiguiente();
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

    private void ordenaPersonas(Comparator comparator) {
        Nodo<Persona> i = inicio, j;
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

    private void intercambiaDatos(Nodo i, Nodo j) {
        Nodo temp = i;
        i.setDato(j.getDato());
        j.setDato(temp);
    }


    private void eliminarNodo(Nodo<Persona> nodoActual, Nodo<Persona> nodoSiguiente) {
        nodoActual.setSiguiente(nodoSiguiente.getSiguiente());
        nodoSiguiente.setSiguiente(null);
    }

    private void agregarAlInicio(Persona dato) {
        Nodo nodoInsertar = new Nodo<>(dato);
        nodoInsertar.setSiguiente(inicio);
        inicio = nodoInsertar;
    }

    private void agregarAlFinal(Persona dato) {
        Nodo nodoInsetar = new Nodo<>(dato);
        fin.setSiguiente(nodoInsetar);
        fin = nodoInsetar;
    }

    private void insetarDatoListaVacia(Persona dato) {
        Nodo nodoInsertar = new Nodo<>(dato);
        inicio = nodoInsertar;
        fin = nodoInsertar;
    }
}
