//Ava N.
//In a program reverse.c, write a string reversal function using pointers that takes only a string as input, creates 2 pointers, performs a string reversal using those pointers, and prints out the reversed string. Your driver should take a string input by the user using fgets().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char input;
	char arr[50];
	char *p1;
	char *p2;
	char temporary='\0';
	int n=100;

	printf("Give me a word that is under 50 letters long!!!!!! \n");
	//scanf(%s, &input);
	fgets(arr, sizeof(arr), stdin);
	arr[strlen(arr)-1]='\0';
	printf("\n");

	*p1 = arr[0];
	*p2 = arr[0];

	while (*p2 + 1 != '\0'){
		*p2++;
	}

	while (p1 <= p2){
		temporary = *p2;
		*p2 = *p1;
		*p1 = temporary;
		*p1++;
		*p2--;
	}

	printf("Here is the reversed of what you wrote: %s\n", arr);

}

/*
void reverse(char *p1, char*p2){
}
*/
