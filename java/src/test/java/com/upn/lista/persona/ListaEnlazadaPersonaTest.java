package com.upn.lista.persona;

import com.upn.models.Persona;
import org.junit.Before;
import org.junit.Test;

import java.util.Comparator;

import static org.junit.Assert.assertEquals;

public class ListaEnlazadaPersonaTest {
    private ListaEnlazadaPersona listaEnlazadaPersona;

    @Before
    public void setUp() {
        listaEnlazadaPersona = new ListaEnlazadaPersona();
    }

    @Test
    public void agregarAlInicioFunciona() {
        listaEnlazadaPersona.agregarDatoInicio(new Persona());
        listaEnlazadaPersona.agregarDatoInicio(new Persona());
        listaEnlazadaPersona.agregarDatoInicio(new Persona());
        listaEnlazadaPersona.agregarDatoInicio(new Persona());
        assertEquals(4, listaEnlazadaPersona.getCantidadDatos());
    }

    @Test
    public void agregarAlFinalFunciona() {
        listaEnlazadaPersona.agregarDatoFinal(new Persona());
        listaEnlazadaPersona.agregarDatoFinal(new Persona());
        listaEnlazadaPersona.agregarDatoFinal(new Persona());
        listaEnlazadaPersona.agregarDatoFinal(new Persona());
        assertEquals(4, listaEnlazadaPersona.getCantidadDatos());
    }

    @Test
    public void encontrarPersonaFunciona() {
        listaEnlazadaPersona.agregarDatoInicio(new Persona(1));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(2));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(3));

        assertEquals(1, listaEnlazadaPersona.encontrarPersona(1).getId());
        assertEquals(2, listaEnlazadaPersona.encontrarPersona(2).getId());
        assertEquals(3, listaEnlazadaPersona.encontrarPersona(3).getId());
        assertEquals(0, listaEnlazadaPersona.encontrarPersona(5).getId());
    }

    @Test
    public void listaVaciaEsCorrectaValidacion() {
        assertEquals(true, listaEnlazadaPersona.estaVacia());
        listaEnlazadaPersona.agregarDatoInicio(new Persona());
        assertEquals(false, listaEnlazadaPersona.estaVacia());
    }

    @Test
    public void getCantidadDatosEsCorrecto() {
        assertEquals(0, listaEnlazadaPersona.getCantidadDatos());
        listaEnlazadaPersona.agregarDatoInicio(new Persona(1));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(2));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(3));
        assertEquals(3, listaEnlazadaPersona.getCantidadDatos());
    }

    @Test
    public void ordenaCorrectamente() {
        listaEnlazadaPersona.agregarDatoInicio(new Persona(3));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(1));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(2));
        String edadesOrdenadas = "123";
        listaEnlazadaPersona.ordenarPersonas(getEdadComparator());
        assertEquals(edadesOrdenadas, listaEnlazadaPersona.toString());
    }

    private Comparator<Persona> getEdadComparator() {
        return (p1, p2) -> {
           if (p1.getEdad() >= p2.getEdad()) return 1;
            return -1;
        };
    }

}