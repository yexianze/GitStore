#ifndef CODER_H
#define CODER_H
#include "Observer.h"
#include <iostream>

class Coder : public Observer
{
public:
	Coder(const std::string& name):m_name(name){}
	~Coder(){}

	//
	virtual void update(const std::string& content)
	{
		std::cout<<m_name<<" recive update contents is:"<<content<<std::endl;
	}
private:
	std::string m_name;
};

#endif
