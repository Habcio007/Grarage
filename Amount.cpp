#include "Amount.h"

Amount::Amount(unsigned int c = 0, unsigned int m = 0)
{
	current = c;
	max = m;
}

Amount::~Amount()
{

}

bool Amount::Notify()
{
	current++;
	if (current>max) return false;
	else return true;
}

void Amount::BadCall()
{
	current--;
}