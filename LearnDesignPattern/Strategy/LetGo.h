#ifndef LETGO_HEADER
#define LETGO_HEADER
#include "ITravelStrategy.h"
#include <iostream>

class LetGo
{
public:
	LetGo(ITravelStrategy* strategy)
	{
		m_pStrategy = strategy;
	}
	~LetGo(){}

	//
	void printSpend()
	{
		std::cout<<"Spend Moneany:"<<m_pStrategy->needSpend()<<std::endl;
	}
private:
	ITravelStrategy* m_pStrategy;
};

#endif

