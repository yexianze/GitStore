#ifndef MAIN_H
#define MAIN_H
#include "Coder.h"
#include "AndroidWeekly.h"
#include "Observer.h"
#include "Observable.h"

int main()
{
	Observer* o1 = new Coder("jock");
	Observer* o2 = new Coder("tom");
	Observer* o3 = new Coder("jam");
	AndroidWeekly* wk = new AndroidWeekly();
	wk->addObserver(o1);
	wk->addObserver(o2);
	wk->updateContent("first two third");
	wk->addObserver(o3);
	wk->updateContent("hello world");
	delete o1;
	delete o2;
	delete o3;
	delete wk;	
	return 0;
}

#endif
