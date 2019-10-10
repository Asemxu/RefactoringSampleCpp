package com.upn.facade;

import com.upn.menu.Menu;

public class FachadaMenu {
    private Menu menu;

    public FachadaMenu(Menu menu) {
        this.menu = menu;
    }

    public void empezarMenu() {
        menu.empezarMenu();
    }
}
