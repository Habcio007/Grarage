#ifndef RECORD_H
#define RECORD_H
#include <fstream>
#include <cstdlib>
#include "Observer.h"
#include "Vehicle.h"

class Record :public Observer
{
public:
	Record();
	~Record();
	virtual bool Notify(Vehicle* v, bool a);
protected:

private:
};

#endif // RECORD_H