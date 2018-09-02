#ifndef ITRAVELSTRATEGY_HEADER
#define ITRAVELSTRATEGY_HEADER

class ITravelStrategy
{
public:
	ITravelStrategy(){}
	virtual ~ITravelStrategy(){}

	//
	virtual int needSpend() = 0;
};

#endif
