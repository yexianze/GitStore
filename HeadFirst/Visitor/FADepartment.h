#ifndef FADEPARTMENT_H
#define FADEPARTMENT_H
#include "Department.h"
#include "FulltimeEmployee.h"
#include "ParttimeEmployee.h"
#include <iostream>

class FADepartment : public Department
{
public:
	virtual void visit(FulltimeEmployee* employee)
	{
		int workTime = employee->getWorkTime();
		double weekWage = employee->getWeeklyWage();
		if (workTime > 40)
		{
			weekWage = weekWage + (workTime - 40) * 100;
		}
		else if (workTime < 40)
		{
			weekWage = weekWage - (40 - workTime) * 80;
			if (weekWage < 0)
			{
				weekWage = 0;
			}
		}
		std::cout<<"FulltimeEmployee -->"<<employee->getName()<<",get wage: "<<weekWage<<std::endl;
	}	
	virtual void visit(ParttimeEmployee* employee)
	{	
		int workTime = employee->getWorkTime();
		double hourWage = employee->getHourWage();	
		std::cout<<"ParttimeEmployee -->"<<employee->getName()<<",get wage: "<<hourWage*workTime<<std::endl;
	}
};

#endif
