#ifndef DATABASELOGGERFACTORY_H
#define DATABASELOGGERFACTORY_H
#include "LoggerFactory.h"
#include "DatabaseLogger.h"

class DatabaseLoggerFactory : public LoggerFactory
{
public:
	virtual Logger* createLogger
	{
		Logger* logger = new DatabaseLogger();
		return logger;
	}
};

#endif
