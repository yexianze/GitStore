#ifndef SEARCHER_H
#define SEARCHER_H
#include <string>

class Searcher
{
public:
	virtual ~Searcher(){}
	virtual std::string DoSearch(const std::string& userid,const std::string& keyword) = 0;
};

#endif
