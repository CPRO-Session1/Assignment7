//Clarke Littlejohn
//reverse.c
// i had no idea how to use the second pointer, it seems useless to me as i just used a tracker it see how far
//away the end was from the start

#include<stdio.h>


void reverse(char[]);

int main(){

	char str1[100];
	
	printf("Enter in a word.");
	fgets(str1,sizeof(str1),stdin);
	reverse(str1);
	
}


void reverse(char str1[]){

	int tracker = 0;
	char* pStr=str1;
	char* pStr2;
	char start = *pStr;
	while(*pStr!='\n'){pStr++;tracker++; }
	*pStr='\0';
	printf("%s\n",str1);
	for(;tracker>0;tracker--){
		pStr--;
		printf("%c",*pStr);
	}

	
}
