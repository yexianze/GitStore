#ifndef SPRINGSKINFACTORY_H
#define SPRINGSKINFACTORY_H
#include "SkinFactory.h"
#include "Button.h"
#include "TextField.h"
#include "ComboBox.h"
#include "SpringButton.h"
#include "SpringTextField.h"
#include "SpringComboBox.h"

class SpringSkinFactory : public SkinFactory
{
public:
	virtual Button* createButton()
	{
		return new SpringButton();
	}
	virtual TextField* createTextField()
	{
		return new SpringTextField();
	}
	virtual ComboBox* createComboBox()
	{
		return new SpringComboBox();
	}
};

#endif
