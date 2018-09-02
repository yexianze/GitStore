#include "FBSettingWindow.h"
#include "ICommand.h"
#include "HelpCommand.h"
#include "MinimizeCommand.h"

int main()
{
	FBSettingWindow* fbwnd = new FBSettingWindow("FBSetting Window");
	
	FunctionButton* btn1 = new FunctionButton("BTN1");
	FunctionButton* btn2 = new FunctionButton("BTN2");
	ICommand* helpcmd = new HelpCommand();
	ICommand* minimizecmd = new MinimizeCommand();
	btn1->setCommand(helpcmd);
	btn2->setCommand(minimizecmd);
	fbwnd->addFunctionButton(btn1);
	fbwnd->addFunctionButton(btn2);
	fbwnd->display();
	
	//
	btn1->onClick();
	btn2->onClick();
	return 0;
}
