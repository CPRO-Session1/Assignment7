#include <stdio.h>
#include <string.h>
void concat(char *ptr1, char *ptr2)
{
	char *ptr3 = ptr1;
	while (*ptr3 != '\0')
	{
		ptr3++;
	}
	while (*ptr2 != '\0')
	{
	 	*ptr3 = *ptr2;
	 	ptr3++;
	 	ptr2++;
	}
	ptr3++;
	*ptr3 = '\0';
}
int compare(char *ptr1, char *ptr2)
{
	int flag=0;
	   
	while(*ptr1!='\0' && *ptr2!='\0'){
		if(*ptr1 != *ptr2){
			flag=1;
			break;
		}
		ptr1++;
		ptr2++;
	}
        if (flag==0 && *ptr1=='\0' && *ptr2=='\0')
	{
		return 0;
	}
	else if (*ptr1 > *ptr2)
	{
		return 1;
	}
	else if (*ptr2 > *ptr1)
	{
		return -1;
	}

}
int main()
{
	char ptr1[12] = "Hello ", ptr2[] = "World";
	concat(ptr1, ptr2);
	printf("%d\n", compare(ptr1,ptr2));
	printf("%s\n", ptr1);
	return 0;
}
