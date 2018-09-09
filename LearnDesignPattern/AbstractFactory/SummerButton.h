#ifndef SUMMERBUTTON_H
#define SUMMERBUTTON_H
#include "Button.h"
#include <iostream>

class SummerButton : public Button
{
public:
	virtual void display()
	{
		std::cout<<"show blue button"<<std::endl;
	}
};

#endif
