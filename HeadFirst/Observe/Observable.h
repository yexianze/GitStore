#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <vector>
#include <algorithm>
#include "Observer.h"

class Observable
{
public:
	Observable():m_bChanged(false){}
	virtual ~Observable(){}

	//register
	void addObserver(Observer* o)
	{
		std::vector<Observer*>::iterator itr = std::find(m_obs.begin(),m_obs.end(),o);
		if (itr == m_obs.end())
		{
			m_obs.push_back(o);
		}
	}
	//unregister
	void deleteObserver(Observer* o)
	{
		std::vector<Observer*>::iterator itr = std::find(m_obs.begin(),m_obs.end(),o);
		if (itr != m_obs.end())
		{
			m_obs.erase(itr);
		}
	}
	void deleteObservers()
	{
		m_obs.clear();
	}
	//notify
	virtual void notifyObservers(const std::string& arg)
	{
		if (!m_bChanged)
			return;
		for (int i=0; i<m_obs.size(); ++i)
		{
			m_obs[i]->update(arg);
		}
	}
	
	bool hasChanged(){return m_bChanged;}
	int countObservers(){return m_obs.size();}
protected:
	void setChanged(){m_bChanged = true;}
	void clearChanged(){m_bChanged = false;}
private:
	bool m_bChanged;
	std::vector<Observer*> m_obs;
};

#endif
