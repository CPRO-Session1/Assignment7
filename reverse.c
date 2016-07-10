/*Lloyd Page*/
/*String reversal function with 2 pointers, user input*/
#include<stdio.h>
void reverse(char*,char*);
int main()
{
	char y;
	do
	{
		char handler[100];
		printf("Enter a string\n");
		fgets(handler,sizeof(handler),stdin);
		char*p=handler;
		char*x=handler;
		for(int i=0;handler[i]!='\n';i++)
		{
			x++;
		}
		*x='\0';
		reverse(x,p);
		printf("Run Again?(y/n)");
		y=getchar();
		fgets(handler,sizeof(handler),stdin);
	}while(y=='y'||y=='Y');
	return 0;
}
void reverse(char*x,char*p)
{
	while(x!=(p-1))
	{
		printf("%c",*(x-1));
		x--;
	}
	printf("\n");
}

