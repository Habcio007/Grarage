#include "Interface.h"

Interface::Interface()
{
	
}

Interface::~Interface()
{
	
}

void Interface::Add()
{
	char var;

	std::cout << "1. Auto" << std::endl;
	std::cout << "2. Motocykl" << std::endl;
	std::cout << "3. Ciezarowka" << std::endl;
	std::cout << "Jaki pojazd chcesz dodac: ";
	std::cin >> var;

	switch (var)
	{
	case '1':
	{
		Auto* car = new Auto;
		car->Add();
		g->add(car);
	} break;
	case '2':
	{
		Motorbike* motor = new Motorbike;
		motor->Add();
		g->add(motor);
	}
	break;
	case '3':
	{
		Truck* truck = new Truck;
		truck->Add();
		g->add(truck);
	}
	break;
	default: std::cout << "Podaj wartosc z przedzialu 1-3" << std::endl; Add();
		break;
	}
}

void Interface::Erase()
{
	if (g->isEmpty())
	{
		std::cout << "Brak pojazdow w garazu" << std::endl; return;
	}
	int var;
	g->showAll();
	std::cout << "Ktory pojazd chcesz usunac: ";
	std::cin >> var;
	if (g->isAvailable(var) == true)
	{
		Vehicle * temp;

		temp = (*g)[var];
		g->erase(var);
		delete temp;
	}
	else
	{
		std::cout << "Nie mozna usunac wypozyczonego pojazdu";
	}

}

void Interface::Lend()
{
	if (g->isEmpty())
	{
		getchar();
		std::cout << "Brak pojazdow do wypozyczenia";
		getchar(); return;
	}

	unsigned int el;
	if (g->capacity->Notify())
	{
		g->showAll();
		std::cout << "Ktory pojazd chcesz wypozyczyc: ";
		std::cin >> el;
		std::cin.ignore();
		if (!g->isAvailable(el))
		{

			std::cout << "Pojazd ten jest aktualnie wypozyczony";
			g->capacity->BadCall();
			getchar(); return;

		}
		else
		{
			g->SetOccupied((*g)[el]);
			g->save->Notify((*g)[el], 1);
			std::cout << "Pomyslnie wypozyczono pojazd";
			getchar();
		}

	}
	else
	{
		getchar();
		std::cout << "Nie mozna dzisiaj juz nic wypozyczyc!";
		getchar(); return;
	}
}

void Interface::GiveBack()
{
	if (g->isEmpty())
	{
		getchar();
		std::cout << "Brak pojazdow do oddania";
		getchar();
		return;
	}

	unsigned int el;
	g->showOccupied();
	std::cout << "Ktory chcesz oddac: ";
	std::cin >> el;
	std::cin.ignore();
	if (el >= g->CurrentSize() || g->isAvailable(el))
	{
		std::cout << "Podales nieprawdilowa wartosc";
		getchar(); return;
	}
	else
	{
		g->save->Notify((*g)[el], 0);
		g->SetAvailable((*g)[el]);
		std::cout << "Pomyslnie wypozyczono pojazd";
		getchar(); return;
	}



}
void Interface::Download()
{

}
void Interface::Initialize()
{
	unsigned int val;
	std::cout << "Podaj maksymalna ilosc wypozyczen: ";
	std::cin >> val;
	g->capacity->Setmax(val);
}

void Interface::SetGarage(Garage* gar)
{
	g = gar;
}
void Interface::ClearScreen()
{
#ifdef __linux__
	system("clear");
#elif _WIN32
	system("cls");
#else

#endif
}
void Interface::Menu()
{
	std::cout << "1. Dodaj" << std::endl;
	std::cout << "2. Usun" << std::endl;
	std::cout << "3. Wypozycz" << std::endl;
	std::cout << "4. Oddaj" << std::endl;
	std::cout << "5. Wczytaj z pliku" << std::endl;
	std::cout << "q. Wyjscie" << std::endl;
	char a;
	std::cout << "Co chcesz zrobic: ";
	std::cin >> a;

	switch (a)
	{
	case '1': ClearScreen(); Add(); ClearScreen(); Menu();
		break;
	case '2': ClearScreen(); Erase(); ClearScreen(); Menu();
		break;
	case '3': ClearScreen(); Lend(); ClearScreen(); Menu();
		break;
	case '4': ClearScreen(); GiveBack(); ClearScreen(); Menu();
		break;
	case '5': ClearScreen(); Download(); ClearScreen(); Menu();
		break;
	case 'q': return;
		break;
	default:  ClearScreen(); Menu();
		break;

	}


}