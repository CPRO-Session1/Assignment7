/*Sean Kee*/
/*Reverse inputted string using pointers*/
#include <stdio.h>
#include <string.h>

void stringReverse(char string[]) {
	char swap;
	char *beginptr = &string[0];
	char *endptr = &string[strlen(string) - 1];

	while (beginptr < endptr) {
		swap = *beginptr;
		*beginptr = *endptr;
		*endptr = swap;
		beginptr++;
		endptr--;
	}

	printf("New String: %s\n", string);
		
}

int main() {
	char input[100];
	printf("Input a string\n#: ");
	fgets(input, sizeof(input), stdin);
	input[strlen(input)-1] = '\0';
	stringReverse(input);

	return 0;
}
