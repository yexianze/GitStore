#ifndef SCOREOPERATION_H
#define SCOREOPERATION_H

class ScoreOperation
{
public:
	virtual int* sort(int array[],int size) = 0;
	virtual int search(int array[],int size,int key) = 0;
};

#endif

