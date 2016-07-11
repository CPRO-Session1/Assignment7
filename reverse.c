//Ava N.
//In a program reverse.c, write a string reversal function using pointers that takes only a string as input, creates 2 pointers, performs a string reversal using those pointers, and prints out the reversed string. Your driver should take a string input by the user using fgets().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr[50];
	char *p1;
	char *p2;
	char temporary;

	printf("Input a string that is under 50 letters long!!!!!! \n");

	fgets(arr, sizeof(arr), stdin);
	printf("\n");
	p1 = &arr;                 /* points to first character in string */
	p2 = &arr[strlen(arr)-1];  /* points to last character in string */


/* Diagnostic purposes ... */

	printf("\nThe following is diagnostic *****\n");
	printf("You input: %s\n",arr);
	printf("Sizeof(arr) is %d\n",sizeof(arr));
	printf("String Length (including null) is: %d\n",strlen(arr));
	printf("first character is: %c\n",arr[0]);
	printf("last character is: %c\n",arr[strlen(arr)-2]);
	printf("P1 and P2 point to char: %c %c\n",*p1,*p2);
	printf("arr[0] is: %c\n",arr[0]);
	printf("p1 address is %d\n",p1);
	printf("p2 address is %d\n",p2);
	printf("end diagnostic!**** \n\n");

/* End diagnostic */




	while (p1 <= p2){
		temporary = *p2;
		*p2 = *p1;
		*p1 = temporary;
		*p1++;
		*p2--;
	}

	printf("Here is the reversed of what you wrote: %s\n", arr);

}
