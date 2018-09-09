#ifndef SKINFACTORY_H
#define SKINFACTORY_H
#include "Button.h"
#include "TextField.h"
#include "ComboBox.h"

class SkinFactory
{
public:
	virtual Button* createButton() = 0;
	virtual TextField* createTextField() = 0;
	virtual ComboBox* createComboBox() = 0;
};

#endif
