#ifndef ACCESSVALIDATOR_H
#define ACCESSVALIDATOR_H
#include <iostream>
#include <string>

class AccessValidator
{
public:
	bool Validate(const std::string& userid)
	{
		std::cout<<"Validate  User From DB"<<std::endl;
		if (userid == "Jock")
		{
			std::cout<<"Login success"<<std::endl;
			return true;
		}
		else
		{
			std::cout<<"Login failed"<<std::endl;
			return false;
		}
	}
};

#endif
