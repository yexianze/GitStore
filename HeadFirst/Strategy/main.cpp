#include "LetGo.h"
#include "AirplanStrategy.h"

int main()
{
	LetGo* go = new LetGo(new AirplanStrategy());
	go->printSpend();
	return 0;
}
