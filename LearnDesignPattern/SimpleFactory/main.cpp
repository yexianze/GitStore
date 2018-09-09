#include "ChartFactory.h"

int main()
{
	Chart* chart = ChartFactory::getChart("linechart");
	chart->display();

	return 0;
}
