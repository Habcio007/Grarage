#include "Motorbike.h"

Motorbike::Motorbike(int speed, bool m_trailer, int year, const string & brand, bool a) :Vehicle(year, brand, a)
{
	maxSpeed = speed;
	trailer = m_trailer;

}


Motorbike::~Motorbike()
{
	
}

void Motorbike::show()
{
	std::cout << " Marka: " << Getbrand() << " Maksymalna predkosc: " << maxSpeed << " Posiada przyczepe: " << trailer << " Rocznik: " << Getyear() << " Dostepnosc: " << Getavailable() << std::endl;
}

void Motorbike::SetAvailable(unsigned int var)
{
	var == 1 ? this->available = true : this->available = false;
}

void Motorbike::Add()
{

	string brand; int year;
	std::cout << "Podaj marke: ";
	std::cin >> brand;
	this->SetBrand(brand);
	std::cout << "Podaj rocznik: ";
	std::cin >> year;
	this->SetYear(year);
	std::cout << "Podaj maksymalna predkosc: ";
	std::cin >> this->maxSpeed;
	std::cout << "Czy ma przyczepe(0-1): ";
	std::cin >> this->trailer;

}