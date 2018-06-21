#ifndef AUTO_H
#define AUTO_H

#include "Vehicle.h"


class Auto : public Vehicle
{
public:
	Auto(const string &car_color = "brak", double fuel = 0, int year = 0, const string & brand = "brak", bool a = true);
	~Auto();
	char id = 'A';
	virtual void show();
	virtual void SetAvailable(unsigned int var);
	virtual void Add();
	double SetFuelConsumption(double val) { return fuelConsumption = val; }
	double GetFuelConsumption() { return fuelConsumption; }
private:
	string color;
	double fuelConsumption;
};

#endif // AUTO_H