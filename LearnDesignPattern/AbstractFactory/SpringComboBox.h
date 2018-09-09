#ifndef SPRINGCOMBOBOX_H
#define SPRINGCOMBOBOX_H
#include "ComboBox.h"
#include <iostream>

class SpringComboBox : public ComboBox
{
public:
	virtual void display()
	{
		std::cout<<"show green combobox"<<std::endl;
	}
};

#endif
