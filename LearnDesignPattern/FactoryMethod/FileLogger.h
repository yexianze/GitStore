#ifndef FILELOGGER_H
#define FILELOGGER_H
#include "Logger.h"
#include <iostream>

class FileLogger : public Logger
{
public:
	virtual void writeLog()
	{
		std::cout<<"File record log"<<std::endl;
	}
};

#endif
