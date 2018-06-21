#ifndef INTERFACE_H
#define INTERFACE_H
#include <stdlib.h>
#include "Garage.h"

class Interface
{
public:
	Interface();
	~Interface();
	void Menu();
	void Add();
	void Erase();
	void Lend();
	void GiveBack();
	void Download();
	void Initialize();
	void SetGarage(Garage *gar);
	void ClearScreen();
private:

	Garage * g;
};

#endif // INTERFACE_H