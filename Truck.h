#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"


class Truck : public Vehicle
{
public:
	Truck(double t_capacity = 0, bool bed = false, int year = 0, const string & brand = "brak", bool a = true);
	~Truck();
	char id = 'T';
	virtual void show();
	virtual void SetAvailable(unsigned int var);
	virtual void Add();

private:
	double capacity;
	bool bedroom;
};

#endif // TRUCK_H