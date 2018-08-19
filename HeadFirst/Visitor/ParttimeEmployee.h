#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H
#include "Employee.h"
#include "Department.h"
#include <string>

class ParttimeEmployee : public Employee
{
public:
	ParttimeEmployee(const std::string& name,double hourWage,int workTime)
	: m_name(name),m_hourWage(hourWage),m_workTime(workTime){}
	
	~ParttimeEmployee(){}

	//
	void setName(const std::string& name){m_name = name;}
	std::string getName() const {return m_name;}
	//
	void setHourWage(double hourWage){m_hourWage = hourWage;}
	double getHourWage() const {return m_hourWage;}
	//
	void setWorkTime(int workTime){m_workTime = workTime;}
	int getWorkTime() const {return m_workTime;}
	//
	virtual void accept(Department* handler)
	{
		handler->visit(this);
	}
	
private:
	std::string m_name;
	double m_hourWage;
	int m_workTime;
};

#endif
