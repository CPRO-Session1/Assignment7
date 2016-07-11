/* Reverse a string
   @author Aly Milich
   */

#include <stdio.h>
#include <string.h>

int reverse(char arr[]){
	char *ptr1 = arr;

	char *ptr2 = ptr1 + strlen(arr) -1;

	int i;

	for(i=0; *ptr1!=*ptr2; i++){
		printf("%c", *ptr2);
		--ptr2;
	}
}

int main(){

	char string[] = "MILICH\0";

	reverse(string);

	return 0;

}
