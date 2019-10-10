package com.upn.lista.persona;

import com.upn.models.Persona;
import org.junit.Before;
import org.junit.Test;
import java.util.Comparator;
import java.util.stream.IntStream;
import static org.junit.Assert.*;

public class ListaEnlazadaPersonaTest {
    private ListaEnlazadaPersona listaEnlazadaPersona;

    @Before
    public void setUp() {
        listaEnlazadaPersona = new ListaEnlazadaPersona();
    }

    @Test
    public void agregarAlInicioFunciona() {
        agregarDatosInicioLista(4);
        assertEquals("3210", listaEnlazadaPersona.toString());
        assertEquals(4, listaEnlazadaPersona.getCantidadDatos());
    }

    @Test
    public void agregarAlFinalFunciona() {
        agregarDatosFinalLista(4);
        assertEquals("0123", listaEnlazadaPersona.toString());
        assertEquals(4, listaEnlazadaPersona.getCantidadDatos());
    }

    @Test
    public void encontrarPersonaFunciona() {
        agregarDatosInicioLista(4);
        assertEquals(0, listaEnlazadaPersona.encontrarPersona(0).getId());
        assertEquals(1, listaEnlazadaPersona.encontrarPersona(1).getId());
        assertEquals(2, listaEnlazadaPersona.encontrarPersona(2).getId());
        assertEquals(3, listaEnlazadaPersona.encontrarPersona(3).getId());
        assertEquals(0, listaEnlazadaPersona.encontrarPersona(5).getId());
    }

    @Test
    public void listaVaciaEsCorrectaValidacion() {
        assertTrue(listaEnlazadaPersona.estaVacia());
        agregarDatosInicioLista(1);
        assertFalse(listaEnlazadaPersona.estaVacia());
    }

    @Test
    public void getCantidadDatosEsCorrecto() {
        assertEquals(0, listaEnlazadaPersona.getCantidadDatos());
        agregarDatosInicioLista(3);
        assertEquals(3, listaEnlazadaPersona.getCantidadDatos());
    }

    @Test
    public void ordenaCorrectamente() {
        listaEnlazadaPersona.agregarDatoInicio(new Persona(1, 3, ""));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(2, 1, ""));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(3, 2, ""));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(3, 5, ""));
        listaEnlazadaPersona.agregarDatoInicio(new Persona(3, 4, ""));
        String edadesOrdenadas = "12345";
        listaEnlazadaPersona.ordenarPersonas(getEdadComparator());
        assertEquals(edadesOrdenadas, listaEnlazadaPersona.toString());
    }

    @Test
    public void actualizaPersonaEsCorrecto() {
        agregarDatosInicioLista(4);
        validarActulizarPersona(getPersonaNueva(0), 0);
        validarActulizarPersona(getPersonaNueva(1), 1);
        validarActulizarPersona(getPersonaNueva(2), 2);
        validarActulizarPersona(getPersonaNueva(3), 3);
    }

    @Test
    public void eliminarPersonaFunciona() {
        agregarDatosInicioLista(4);
        listaEnlazadaPersona.eliminarPersona(0);
        assertNull(null, listaEnlazadaPersona.encontrarPersona(0).getNombre());
        assertEquals("321", listaEnlazadaPersona.toString());
        listaEnlazadaPersona.eliminarPersona(1);
        assertNull(null, listaEnlazadaPersona.encontrarPersona(1).getNombre());
        assertEquals("32", listaEnlazadaPersona.toString());
        listaEnlazadaPersona.eliminarPersona(2);
        assertNull(null, listaEnlazadaPersona.encontrarPersona(2).getNombre());
        assertEquals("3", listaEnlazadaPersona.toString());
        listaEnlazadaPersona.eliminarPersona(3);
        assertEquals("", listaEnlazadaPersona.toString());
        assertNull(listaEnlazadaPersona.encontrarPersona(3).getNombre());
        assertTrue(listaEnlazadaPersona.estaVacia());
    }

    @Test
    public void toStringConvierteCorrectamente() {
        assertEquals("", listaEnlazadaPersona.toString());
        agregarDatosInicioLista(5);
        assertEquals("43210", listaEnlazadaPersona.toString());
    }

    private void validarActulizarPersona(Persona personaNueva, int idPersonaActualizar) {
        listaEnlazadaPersona.actualizarPersona(idPersonaActualizar, personaNueva);
        assertEquals("persona_test", listaEnlazadaPersona.encontrarPersona(idPersonaActualizar).getNombre());
    }

    private void agregarDatosInicioLista(int n) {
        IntStream.range(0, n).forEach(i -> listaEnlazadaPersona.agregarDatoInicio(new Persona(i, i, ("per_" + i))));
    }

    private void agregarDatosFinalLista(int n) {
        IntStream.range(0, n).forEach(i -> listaEnlazadaPersona.agregarDatoFinal(new Persona(i, i, ("per_" + i))));
    }

    private Persona getPersonaNueva(int idPersona) {
        Persona persona = new Persona();
        persona.setId(idPersona);
        persona.setNombre("persona_test");
        persona.setEdad(12);
        return persona;
    }

    private Comparator<Persona> getEdadComparator() {
        return (p1, p2) -> {
            if (p1.getEdad() >= p2.getEdad()) return 1;
            return -1;
        };
    }

}