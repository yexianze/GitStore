#include "SpringSkinFactory.h"

int main()
{
	SkinFactory* factory = new SpringSkinFactory();
	Button* bt = factory->createButton();
	TextField* tf = factory->createTextField();
	ComboBox* cb = factory->createComboBox();
	bt->display();
	tf->display();
	cb->display();
	return 0;
}
