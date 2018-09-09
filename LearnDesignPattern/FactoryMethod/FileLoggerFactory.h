#ifndef FILELOGGERFACTORY_H
#define FILELOGGERFACTORY_H
#include "LoggerFactory.h"
#include "FileLogger.h"

class FileLoggerFactory : public LoggerFactory
{
public:
	virtual Logger* createLogger()
	{
		Logger* logger = new FileLogger();
		return logger;
	}
};

#endif
