#ifndef AIRPLANSTRATEGY_HEADER
#define AIRPLANSTRATEGY_HEADER
#include "ITravelStrategy.h"

class AirplanStrategy : public ITravelStrategy
{
public:
	AirplanStrategy(){}
	virtual ~AirplanStrategy(){}

	//
	virtual int needSpend(){return 1400;}
};

#endif

