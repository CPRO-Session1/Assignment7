/* Yael Kelmer.
 This code takes a user inputted string and uses a function that I created in order to print the string backwards. */

#include <stdio.h>
#include <string.h>

void reversal (char userString[]) {
	char *userStringStart = userString;
	char *userStringEnd = userStringStart + strlen (userString) - 1;
	int i;
	for (i = 0; *userStringStart != *userStringEnd; i++) {
		printf ("%c", *userStringEnd);
		userStringEnd--;
	}
	printf ("%c\n", *userStringEnd);
}



int main () 
{
	printf ("Please type a string of letters\n");
	char userString [100];
	fgets (userString, sizeof(userString), stdin);
	userString [strlen (userString) - 1] = '\0';
	reversal(userString);
}
