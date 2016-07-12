// Julia Tan
// reverse.c

#include <stdio.h>
#include <string.h>

void reverse(char* a, char* b, char *c, char *d){
	for (int i = 0; i < (strlen(c) - 1); i ++){
		*b = *a;
		a --; // move back 1 position in input string
		b ++; // move forward 1 position in reverse string
	}
}

int main (){
	char word[100];
	char *word1 = word; // pointer to entire input string
	char* ptr1 = word; // pointer to each letter in input string
	printf("Enter a word: \n");
	fgets(word, sizeof(word), stdin);
	char revWord[sizeof(word)]; // reverse string
	char* ptr2 = revWord; // pointer to each letter in reverse string
	char *word2 = revWord; // pointer to entire reverse string
	while (*ptr1 != '\0'){ // finds end of string
		ptr1 ++;
	}
	ptr1 -= 2;
	reverse(ptr1, ptr2, word1, word2);
	printf("The reverse string is:\n%s\n", word2);
	return 0;
}
