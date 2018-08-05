#ifndef MINIMIZECOMMAND_H
#define MINIMIZECOMMAND_H
#include "ICommand.h"
#include <iostream>

class WindowHandler
{
public:
	void minimize()
	{
		std::cout<<"window minimize"<<std::endl;
	}
};

class MinimizeCommand : public ICommand
{
public:
	MinimizeCommand()
	{
		m_phandler = new WindowHandler();
	}
	~MinimizeCommand()
	{
		delete m_phandler;
		m_phandler = NULL;
	}
	virtual void execute()
	{
		m_phandler->minimize();
	}
private:
	WindowHandler* m_phandler;
};

#endif
