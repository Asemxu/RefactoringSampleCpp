package com.upn.lista.persona;

import com.upn.models.Persona;

import java.util.Comparator;

public class PersonaComparator implements Comparator<Persona> {

    @Override
    public int compare(Persona o1, Persona o2) {
        if(o1.getEdad() >= o2.getEdad())
            return 1;
        return 0;
    }
}
