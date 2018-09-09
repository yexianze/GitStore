#ifndef SUMMERTEXTFIELD_H
#define SUMMERTEXTFIELD_H
#include "TextField.h"
#include <iostream>

class SummerTextField : public TextField
{
public:
	virtual void display()
	{
		std::cout<<"show blue textfield"<<std::endl;
	}
};

#endif
