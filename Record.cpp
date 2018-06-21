#include "Record.h"

Record::Record()
{

}

Record::~Record()
{

}


bool Record::Notify(Vehicle* v, bool a)
{

	bool noerrors = true;


	if (a) 
	{


		const char * file = "Lent.txt";


		std::ofstream fout(file, std::ios_base::out | std::ios_base::app | std::ios_base::binary);
		if (!fout.is_open())
		{
			exit(EXIT_FAILURE);
		}
		fout.write((char*)&(*v), sizeof(*v));
		fout.close();
	}
	else 
	{

		const char * file = "GiveBack.txt";


		std::ofstream fout(file, std::ios_base::out | std::ios_base::app | std::ios_base::binary);
		if (!fout.is_open())
		{
			exit(EXIT_FAILURE);
		}
		fout.write((char*)&(*v), sizeof(*v));
		fout.close();

	}

	return noerrors;
}