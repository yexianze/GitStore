#ifndef LINECHART_H
#define LINECHART_H
#include "Chart.h"
#include <iostream>

class LineChart : public Chart
{
public:
	LineChart()
	{
		std::cout<<"create line chart"<<std::endl;
	}
	virtual void display()
	{
		std::cout<<"show line chart"<<std::endl;
	}
};

#endif
