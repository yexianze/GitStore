#ifndef SUMMERCOMBOBOX_H
#define SUMMERCOMBOBOX_H
#include "ComboBox.h"
#include <iostream>

class SummerComboBox : public ComboBox
{
public:
	virtual void display()
	{
		std::cout<<"show blue combobox"<<std::endl;
	}
};

#endif
