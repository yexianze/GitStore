#ifndef REALSEARCHER_H
#define REALSEARCHER_H
#include "Searcher.h"
#include <iostream>

class RealSearcher : public Searcher
{
public:
	std::string DoSearch(const std::string& userid,const std::string& keyword)
	{
		std::cout<<"User-"<<userid<<" search Keyword:"<<keyword<<std::endl;
		return "content";
	}
};

#endif

