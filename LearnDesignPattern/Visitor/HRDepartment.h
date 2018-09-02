#ifndef HRDEPARTMENT_H
#define HRDEPARTMENT_H
#include "Department.h"
#include "FulltimeEmployee.h"
#include "ParttimeEmployee.h"
#include <iostream>

class HRDepartment : public Department
{
public:
	virtual void visit(FulltimeEmployee* employee)
	{
		int workTime = employee->getWorkTime();
		std::cout<<"FulltimeEmployee -->"<<employee->getName()<<",work time:"<<workTime<<" hours"<<std::endl;
		if (workTime > 40)
		{
			std::cout<<"FulltimeEmployee -->"<<employee->getName()<<",jia ban time:"<<workTime-40<<" hours"<<std::endl;
		}
		else
		{
			std::cout<<"FulltimeEmployee -->"<<employee->getName()<<",qing jia time:"<<40-workTime<<" hours"<<std::endl;
		}
	}	
	virtual void visit(ParttimeEmployee* employee)
	{	
		int workTime = employee->getWorkTime();
		std::cout<<"ParttimeEmployee -->"<<employee->getName()<<",work time:"<<workTime<<" hours"<<std::endl;
	}
};

#endif
