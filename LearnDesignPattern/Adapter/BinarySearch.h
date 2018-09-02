#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

class BinarySearch
{
public:
	int binarySearch(int array[],int size,int key)
	{
		int low = 0;
		int high = size-1;
		while (low <= high)
		{
			int mid = (low + high) / 2;
			int midVal = array[mid];
			if (midVal < key){
				low = mid + 1;
			}
			else if (midVal > key){
				high = mid - 1;
			}
			else{
				return 1;
			}
		}
		return -1;
	}
};

#endif
