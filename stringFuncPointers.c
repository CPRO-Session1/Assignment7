/* Yael Kelmer.
   write a program that implements two functions: strcat() and strcmp(). use pointers. write the main function to execute both of these functions on 2 strings. */

#include <stdio.h>
#include <string.h>


void stringCat (char string1[], char string2[]) {
	int lengthString3 = strlen (string1) + strlen (string2);
	char string3 [lengthString3];
	char *string3Ptr = string3;
	char *string1Ptr = string1;
	char *string2Ptr = string2;
	int i;
	for (i = 0; i < strlen (string1); i++) {
		*string3Ptr = *string1Ptr;
		string3Ptr++;
		string1Ptr++;
	}
	for (i = 0; i < strlen (string2); i++) {
		*string3Ptr = *string2Ptr;
		string3Ptr++;
		string2Ptr++;
	}
	*string3Ptr = '\0';
	printf("%s\n", string3);
}

int stringCmp (char string1[], char string2[]) {
	int shorterLength;
	if (strlen (string1) < strlen (string2)) {
		shorterLength = strlen (string1);
	}
	else {
		shorterLength = strlen (string2);
	}
	char *string1Ptr = string1;
	char *string2Ptr = string2;
	int i;
	for (i = 0; i < shorterLength; i++) {
		if (*string1Ptr == *string2Ptr) {
			string1Ptr++;
			string2Ptr++;
		}
		else if (*string1Ptr < *string2Ptr) {
			return 1;
		}
		else if (*string1Ptr > *string2Ptr) {
			return -1;
		}	
	}
	if (strlen (string1) == strlen (string2)) {
		return 0;
	}
	else if (strlen (string1) < strlen (string2)) {
		return 1;
	}
	else if (strlen (string1) > strlen (string2)) {
		return -1;
	}
} 



int main() {

	char string1 [] = "hello";
	char string2 [] = "world";
	printf ("This is the concatenation of string1 and string2: ");
	stringCat(string1, string2);
	int comparison = stringCmp(string1, string2);
	printf ("This is the comparison of string1 and string2: %d\n", comparison);
}
