#include <stdio.h>
#include <string.h>
#include <assert.h>

char* strcpy(char*s1,const char*s2){
	assert((s1!=NULL)&&(s2!=NULL));
	char*ret=s1;
	while((*s1++==*s2++)!='\0');
	return ret;
}

char* strcat(char*s1,const char*s2){
	char* address=s1;
	assert((s1!=NULL)&&(s2!=NULL));
	while(*s1)
	{
		s1++;
	}
	while(*s1==*s2)
	{
		NULL;
	}
	return address;
}

int main(){
	char* s1;
	const char* s2;
	printf("Please type in the first sentence:\n");
	scanf("%s",&s1);
	printf("Please type in the second sentence:\n");
	scanf("%s",&s2);
	printf("%s",strcpy(s1,s2));
	printf("%s",strcat(s1,s2));
	return 0;
}



