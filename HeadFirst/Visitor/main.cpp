#include "EmployeeList.h"
#include "Employee.h"
#include "FulltimeEmployee.h"
#include "ParttimeEmployee.h"
#include "FADepartment.h"
#include "HRDepartment.h"
#include <iostream>

int main()
{
	EmployeeList* list = new EmployeeList();
	
	Employee* e1 = new FulltimeEmployee("One",3200,45);
	Employee* e2 = new FulltimeEmployee("Two",2000,40);
	Employee* e3 = new FulltimeEmployee("Three",3000,30);
	Employee* e4 = new ParttimeEmployee("Four",80,20);
	Employee* e5 = new ParttimeEmployee("Five",60,15);

	list->addEmployee(e1);
	list->addEmployee(e2);
	list->addEmployee(e3);		
	list->addEmployee(e4);
	list->addEmployee(e5);

	//FA
	Department* fa = new FADepartment();
	list->accept(fa);
	std::cout<<"-----------------------------------------"<<std::endl;
	//HR
	Department* hr = new HRDepartment();
	list->accept(hr);
	return 0;
}
