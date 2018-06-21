#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using std::string;



class Vehicle
{
public:
	Vehicle(int v_year = 0, const string & v_brand = "brak", bool a = true);
	virtual ~Vehicle();

	virtual void show() = 0;
	char id;
	const int Getyear() { return year; }
	const string Getbrand() { return brand; }
	const bool Getavailable() { return available; }
	void SetYear(unsigned int n) { year = n; }
	void SetBrand(string n) { brand = n; }
	virtual void SetAvailable(unsigned int var) = 0;
	virtual void Add() = 0;


protected:
	bool available;

private:
	int year;
	string brand;

};

#endif // VEHICLE_H