#ifndef SPRINGBUTTON_H
#define SPRINGBUTTON_H
#include "Button.h"
#include <iostream>

class SpringButton : public Button
{
public:
	virtual void display()
	{
		std::cout<<"show green button"<<std::endl;
	}
};

#endif
