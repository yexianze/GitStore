#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H
#include "ICommand.h"
#include <iostream>
class HelpHandler
{
public:
	void display()
	{
		std::cout<<"Display Help Docs"<<std::endl;
	}
};

class HelpCommand : public ICommand
{
public:
	HelpCommand()
	{
		m_phandler = new HelpHandler();
	}
	~HelpCommand()
	{
		delete m_phandler;
		m_phandler = NULL;
	}
	virtual void execute()
	{
		m_phandler->display();
	}
private:
	HelpHandler* m_phandler;
};


#endif
