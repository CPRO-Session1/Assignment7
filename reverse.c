/*Rumeet Goradia - String Reversal*/
#include<stdio.h>
#include<string.h>

void reversal (char *word)
{
	char *wordStart = word;
	char *wordEnd = wordStart + strlen(word) - 2;
	for(;wordEnd>=wordStart;wordEnd--)
	{
		printf("%c", *wordEnd);
	}
	printf("\n");
	return;
}
int main()
{
	char word[100];
	printf("Please input a string.\n");
	fgets(word, sizeof(word), stdin);
	reversal(word);
	return 0;
}
