#ifndef ANDROIDWEEKLY_H
#define ANROIDWEEKLY_H
#include "Observable.h"

class AndroidWeekly : public Observable
{
public:
	AndroidWeekly(){}
	~AndroidWeekly(){}

	//
	void updateContent(const std::string& ct)
	{
		if (m_content != ct)
		{
			m_content = ct;
			setChanged();
			notifyObservers(ct);
		}
	}
private:
	std::string m_content;
};

#endif
