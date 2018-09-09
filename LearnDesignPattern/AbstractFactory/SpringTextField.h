#ifndef SPRINGTEXTFIELD_H
#define SPRINGTEXTFIELD_H
#include "TextField.h"
#include <iostream>

class SpringTextField : public TextField
{
public:
	virtual void display()
	{
		std::cout<<"show green textfield"<<std::endl;
	}
};

#endif
