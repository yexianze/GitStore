//�ַ�����������㷨
#include <iostream>

//ʵ��strcmp����
int mystrcmp(const char* str1,const char* str2)
{
	if (str1==NULL || str2==NULL)
	{
		std::cout<<"�޷��Ƚ�"<<std::endl;
		return -2;
	}
	while(*str1!='\0' && *str2!='\0' && *str1==*str2)
	{
		str1++;
		str2++;
	}
	if (*str1!='\0' && *str2=='\0')
	{
		return 1;
	}
	else if (*str1=='\0' && *str2!='\0')
	{
		return -1;
	}
	else if (*str1>*str2)
	{
		return 1;
	}
	else if (*str1<*str2)
	{
		return -1;
	}
	return 0;
}

//ʵ��strcpy����
char* mystrcpy(char* str1,const char* str2)
{
	if (str1==NULL || str2==NULL)
	{
		std::cout<<"�޷�����"<<std::endl;
		return NULL;
	}
	char* p = str1;
	while(*str2 != '\0')
	{
		*p++ = *str2++;
	}
	*p = '\0';
	return str1;
}

//ʵ��strcat����
char* mystrcat(char* str1,const char* str2)
{
	if (str1==NULL || str2==NULL)
	{
		std::cout<<"�޷�����"<<std::endl;
		return NULL;
	}
	char* p = str1;
	while (*p != '\0') p++;
	while (*str2 != '\0')
	{
		*p++ = *str2++;
	}
	*p = '\0';
	return str1;
}

//ʵ��strlen����
int mystrlen(const char* str1)
{
	if (str1==NULL)
	{
		return 0;
	}
	int cout = 0;
	while (*str1++ != '\0')
	{
		cout++;
	}
	return cout;
}

//ʵ��strstr����
char* mystrstr(char* str1,char* str2)
{
	if (str1==NULL || str2==NULL)
	{
		std::cout<<"�޷�ƥ��"<<std::endl;
		return NULL;
	}
	char *p,*sub;
	while (*str1 != '\0')
	{
		p = str1;
		sub = str2;
		do 
		{
			if (*sub == '\0')
			{
				return str1;
			}
		} while (*p++==*sub++);
		str1++;
	}
	return NULL;
}

int main()
{
	char str1[20];
	char* str2 = "aceabcdefgss";
	char* str3 = "cde";

	mystrcpy(str1,str2);
	std::cout<<str1<<std::endl;
	std::cout<<mystrlen(str1)<<std::endl;
	std::cout<<mystrcmp(str2,str3)<<std::endl;
	std::cout<<mystrstr(str2,str3)<<std::endl;
	std::cout<<mystrcat(str1,str3)<<std::endl;

	getchar();

	return 0;
}