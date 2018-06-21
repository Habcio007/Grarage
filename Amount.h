#ifndef AMOUNT_H
#define AMOUNT_H
#include <iostream>
#include "Observer.h"

class Amount : public Observer
{
public:
	Amount(unsigned int c, unsigned int m);
	~Amount();

	void Setmax(unsigned int val) { max = val; }
	virtual bool Notify();
	virtual void BadCall();
private:
	unsigned int current;
	unsigned int max;
};

#endif // AMOUNT_H