/* Matthew Danielson
*  7/7/16
*  reverse.c
*  Takes a string and prints it in reverse
*/

#include <stdio.h>

int main(){
	int length;
	char throwaway;
	printf("How long will your string be?");
	scanf("%d", &length);
	length ++;
	scanf("%c", &throwaway);
	char array[length];
	printf("\nPlease enter a string:");
	fgets(array, sizeof(array), stdin);
	char *start = array;
	char *end = array + sizeof(array) + 1;
	while(*start != *end){
		printf("%c", *end);
		*end--;
	}
	printf("\n");

}
