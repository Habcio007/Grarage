#include <iostream>
#include "Interface.h"
using namespace std;


int main()
{
	Interface screen; Garage g;
	screen.SetGarage(&g);
	screen.Initialize();
	screen.ClearScreen();
	screen.Menu();

	return 0;
}