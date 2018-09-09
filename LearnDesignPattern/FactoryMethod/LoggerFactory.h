#ifndef LOGGERFACTORY_H
#define LOGGERFACTORY_H
#include "Logger.h"

class LoggerFactory
{
public:
	virtual Logger* createLogger() = 0;
};

#endif
