#include "Garage.h"

Garage::Garage()
{
	unsigned int c = 0; unsigned int max = 0;
	capacity = new Amount(c, max);
	save = new Record();
}

Garage::~Garage()
{
	delete save;
	delete capacity;
	Clean();
}


void Garage::add(Vehicle *v)
{
	vehicles.push_back(v);
}

void Garage::showAll()
{
	for (unsigned int i = 0; i<vehicles.size(); i++)
	{
		std::cout << i << ". "; vehicles[i]->show();
	}
}
void Garage::showOccupied()
{

	for (unsigned int i = 0; i<vehicles.size(); i++)
	{
		if (!vehicles[i]->Getavailable())
		{
			std::cout << i << ". "; vehicles[i]->show();
		}
	}

}

void Garage::erase(const int el)
{
	vehicles.erase(vehicles.begin() + el );
}

void Garage::SetOccupied(Vehicle* v)
{
	v->SetAvailable(0);
}

void Garage::Clean()
{
	Vehicle*temp;
	for (unsigned int i = 0; i<vehicles.size(); i++)
	{
		temp = vehicles[i];
		delete temp;
	}
	vehicles.clear();
}

bool Garage::isEmpty()
{
	if (vehicles.size() == 0) return true;
	else return false;
}

void Garage::SetAvailable(Vehicle* v)
{
	v->SetAvailable(1);
}
unsigned int Garage::CurrentSize()
{
	return vehicles.size();
}
bool Garage::isAvailable(unsigned int el)
{
	if (vehicles[el]->Getavailable() == true) return 1;
	else return 0;
}