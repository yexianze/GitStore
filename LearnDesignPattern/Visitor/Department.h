#ifndef DEPARTMENT_H
#define DEPARTMENT_H
//#include "FulltimeEmployee.h"
//#include "ParttimeEmployee.h"

class FulltimeEmployee;
class ParttimeEmployee;

class Department
{
public:
	virtual void visit(FulltimeEmployee* employee) = 0;
	virtual void visit(ParttimeEmployee* employee) = 0;
};

#endif
