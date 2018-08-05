#ifndef FBSETTINGWINDOW_H
#define FBSETTINGWINDOW_H
#include "ICommand.h"
#include <list>
#include <iostream>
#include <algorithm>

class FunctionButton
{
public:
	FunctionButton(const std::string& name)
	{
		this->m_name = name;
	}
	std::string getName(){return m_name;}
	void setCommand(ICommand* cmd)
	{
		m_pcmd = cmd;
	}
	void onClick()
	{
		std::cout<<"click btn:";
		m_pcmd->execute();
	}
private:
	std::string m_name;
	ICommand* m_pcmd;
};
class FBSettingWindow
{
public:
	FBSettingWindow(const std::string& title)
	{
		m_title = title;
	}
	std::string getTitle(){return m_title;}
	void addFunctionButton(FunctionButton* btn)
	{
		m_btns.push_back(btn);
	}
	void removeFunctionButton(FunctionButton* btn)
	{
		std::list<FunctionButton*>::iterator iter = std::find(m_btns.begin(),m_btns.end(),btn);
		if (iter != m_btns.end())
		{
			m_btns.erase(iter);
		}
	}
	void display()
	{
		std::cout<<"show window"<<std::endl;
		std::cout<<"show btn"<<std::endl;
		std::list<FunctionButton*>::iterator iter = m_btns.begin();
		for (; iter!=m_btns.end(); ++iter)
		{
			std::cout<<(*iter)->getName()<<std::endl;
		}
	}
private:
	std::string m_title;
	std::list<FunctionButton*> m_btns;
};


#endif
