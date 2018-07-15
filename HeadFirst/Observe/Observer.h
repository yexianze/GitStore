#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>

class Observer
{
public:
	Observer(){}
	virtual ~Observer() {}

	//update
	virtual void update(const std::string& content) = 0;
};

#endif
