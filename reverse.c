#include <stdio.h>
#include <string.h>

void swap() {

	char string[50];
	printf("Enter your string");
	fgets(string, 50, stdin);

	char *stringPtr = string;
	char *reverseString = &string[strlen(string)];
}

int main() {	
	while (*stringPtr != *reverseString) {
	printf("%c", *(--reverseString)); }
	
	printf("\n");
	return 0;
}
