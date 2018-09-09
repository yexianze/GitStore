#ifndef LOADBALANCER_H
#define LOADBALANCER_H
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <string>

class LoadBalancer
{
public:
	static LoadBalancer* getLoadBalancer()
	{
		if (m_instance == NULL)
		{
			m_instance = new LoadBalancer();
		}
		return m_instance;
	}
	
	void addServer(const std::string& server)
	{
		m_serverlist.push_back(server);
	}
	void removeServer(const std::string& server)
	{
		std::vector<std::string>::iterator itr = std::find(m_serverlist.begin(),m_serverlist.end(),server);
		if (itr != m_serverlist.end())
		{
			m_serverlist.erase(itr);
		}
	}
	std::string getServer()
	{
		srand((unsigned int)time(NULL));
		int i = rand()%m_serverlist.size();
		return m_serverlist[i];
	}
private:
	LoadBalancer()
	{
	}
private:
	std::vector<std::string> m_serverlist;
	static LoadBalancer* m_instance;
};
LoadBalancer* LoadBalancer::m_instance = NULL;

#endif
