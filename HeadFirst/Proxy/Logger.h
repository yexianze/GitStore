#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>
#include <string>

class Logger
{
public:
	void Log(const std::string& userid)
	{
		std::cout<<"Update DB: User-"<<userid<<" search count +1"<<std::endl;
	}
};

#endif
