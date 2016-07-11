//Emma Ladouceur


#include <stdio.h>
#include <string.h>


int reverse(char arr[]){
	

	char *ptrStart = arr;

	char *ptrEnd = ptrStart + strlen(arr)-1;

	int i;
		for(i=0; *ptrStart != *ptrEnd; i++){
			printf("%c", *ptrEnd);
			--ptrEnd;

		}

}
int main(){
	printf("Enter a string of no more than 100 letters\n");
	char string[100];
	fgets(string, sizeof(string), stdin);
	reverse(string);



return 0;



}
