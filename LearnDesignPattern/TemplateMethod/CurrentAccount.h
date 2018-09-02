#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "Account.h"
#include <iostream>

class CurrentAccount : public Account
{
public:
	virtual void calculateInterest()
	{
		std::cout<<"calculate type:current"<<std::endl;
	}
};

#endif
