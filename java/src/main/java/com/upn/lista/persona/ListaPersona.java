package com.upn.lista.persona;

import com.upn.lista.Lista;
import com.upn.models.Persona;

public interface ListaPersona<T extends Persona> extends Lista<T> {

    void actualizarPersona(int idPersona, Persona nuevaPersona);

    void eliminarPersona(int idPersona);

    Persona encontrarPersona(int id);
}
