#ifndef CHARTFACTORY_H
#define CHARTFACTORY_H
#include "Chart.h"
#include "HistogramChart.h"
#include "PieChart.h"
#include "LineChart.h"
#include <string>

class ChartFactory
{
public:
	static Chart* getChart(const std::string& type)
	{
		Chart* chart = NULL;
		if (type == "histogramchart")
		{
			chart = new HistogramChart();
			std::cout<<"init histogram chart"<<std::endl;
		}
		else if (type == "piechart")
		{
			chart = new PieChart();
			std::cout<<"init pie chart"<<std::endl;
		}
		else if (type == "linechart")
		{
			chart = new LineChart();
			std::cout<<"init line chart"<<std::endl;
		}
		return chart;
	}
};

#endif
