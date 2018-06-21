#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"


class Motorbike : public Vehicle
{
public:
	Motorbike(int speed = 0, bool m_trailer = false, int year = 0, const string & brand = "brak", bool a = true);
	~Motorbike();
	char id = 'M';
	virtual void show();
	virtual void SetAvailable(unsigned int var);
	virtual void Add();

private:
	int maxSpeed;
	bool trailer;
};

#endif // MOTORBIKE_H