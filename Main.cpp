#include <iostream>
#include "headers/AppFacade.h"

using namespace std;
using namespace Facade;

int main()
{
	Menu_Facade menu_Facade;
	menu_Facade.hola_mundo();
	cin.ignore();
	return 0;
}
