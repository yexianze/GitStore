#include "LoadBalancer.h"
#include <iostream>

int main()
{
	LoadBalancer* b1 = LoadBalancer::getLoadBalancer();
	LoadBalancer* b2 = LoadBalancer::getLoadBalancer();
	LoadBalancer* b3 = LoadBalancer::getLoadBalancer();
	LoadBalancer* b4 = LoadBalancer::getLoadBalancer();
	LoadBalancer* b5 = LoadBalancer::getLoadBalancer();
	
	b1->addServer("Server 1");
	b1->addServer("Server 2");
	b1->addServer("Server 3");
	b1->addServer("Server 4");	
	b1->addServer("Server 5");

	for (int i=0; i<10; i++)
	{
		std::string server = b1->getServer();
		std::cout<<"dispance server to -->"<<server<<std::endl;
	}
	return 0;
}
