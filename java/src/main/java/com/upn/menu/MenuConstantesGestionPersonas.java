package com.upn.menu;

import com.upn.models.Persona;
import java.util.Scanner;

public class MenuConstantesGestionPersonas {
    public static Scanner scanner = new Scanner(System.in);
    public static final int INSERTAR_PERSONA_INICIO = 1;
    public static final int INSERTAR_PERSONA_FIN = 2;
    public static final int MOSTAR_PERSONAS = 3;
    public static final int ACTUALIZAR_PERSONA = 4;
    public static final int BORRAR_PERSONA = 5;
    public static final int ORDENAR_PERSONAS = 6;
    public static final int SALIR = 7;

    public static void mostrarOpcionesListaMenu() {
        System.out.println("..:: MENU ::..");
        System.out.println("1. REGISTRO PERSONAS INICIO DE LA LISTA.");
        System.out.println("2. REGISTRO PERSONAS FINAL DE LA LISTA.");
        System.out.println("3. MOSTRAR PERSONAS.");
        System.out.println("4. ACTUALIZAR PERSONAS.");
        System.out.println("5. BORRAR REGISTROS.");
        System.out.println("6. ORDENAR LISTA");
        System.out.println("7. SALIR");
        System.out.println("INGRESA OPCION: ");
    }

    public static Persona solicitarDatosPersona() {
        Persona persona = new Persona();
        System.out.println("Ingresar ID de persona: ");
        persona.setId(scanner.nextInt());
        System.out.println("Ingresar nombre de persona:");
        persona.setNombre(scanner.next());
        System.out.println("Ingresar edad de persona");
        persona.setEdad(scanner.nextInt());
        return persona;
    }

    public static int pedirIdPersona(String s) {
        System.out.println(s);
        return scanner.nextInt();
    }
}
