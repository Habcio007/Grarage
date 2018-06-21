#include "Auto.h"
Auto::Auto(const string &car_color, double fuel , int year, const string & brand, bool a) :Vehicle(year, brand, a)
{
	color = car_color;
	fuelConsumption = fuel;
}

Auto::~Auto()
{
	
}

void Auto::show()
{
	std::cout << " Marka: " << Getbrand() << " Kolor: " << color << " Spalanie: " << fuelConsumption << " Rocznik: " << Getyear() << " Dostepnosc: " << Getavailable() << std::endl;
}

void Auto::SetAvailable(unsigned int var)
{
	var == 1 ? this->available = true : this->available = false;
}

void Auto::Add()
{
	string brand; int year;
	std::cout << "Podaj marke: ";
	std::cin >> brand;
	this->SetBrand(brand);
	std::cout << "Podaj rocznik: ";
	std::cin >> year;
	this->SetYear(year);
	std::cout << "Podaj kolor: ";
	std::cin >> this->color;
	std::cout << "Podaj spalanie (na 100km): ";
	std::cin >> this->fuelConsumption;
}