/*Lloyd Page*/
/*Implement strcat, strcmp, use pointers to execute functions on 2 strings*/
#include<stdio.h>
int strcmp(char*,char*);
char* strcat(char*,char*);
int main()
{
	char s1[12]="Hello";
	char s2[]="Hell";
	int x=strcmp(s1,s2);
	printf("%d\n",x);
	strcat(s1,s2);
	printf("%s\n",s1);
	return 0;
}
int strcmp(char*a,char*b)
{
	if(*a>*b)
	{
		return 1;
	}
	else
	{
		if(*b>*a)
		{
			return  -1;
		}
		else
		{
			if(*a=='\0'&&*b=='\0')
			{
				return 0;
			}
			else
			{
				a++;
				b++;
				return strcmp(a,b);
			}
		}
	}
}
char* strcat(char*a,char*b)
{
	int i=0,j=0,l=0;
	while(*(a+i)!='\0') i++;
	while(*(b+j)!='\0') j++;
	int k=i;
	while(l<j)
	{
		*(a+k)=*(b+l);
		k++;
		l++;
	}
	return a;
}
