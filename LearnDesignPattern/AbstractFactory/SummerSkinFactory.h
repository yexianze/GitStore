#ifndef SUMMERSKINFACTORY_H
#define SUMMERSKINFACTORY_H
#include "SkinFactory.h"
#include "Button.h"
#include "TextField.h"
#include "ComboBox.h"
#include "SummerButton.h"
#include "SummerTextField.h"
#include "SummerComboBox.h"

class SummerSkinFactory : public SkinFactory
{
public:
	virtual Button* createButton()
	{
		return new SummerButton();
	}
	virtual TextField* createTextField()
	{
		return new SummerTextField();
	}
	virtual ComboBox* createComboBox()
	{
		return new SummerComboBox();
	}
};

#endif
