#include "Vehicle.h"

Vehicle::Vehicle(int v_year, const string &v_brand, bool a)
{
	year = v_year;
	brand = v_brand;
	available = a;
}
Vehicle::~Vehicle()
{
}