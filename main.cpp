#include <iostream>
#include "headers/facade.h"

using namespace std;
using namespace FacadeMenu;

int main()
{

    Facade_Menu facade_Menu;

    facade_Menu.show();
    cin.ignore();
    return 0;
}