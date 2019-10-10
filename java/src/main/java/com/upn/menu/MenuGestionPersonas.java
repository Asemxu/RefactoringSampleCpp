package com.upn.menu;

import com.upn.lista.persona.ListaEnlazadaPersona;
import com.upn.lista.persona.ListaPersona;
import com.upn.models.Persona;
import java.util.Comparator;

import static com.upn.menu.MenuConstantesGestionPersonas.*;

public class MenuGestionPersonas implements Menu {
    private ListaPersona personas;

    public MenuGestionPersonas() {
        personas = new ListaEnlazadaPersona();
    }

    @Override
    public void empezarMenu() {
        int opcionSeleccionada;
        do {
            opcionSeleccionada = mostrarOpciones();
            evaluarOpcionSeleccionada(opcionSeleccionada);
        }
        while (opcionSeleccionada != SALIR);
    }

    private void evaluarOpcionSeleccionada(int opcionSeleccionada) {
        switch (opcionSeleccionada) {
            case INSERTAR_PERSONA_INICIO: {
                Persona persona = solicitarDatosPersona();
                personas.agregarDatoInicio(persona);
                break;
            }
            case INSERTAR_PERSONA_FIN: {
                Persona persona = solicitarDatosPersona();
                personas.agregarDatoFinal(persona);
                break;
            }
            case MOSTAR_PERSONAS: {
                personas.mostrarDatos();
                break;
            }
            case ACTUALIZAR_PERSONA: {
                int idPersona = pedirIdPersona("Ingresar ID de la persona a actualizar");
                Persona nuevaPersona = solicitarDatosPersona();
                personas.actualizarPersona(idPersona, nuevaPersona);
                break;
            }
            case BORRAR_PERSONA: {
                int idPersona = pedirIdPersona("Ingresar ID de la persona a eliminar");
                personas.eliminarPersona(idPersona);
                break;
            }
            case ORDENAR_PERSONAS: {
                Comparator<Persona> edadComparator = getEdadComparator();
                personas.ordenarPersonas(edadComparator);
                break;
            }
            case SALIR: {
                System.out.println("Salir");
                break;
            }
            default:
                System.out.println("Opción no valida");
                break;
        }
    }

    private Comparator<Persona> getEdadComparator() {
        return (p1, p2) -> {
            if (p1.getEdad() >= p2.getEdad()) return 1;
            return -1;
        };
    }

    private int mostrarOpciones() {
        mostrarOpcionesListaMenu();
        return scanner.nextInt();
    }
}
