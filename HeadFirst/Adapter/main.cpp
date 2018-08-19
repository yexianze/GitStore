#include "ScoreOperation.h"
#include "OperationAdapter.h"
#include <iostream>

int main()
{
	int scores[] = {84,76,50,69,90,91,88,96};
	int* result = new int[8];
	int score;
	
	ScoreOperation* oper = new OperationAdapter();
	result = oper->sort(scores,8);
	std::cout<<"sort result:"<<std::endl;
	for (int i=0; i<8; i++)
	{
		std::cout<<result[i]<<" ";
	}
	std::cout<<std::endl;
	
	std::cout<<"search 90:"<<std::endl;
	score = oper->search(result,8,90);
	if (score != -1)
	{
		std::cout<<"search success"<<std::endl;
	}
	else
	{
		std::cout<<"search failed"<<std::endl;
	}
	return 0;
}
