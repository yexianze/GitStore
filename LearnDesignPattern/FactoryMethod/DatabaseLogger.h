#ifndef DATABASELOGGER_H
#define DATABASELOGGER_H
#include "Logger.h"
#include <iostream>

class DatabaseLogger : public Logger
{
public:
	virtual void writeLog()
	{
		std::cout<<"DB record log"<<std::endl;
	}
};

#endif
