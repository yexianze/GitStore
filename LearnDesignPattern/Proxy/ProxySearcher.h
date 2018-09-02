#ifndef PROXYSEARCHER_H
#define PROXYSEARCHER_H
#include "Searcher.h"
#include "AccessValidator.h"
#include "Logger.h"
#include "RealSearcher.h"

class ProxySearcher : public Searcher
{
public:
	ProxySearcher()
	{
		m_validator = new AccessValidator();
		m_log = new Logger();
		m_searcher = new RealSearcher();
	}
	std::string DoSearch(const std::string& userid,const std::string& keyword)
	{
		if(m_validator->Validate(userid))
		{
			std::string result = m_searcher->DoSearch(userid,keyword);
			m_log->Log(userid);
			return result;
		}
		else
		{
			return "";
		}
	}
private:
	AccessValidator* m_validator;
	Logger* m_log;
	RealSearcher* m_searcher;
};

#endif

