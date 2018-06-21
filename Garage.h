#ifndef GARAGE_H
#define GARAGE_H
#include <vector>
#include <iostream>
#include <memory>
#include "Vehicle.h"
#include "Auto.h"
#include "Motorbike.h"
#include "Truck.h"
#include "Amount.h"
#include "Record.h"
class Garage
{
public:
	Garage();
	~Garage();
	void add(Vehicle *v);
	void erase(const int el);
	void showAll();
	void showOccupied();
	void SetOccupied(Vehicle* v);
	void Clean();
	bool isAvailable(unsigned int el);
	void SetAvailable(Vehicle* v);
	bool isEmpty();
	unsigned int CurrentSize();

	std::vector <Vehicle*> vehicles;

	Amount *capacity; 
	Record *save;
	Vehicle* operator[](unsigned int el) { return vehicles[el]; }

private:
};

#endif // GARAGE_H