#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Department.h"

class Employee
{
public:
	virtual void accept(Department* handler) = 0;
};

#endif
