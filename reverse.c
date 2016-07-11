//Bettina Benitez
#include <stdio.h>
#include <string.h>

void getReverse (char *x) {
	int i;
	int length = strlen(x); //gets the length of the string
	char *first = x; //points to the first character of the string
	char *last = x + length - 1; //points to the last character (not \0) of the string
	char temp; // temp is used as a place holder when switching letters
	for (i = 0; i < length/2; i++) { //length is divided by 2 because it only needs to go half way to swap
		temp = *first;
		*first = *last;
		*last = temp;
		*first ++; 
		*last--;
	}
	printf("%s", x);
}

int main () {
	printf("Enter a word: ");
	char word [100];
	fgets(word, sizeof(word), stdin);
	getReverse (word);
}
