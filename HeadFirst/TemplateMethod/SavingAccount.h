#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "Account.h"
#include <iostream>

class SavingAccount : public Account
{
public:
	virtual void calculateInterest()
	{
		std::cout<<"calculate type:saving"<<std::endl;
	}
};

#endif
