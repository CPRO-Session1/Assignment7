#include <stdio.h>
#include <string.h>

void swap(char*word,int sizeWord){
	int i;
	int j;
	char * wordPtr=word;
	if (sizeWord%2==0)
	{
	for (i=0;i<sizeWord/2;i++)
	{
	char tmp = wordPtr[i];
	wordPtr[i] = wordPtr[sizeWord-i];
	wordPtr[sizeWord-i] =  tmp;
	}
	}
	else 
	{
	for (i=0;i<(sizeWord-1)/2;i++)
	{
	char tmp = wordPtr[i];
	wordPtr[i] = wordPtr[sizeWord-i];
	wordPtr[sizeWord-i]=tmp;
	}
	}
	for (j=0;j<sizeWord;j++)
        {
        printf("%c\n",wordPtr[j]);
        }
}

int main(){
	char* arr1;
	printf("Enter the word you want to flip: \n");
	fgets(arr1,sizeof(arr1),stdin);
	swap(arr1,sizeof(arr1));
}
	
