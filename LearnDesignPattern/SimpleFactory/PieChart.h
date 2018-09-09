#ifndef PIECHART_H
#define PIECHART_H
#include "Chart.h"
#include <iostream>

class PieChart : public Chart
{
public:
	PieChart()
	{
		std::cout<<"create pie chart"<<std::endl;
	}
	virtual void display()
	{
		std::cout<<"show pie chart"<<std::endl;
	}
};

#endif
