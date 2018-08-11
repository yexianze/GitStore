#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
public:
	//
	bool validate(const std::string& account,const std::string& pswd)
	{
		std::string ac,ps;
		std::cout<<"input account:"<<std::endl;
		std::getline(std::cin,ac);
		std::cout<<"input password:"<<std::endl;
		std::cin.clear();
		std::getline(std::cin,ps);
		return (account==ac && pswd==ps);
	}
	//
	void display()
	{
		std::cout<<"display intersert"<<std::endl;
	}
	//
	virtual void calculateInterest() = 0;
	//template method
	void handle(const std::string& account,const std::string& pswd)
	{
		if (!validate(account,pswd))
		{
			std::cout<<"account or password error!"<<std::endl;
			return;
		}
		calculateInterest();
		display();
	}
};

#endif
