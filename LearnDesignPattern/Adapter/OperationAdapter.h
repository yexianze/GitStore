#ifndef OPERATIONADAPTER_H
#define OPERATIONADAPTER_H
#include "ScoreOperation.h"
#include "QuickSort.h"
#include "BinarySearch.h"

class OperationAdapter : public ScoreOperation
{
public:
	OperationAdapter()
	{
		m_sortObj = new QuickSort();
		m_searchObj = new BinarySearch();
	}
	~OperationAdapter()
	{
		delete m_sortObj;
		delete m_searchObj;
	}
	int* sort(int array[],int size)
	{
		return m_sortObj->quickSort(array,size);
	}
	int search(int array[],int size,int key)
	{
		return m_searchObj->binarySearch(array,size,key);
	}
private:
	QuickSort* m_sortObj;
	BinarySearch* m_searchObj;
};

#endif
