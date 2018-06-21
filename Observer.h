#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
	Observer();
	virtual ~Observer();
	virtual bool Notify();
private:
};

#endif // OBSERVER_H