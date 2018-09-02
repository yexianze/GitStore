#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H
#include "Employee.h"
#include "Department.h"
#include <list>

class EmployeeList
{
public:
	void addEmployee(Employee* employee)
	{
		m_employees.push_back(employee);
	}
	void accept(Department* handler)
	{
		std::list<Employee*>::iterator iter = m_employees.begin();
		for (; iter!=m_employees.end(); ++iter)
		{
			(*iter)->accept(handler);
		}
	}
private:
	std::list<Employee*> m_employees;
};

#endif
