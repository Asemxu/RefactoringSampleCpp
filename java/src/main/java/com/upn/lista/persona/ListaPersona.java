package com.upn.lista.persona;

import com.upn.lista.Lista;
import com.upn.models.Persona;

import java.util.Comparator;

public interface ListaPersona extends Lista<Persona> {
    void ordenarPersonas(Comparator comparator);

    void actualizarPersona(int idPersona, Persona nuevaPersona);

    void eliminarPersona(int idPersona);

    void agregarDatoInicio(Persona dato);

    void agregarDatoFinal(Persona dato);

    Persona encontrarPersona(int id);
}
