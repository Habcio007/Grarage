#include "Truck.h"

Truck::Truck(double t_capacity, bool bed, int year, const string & brand, bool a) :Vehicle(year, brand, a)
{
	capacity = t_capacity;
	bedroom = bed;
}

Truck::~Truck()
{
}

void Truck::show()
{
	std::cout << " Marka: " << Getbrand() << " Pojemnosc bagaznika: " << capacity << " Posiada sypialnie: " << bedroom << " Rocznik: " << Getyear() << " Dostepnosc: " << Getavailable() << std::endl;
}

void Truck::SetAvailable(unsigned int var)
{
	var == 1 ? this->available = true : this->available = false;
}

void Truck::Add()
{

	string brand; int year;
	std::cout << "Podaj marke: ";
	std::cin >> brand;
	this->SetBrand(brand);
	std::cout << "Podaj rocznik: ";
	std::cin >> year;
	this->SetYear(year);
	std::cout << "Podaj pojemnosc naczepy: ";
	std::cin >> this->capacity;
	std::cout << "Czy posiada czesc sypialna(0-1): ";
	std::cin >> this->bedroom;

}