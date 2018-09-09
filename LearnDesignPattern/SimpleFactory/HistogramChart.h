#ifndef HISTOGRAMCHART_H
#define HISTOGRAMCHART_H
#include "Chart.h"
#include <iostream>

class HistogramChart : public Chart
{
public:
	HistogramChart()
	{
		std::cout<<"create histogram chart"<<std::endl;
	}
	virtual void display()
	{
		std::cout<<"show histogram chart"<<std::endl;
	}
};

#endif
