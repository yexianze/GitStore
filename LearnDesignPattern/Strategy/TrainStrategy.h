#ifndef TRAINSTRATEGY_HEADER
#define TRAINSTRATEGY_HEADER
#include "ITravelStrategy.h"

class TrainStrategy : public ITravelStrategy
{
public:
	TrainStrategy(){}
	virtual ~TrainStrategy(){}
	
	//
	virtual int needSpend(){return 500;}
};

#endif

