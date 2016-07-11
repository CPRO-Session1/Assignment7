/* Harry Brickner
 * Given a string, will print out the reversed string (minus the newline character at the end, if there is one.) */
#include <stdio.h>
#include <string.h>

void swap (char* a, char* b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(char str[], int length){
	if(str[length - 1] == '\n') str[--length] = '\0';
	for(int i = 0; i < length / 2; i++){
		swap(&str[i], &str[length - i - 1]);
	}
}

void driver(){
	int length = 50;
	char input[50];
	printf("Please input a string\n");
	fgets(input, length, stdin);
	reverse(input, strlen(input));
	printf("Reversed string is:\"%s\"\n", input);
}

int main(){
	driver();
	return 0;
}
