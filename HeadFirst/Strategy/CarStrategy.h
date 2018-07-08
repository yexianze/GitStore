#ifndef CARSTRATEGY_HEADER
#define CARSTRATEGY_HEADER
#include "ITravelStrategy.h"

class CarStrategy : public ITravelStrategy
{
public:
	CarStrategy(){}
	virtual ~CarStrategy(){}

	//
	virtual int needSpend(){return 2000;}
};

#endif

