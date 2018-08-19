#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H
#include "Employee.h"
#include "Department.h"
#include <string>

class FulltimeEmployee : public Employee
{
public:
	FulltimeEmployee(const std::string& name,double weeklyWage,int workTime)
	: m_name(name),m_weeklyWage(weeklyWage),m_workTime(workTime){}
	
	~FulltimeEmployee(){}

	//
	void setName(const std::string& name){m_name = name;}
	std::string getName() const {return m_name;}
	//
	void setWeeklyWage(double weeklyWage){m_weeklyWage = weeklyWage;}
	double getWeeklyWage() const {return m_weeklyWage;}
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
	double m_weeklyWage;
	int m_workTime;
};

#endif
