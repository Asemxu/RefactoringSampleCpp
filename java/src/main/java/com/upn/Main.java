package com.upn;

import com.upn.facade.FachadaMenu;
import com.upn.menu.MenuGestionPersonas;

public class Main {

    public static void main(String[] args) {
        FachadaMenu fachadaMenu = new FachadaMenu(new MenuGestionPersonas());
        fachadaMenu.empezarMenu();
    }
}