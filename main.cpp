#include <iostream>
#include "headers/fachada.h"

using namespace std;
using namespace Fachada;

int main()
{
    Fachada_Menu facade_Menu;
    facade_Menu.show();
    cin.ignore();
    return 0;
}
