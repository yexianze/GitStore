#include <iostream>
#include <string>

inline void Swap(int& a,int& b)
{
	int tmp = b;
	b = a;
	a = tmp;
}

inline void PrintArray(int array[],int size)
{
	for (int i=0; i<size; i++)
	{
		std::cout<<array[i]<<" ";
	}
	std::cout<<std::endl;
}

//ð������
//ʱ�临�Ӷȣ�n2
int* BubbleSort(int array[],int size)
{
	int j = size;
	while (j>1)
	{
		bool flag = true;
		for (int i=1; i<j; i++)
		{
			if (array[i] < array[i-1])
			{
				Swap(array[i],array[i-1]);
				flag = false;
			}
		}
		j--;
		//������
		if (flag)
			break;
	}
	return array;
}
//ֱ�Ӳ�������
//ʱ�临�Ӷȣ�n2
int* InsertSort(int array[],int size)
{
	for (int i=1; i<size; i++)
	{
		int tmp = array[i];
		int j = i;
		while (j>0 && tmp < array[j-1])
		{
			array[j] = array[j-1];
			j--;
		}
		array[j] = tmp;
	}
	return array;
}

//��ѡ������
//ʱ�临�Ӷȣ�n2
int* ChoiceSort(int array[],int size)
{
	for (int i=0; i<size-1; i++)
	{
		int min = i;
		//����СԪ��
		for (int j=i+1; j<size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			Swap(array[i],array[min]);
		}
	}
	return array;
}

//ϣ������
//ʱ�临�Ӷȣ�nlogn
int* ShellSort(int array[],int size)
{
	int step;
	for (step=size/2; step>0; step/=2)
	{
		for (int i=step; i<size; i++)
		{
			int j = i;
			int temp = array[j];
			if (array[j] < array[j-step])
			{
				while(j-step>=0 && temp<array[j-step])
				{
					array[j] = array[j-step];
					j -= step;
				}
				array[j] = temp;
			}
		}
	}
	return array;
}

//��������
//ʱ�临�Ӷȣ�nlogn
int partitionIt(int array[],int left,int right)
{
	int i = left;
	int j = right + 1;
	int pivot = array[left];
	while(true)
	{
		while (i<right && array[++i]<pivot){}
		while (j>0 && array[--j]>pivot){}
		if (i >= j)
		{
			break;
		}
		else
		{
			Swap(array[i],array[j]);
		}
	}
	Swap(array[left],array[j]);
	return j;
}
void recQuickSort(int array[],int left,int right)
{
	if (right <= left)
	{
		return;
	}
	else
	{
		int partition = partitionIt(array,left,right);
		recQuickSort(array,left,partition-1);
		recQuickSort(array,partition+1,right);
	}
}
int* QuickSort(int array[],int size)
{
	recQuickSort(array,0,size-1);
	return array;
}

int main()
{
	int array[10] = {8,3,2,5,4,1,2,6,3,9};
	std::cout<<"ԭʼδ�������飺";
	PrintArray(array,10);
	int* pp = new int[10];
	std::cout<<"��ѡ�����򷽷���1.ð������2.ֱ�Ӳ�������3.��ѡ������4.ϣ������5.�������򣩣�"<<std::endl;
	std::string type;
	std::getline(std::cin,type);
	if (type == "1")
	{
		pp = BubbleSort(array,10);
		std::cout<<"ð����������";
	}
	else if(type == "2")
	{
		pp = InsertSort(array,10);
		std::cout<<"ֱ�Ӳ�����������";
	}
	else if (type == "3")
	{
		pp = ChoiceSort(array,10);
		std::cout<<"��ѡ����������";
	}
	else if (type == "4")
	{
		pp = ShellSort(array,10);
		std::cout<<"ϣ����������";
	}
	else if (type == "5")
	{
		pp = QuickSort(array,10);
		std::cout<<"������������";
	}
	PrintArray(pp,10);

	getchar();
	return 0;
}